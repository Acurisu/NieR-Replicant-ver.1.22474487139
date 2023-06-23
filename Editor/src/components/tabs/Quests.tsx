import React from "react";
import { Grid } from "@mui/material";

import { Savefile } from "../../interfaces";
import Questfield from "../Questfield";

interface Props {
  renderValue: (
    f?: (value: string | number) => string | number
  ) => (selected: unknown) => React.ReactNode;
  slot: Savefile;
}

const Quests: React.FC<Props> = ({ renderValue, slot }) => {
  return (
    <Grid container spacing={3}>
      <Grid item xs={12}>
        <Questfield completed={false} renderValue={renderValue} slot={slot} />
      </Grid>
      <Grid item xs={12}>
        <Questfield completed={true} renderValue={renderValue} slot={slot} />
      </Grid>
    </Grid>
  );
};

export default Quests;
