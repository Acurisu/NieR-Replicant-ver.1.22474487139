import React, { useState } from "react";
import { Box, Container, Fab } from "@material-ui/core";
import { createStyles, makeStyles, Theme } from "@material-ui/core/styles";
import SaveIcon from "@material-ui/icons/Save";

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
      display: "flex",
      width: "100%",
      justifyContent: "center",
      bottom: theme.spacing(2),
      paddingRight: "calc(100vw - 100%)",
    },

    icon: {
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
