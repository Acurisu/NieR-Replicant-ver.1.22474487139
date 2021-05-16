import React from "react";
import {
  FormControl,
  Grid,
  Input,
  InputLabel,
  MenuItem,
  Select,
} from "@material-ui/core";

import { Savefile } from "../interfaces";
import { quest, quests } from "../Nier";

interface Props {
  completed: boolean;
  renderValue: (
    f?: (value: string | number) => string | number
  ) => (selected: unknown) => React.ReactNode;
  slot: Savefile;
}

const Questfield: React.FC<Props> = ({ completed, renderValue, slot }) => {
  const handleOnClick = (idx: number) => () => {
    slot.Quests[Math.floor(idx / 32)] ^= 1 << idx % 32;
  };

  const handleOnClickSpecial = (idx: number) => () => {
    slot.Quest ^= 1 << idx;
  }

  const str = completed ? "Completed" : "Available";
  const data = quests[completed ? 1 : 0];

  const specialIdx = quest[completed ? 2 : 1];

  return (
    <Grid item xs={12}>
      <FormControl fullWidth>
        <InputLabel id={str}>{str}</InputLabel>
        <Select
          labelId={str}
          multiple
          defaultValue={Object.keys(data).reduce<number[]>((result, key) => {
            const idx = Number(key);
            if ((slot.Quests[Math.floor(idx / 32)] & (1 << idx % 32)) !== 0)
              result.push(idx);

            return result;
          }, [])}
          input={<Input />}
          renderValue={renderValue((key) => data[key as keyof typeof data])}
        >
          {Object.entries(data).map(([key, value]) => {
            const idx = Number(key);
            return (
              <MenuItem key={idx} value={idx} onClick={handleOnClick(idx)}>
                {value}
              </MenuItem>
            );
          })}
          <MenuItem key={specialIdx} value={specialIdx} onClick={handleOnClickSpecial(specialIdx)}>
            {quest[0]}
          </MenuItem>
        </Select>
      </FormControl>
    </Grid>
  );
};

export default Questfield;