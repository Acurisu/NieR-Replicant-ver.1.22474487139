import React, { useState } from "react";
import { Box, Container, Fab } from "@mui/material";
import { createStyles, makeStyles } from "@mui/styles";
import { Theme } from "@mui/material/styles";
import SaveIcon from "@mui/icons-material/Save";

import Footer from "./components/Footer";
import Header from "./components/Header";
import Slot from "./components/Slot";
import { Savefile } from "./interfaces";
import { cksum, Gamedata } from "./Nier";

const useStyles = makeStyles((theme: Theme) =>
  createStyles({
    app: {
      paddingLeft: "calc(100vw - 100%)",
    },

    container: {
      marginBottom: theme.spacing(6),
    },

    fab: {
      position: "fixed",
      left: 0,
      display: "flex",
      width: "100%",
      justifyContent: "center",
      bottom: theme.spacing(2),
      paddingLeft: "calc(100vw - 100%)",
    },

    icon: {
      width: "56px",
      color: theme.palette.background.paper,
    },
  })
);

const App: React.FC<{}> = () => {
  const classes = useStyles();

  const [gamedata, setGamedata] = useState<false | Gamedata | undefined>();
  const [slot, setSlot] =
    useState<{ name: string; slot: Savefile } | undefined>();

  const handleSave = () => {
    if (gamedata) {
      gamedata.binary.writeAll(gamedata!.gamedata);

      gamedata.gamedata["Slot 1"].Checksum = cksum(
        gamedata?.binary.view,
        0x8160
      );
      gamedata.gamedata["Slot 2"].Checksum = cksum(
        gamedata?.binary.view,
        0x113c0
      );
      gamedata.gamedata["Slot 3"].Checksum = cksum(
        gamedata?.binary.view,
        0x1a620
      );

      gamedata.binary.writeAll(gamedata!.gamedata);
      gamedata.binary.saveAs("GAMEDATA");
    }
  };

  return (
    <div className={classes.app}>
      <Container className={classes.container}>
        <Box my={4}>
          <Header
            square={slot !== undefined}
            state={[gamedata, setGamedata]}
            setSlot={setSlot}
          />
          {gamedata && slot ? (
            <Slot slotName={slot.name} slot={slot.slot} />
          ) : (
            ""
          )}
        </Box>
      </Container>

      {gamedata ? (
        <div className={classes.fab}>
          <Fab aria-label="save" onClick={handleSave}>
            <SaveIcon className={classes.icon} />
          </Fab>
        </div>
      ) : (
        ""
      )}

      <Footer />
    </div>
  );
};

export default App;
