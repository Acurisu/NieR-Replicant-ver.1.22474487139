import React from "react";
import {
  FormControl,
  Grid,
  Input,
  InputLabel,
  MenuItem,
  Select,
} from "@mui/material";

import { Savefile } from "../../interfaces";

interface Props {
  handleOnClick: (object: any, key: string) => () => void;
  renderValue: (
    f?: (value: string | number) => string | number
  ) => (selected: unknown) => React.ReactNode;
  slot: Savefile;
}

const KeyItemsMaps: React.FC<Props> = ({
  handleOnClick,
  renderValue,
  slot,
}) => {
  return (
    <Grid container spacing={3}>
      <Grid item xs={12}>
        <FormControl fullWidth>
          <InputLabel id="key-items">Key Items</InputLabel>
          <Select
            labelId="key-items"
            multiple
            defaultValue={Object.entries(slot["Key Items"])
              .filter(([_, value]) => value !== 0)
              .map(([key]) => key)}
            input={<Input />}
            renderValue={renderValue()}
          >
            {Object.keys(slot["Key Items"]).map((key) => (
              <MenuItem
                onClick={handleOnClick(slot["Key Items"], key)}
                key={key}
                value={key}
              >
                {key}
              </MenuItem>
            ))}
          </Select>
        </FormControl>
      </Grid>

      <Grid item xs={12}>
        <FormControl fullWidth>
          <InputLabel id="maps">Maps</InputLabel>
          <Select
            labelId="maps"
            key="maps"
            multiple
            defaultValue={Object.entries(slot.Maps)
              .filter(([key, value]) => value !== 0 && !key.startsWith("unk"))
              .map(([key]) => key)}
            input={<Input />}
            renderValue={renderValue()}
          >
            {Object.keys(slot.Maps).map((key) =>
              key.startsWith("unk") ? (
                ""
              ) : (
                <MenuItem
                  onClick={handleOnClick(slot.Maps, key)}
                  key={key}
                  value={key}
                >
                  {key}
                </MenuItem>
              )
            )}
          </Select>
        </FormControl>
      </Grid>
    </Grid>
  );
};

export default KeyItemsMaps;
