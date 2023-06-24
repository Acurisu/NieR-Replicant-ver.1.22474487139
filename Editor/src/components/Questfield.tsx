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
import { quests, Quest, specialQuest, SpecialQuest } from "../Nier";

const getMask = (l: number, r: number) =>
  ((1 << l) - 1) ^ (r === 31 ? 0xffffffff : ((1 << (r + 1)) >>> 0) - 1);
const setBits = (n: number, l: number, r: number) => n | getMask(l, r);
const unsetBits = (n: number, l: number, r: number) =>
  n & (0xffffffff ^ getMask(l, r));

interface Props {
  completed: boolean;
  renderValue: (
    f?: (value: string | number) => string | number
  ) => (selected: unknown) => React.ReactNode;
  slot: Savefile;
}

const Questfield: React.FC<Props> = ({ completed, renderValue, slot }) => {
  const handleOnClick = (value: Quest) => () => {
    const v = completed ? value.completed : value.available;
    slot.Quests[v.index] ^= 1 << v.offset;
    if (completed && value.fill) {
      const f =
        ((slot.Quests[v.index] >>> v.offset) & 1) === 1 ? setBits : unsetBits;
      for (
        let i = value.available.index + (value.available.offset === 31 ? 1 : 0);
        i <= value.completed.index;
        ++i
      ) {
        slot.Quests[i] = f(
          slot.Quests[i],
          i === value.available.index ? value.available.offset + 1 : 0,
          i === value.completed.index ? value.completed.offset : 31
        );
      }
    }
  };

  const handleOnClickSpecial = (value: SpecialQuest) => () => {
    if (completed) {
      const f =
        ((slot.Quest >>> value.completed) & 1) === 1 ? unsetBits : setBits;
      slot.Quest = f(slot.Quest, value.available, value.completed);
    } else {
      slot.Quest ^= 1 << value.available;
    }
  };

  const str = completed ? "Completed" : "Available";

  return (
    <Grid item xs={12}>
      <FormControl fullWidth>
        <InputLabel id={str}>{str}</InputLabel>
        <Select
          labelId={str}
          multiple
          defaultValue={Object.values(quests).reduce<string[]>(
            (result, value) => {
              const v = completed ? value.completed : value.available;
              if ((slot.Quests[v.index] & (1 << v.offset)) !== 0)
                result.push(value.name);

              return result;
            },
            (slot.Quest &
              (1 <<
                (completed
                  ? specialQuest.completed
                  : specialQuest.available))) !==
              0
              ? [specialQuest.name]
              : []
          )}
          input={<Input />}
          renderValue={renderValue((v) => v)}
        >
          {Object.values(quests).map((value) => {
            const v = completed ? value.completed : value.available;
            return (
              <MenuItem
                key={`${v.index}-${v.offset}`}
                value={value.name}
                onClick={handleOnClick(value)}
              >
                {value.name}
              </MenuItem>
            );
          })}
          <MenuItem
            key={`special-${
              completed ? specialQuest.completed : specialQuest.available
            }`}
            value={specialQuest.name}
            onClick={handleOnClickSpecial(specialQuest)}
          >
            {specialQuest.name}
          </MenuItem>
        </Select>
      </FormControl>
    </Grid>
  );
};

export default Questfield;
