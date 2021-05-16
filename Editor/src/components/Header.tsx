import React from "react";
import {
  FormControl,
  IconButton,
  InputLabel,
  Link,
  MenuItem,
  Paper,
  Select,
  Typography,
} from "@material-ui/core";
import { createStyles, makeStyles, Theme } from "@material-ui/core/styles";
import PublishIcon from "@material-ui/icons/Publish";

import { Savefile } from "../interfaces";
import { Gamedata } from "../Nier";

interface Props {
  square: boolean;
  state: [
    false | Gamedata | undefined,
    React.Dispatch<React.SetStateAction<false | Gamedata | undefined>>
  ];
  setSlot: React.Dispatch<
    React.SetStateAction<
      | {
          name: string;
          slot: Savefile;
        }
      | undefined
    >
  >;
}

const useStyles = makeStyles((theme: Theme) =>
  createStyles({
    root: {
      minHeight: 240,
      padding: theme.spacing(4),
      borderTopLeftRadius: 4,
      borderTopRightRadius: 4,
    },

    title: {
      textShadow: "0px 4px 4px rgba(0,0,0,0.5)",
    },

    subtitle: {
      textShadow: "0px 4px 4px rgba(0,0,0,0.33)",
    },

    upload: {
      display: "flex",
      justifyContent: "center",
    },

    input: {
      display: "none",
    },

    label: {
      justifySelf: "center",
    },
  })
);

const Header: React.FC<Props> = ({ square, state, setSlot }) => {
  const classes = useStyles();

  const [gamedata, setGamedata] = state;

  const onSelect = (event: React.ChangeEvent<HTMLInputElement>) => {
    if (
      !event.target ||
      !event.target.files?.length ||
      !event.target.files[0].size
    )
      return;

    const file = event.target.files[0];

    if (file.size !== 0x48200) {
      console.error(new Error("Invalid file size"));
      setGamedata(false);
      return;
    }

    const reader = new FileReader();

    reader.onload = (e) => {
      const data = e?.target?.result;
      if (data) {
        try {
          setGamedata(new Gamedata(data as ArrayBuffer));
        } catch (err) {
          console.error(err);
          setGamedata(false);
        }
      }
    };

    reader.onerror = (err) => {
      console.error(err);
      setGamedata(false);
    };

    reader.readAsArrayBuffer(file);
  };

  return (
    <Paper elevation={8} square={square} className={classes.root}>
      <Typography variant="h3" align="center" className={classes.title}>
        NieR Replicant ver.1.2247
        <wbr />
        4487139
      </Typography>
      <Typography variant="h4" align="center" className={classes.subtitle}>
        GAMEDATA Editor
      </Typography>
      <br />
      <Typography variant="h6" align="center">
        This editor should be pretty self-explanatory but there are some things
        to note.
        <br />
      </Typography>
      <Typography variant="body1" align="justify">
        Beware that this <strong>might introduce non-working states</strong>{" "}
        into your save file <strong>if used incorrectly</strong>. For example
        when giving yourself key items in certain situations. Selecting certain
        maps or spawn points{" "}
        <strong>may lead to a crash or falling out of bounds and dying</strong>.
        Spawn points usually are indexed starting from 1 with the exception of
        letterboxes and respawn points after falling down somewhere. While you
        can change the character to <i>Nier (Gestalt)</i> or <i>Kainé</i> the
        game loop will likely set it to another character as certain conditions
        are not fullfilled. The entire source code of this site and of other
        related stuff can be found on{" "}
        <Link
          target="_blank"
          rel="noopener"
          href="https://github.com/Acurisu/NieR-Replicant-ver.1.22474487139"
          variant="body1"
          color="textPrimary"
        >
          GitHub
        </Link>
        .
      </Typography>
      <br />
      <Typography variant="body1" align="center">
        Feel free to contact me on social media if you have any questions,
        requests or suggestions.
      </Typography>
      <br />

      <div className={classes.upload}>
        <input
          className={classes.input}
          id="upload"
          type="file"
          onChange={onSelect}
        />
        <label htmlFor="upload" className={classes.label}>
          <IconButton
            color="default"
            aria-label="upload gamedata"
            component="span"
          >
            <PublishIcon fontSize="large" />
          </IconButton>
        </label>
      </div>
      <br />

      {gamedata === undefined ? (
        ""
      ) : gamedata ? (
        <React.Fragment>
          <FormControl fullWidth variant="filled">
            <InputLabel>Save Slot</InputLabel>
            <Select
              label="Save Slot"
              defaultValue=""
              onChange={(e) => {
                e.target.value === ""
                  ? setSlot(undefined)
                  : setSlot({
                      name: e.target.value as string,
                      slot: gamedata.gamedata[
                        e.target.value as keyof typeof gamedata
                      ] as Savefile,
                    });
              }}
            >
              {gamedata.slots.map((value) => {
                return (
                  <MenuItem key={value} value={value}>
                    {value}
                  </MenuItem>
                );
              })}
            </Select>
          </FormControl>
        </React.Fragment>
      ) : (
        <Typography
          variant="h5"
          align="center"
          color="error"
          className={classes.subtitle}
        >
          Something went wrong when trying to load the file.
          <br />
          The file might be corrupt.
        </Typography>
      )}
    </Paper>
  );
};

export default Header;
