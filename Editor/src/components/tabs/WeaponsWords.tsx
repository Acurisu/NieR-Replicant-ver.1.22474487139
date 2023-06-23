import React from "react";
import {
  FormControl,
  Grid,
  InputLabel,
  MenuItem,
  Select,
  SelectChangeEvent,
} from "@mui/material";

import Bitfield from "../Bitfield";
import { Savefile } from "../../interfaces";
import { words } from "../../Nier";

interface Props {
  handleOnChangeSelect: (
    object: any,
    key: string
  ) => (event: SelectChangeEvent<any>) => void;
  renderValue: (
    f?: (value: string | number) => string | number
  ) => (selected: unknown) => React.ReactNode;
  slot: Savefile;
}

const WeaponsWords: React.FC<Props> = ({
  handleOnChangeSelect,
  renderValue,
  slot,
}) => {
  return (
    <Grid container spacing={3}>
      {Object.entries(slot.Weapons).map(([key, value]) =>
        key.startsWith("unk") ? (
          ""
        ) : (
          <Grid key={key} item xs={6} sm={4} md={2}>
            <FormControl fullWidth variant="outlined">
              <InputLabel>{key}</InputLabel>
              <Select
                key={value as string}
                defaultValue={value}
                label={key}
                onChange={handleOnChangeSelect(slot.Weapons, key)}
              >
                <MenuItem value={255}>Not Owned</MenuItem>
                <MenuItem value={0}>Level 1</MenuItem>
                <MenuItem value={1}>Level 2</MenuItem>
                <MenuItem value={2}>Level 3</MenuItem>
                <MenuItem value={3}>Level 4</MenuItem>
              </Select>
            </FormControl>
          </Grid>
        )
      )}

      <Bitfield
        name="Words"
        data={words}
        renderValue={renderValue}
        slot={slot}
      />
    </Grid>
  );
};

export default WeaponsWords;
