import React from "react";
import {
  FormControl,
  Grid,
  Input,
  InputLabel,
  MenuItem,
  Select,
} from "@mui/material";

import { Savefile } from "../interfaces";

interface Props {
  name: string;
  data: string[];
  renderValue: (
    f?: (value: string | number) => string | number
  ) => (selected: unknown) => React.ReactNode;
  slot: Savefile;
}

const Bitfield: React.FC<Props> = ({ name, data, renderValue, slot }) => {
  const handleOnClick = (idx: number) => () => {
    slot[name as keyof Savefile][Math.floor(idx / 32)] ^= 1 << idx % 32;
  };

  return (
    <Grid item xs={12}>
      <FormControl fullWidth>
        <InputLabel id={name}>{name}</InputLabel>
        <Select
          labelId={name}
          multiple
          defaultValue={data.reduce<number[]>((result, value, idx) => {
            if (value !== "") {
              if (
                (slot[name as keyof Savefile][Math.floor(idx / 32)] &
                  (1 << idx % 32)) !==
                0
              )
                result.push(idx);
            }
            return result;
          }, [])}
          input={<Input />}
          renderValue={renderValue((idx) => data[idx as number])}
        >
          {data.reduce<JSX.Element[]>((result, value, idx) => {
            if (value !== "")
              result.push(
                <MenuItem key={idx} value={idx} onClick={handleOnClick(idx)}>
                  {value}
                </MenuItem>
              );
            return result;
          }, [])}
        </Select>
      </FormControl>
    </Grid>
  );
};

export default Bitfield;
