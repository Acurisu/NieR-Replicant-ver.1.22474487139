import React from "react";
import {
  FormControl,
  Grid,
  Input,
  InputLabel,
  MenuItem,
  Select,
} from "@mui/material";

import Bitfield from "../Bitfield";
import { Savefile } from "../../interfaces";
import { tutorials } from "../../Nier";

interface Props {
  handleOnClick: (object: any, key: string) => () => void;
  renderValue: (
    f?: (value: string | number) => string | number
  ) => (selected: unknown) => React.ReactNode;
  slot: Savefile;
}

const DocumentsTutorials: React.FC<Props> = ({
  handleOnClick,
  renderValue,
  slot,
}) => {
  return (
    <Grid container spacing={3}>
      <Grid item xs={12}>
        <FormControl fullWidth>
          <InputLabel id="documents">Documents</InputLabel>
          <Select
            labelId="documents"
            multiple
            defaultValue={Object.entries(slot.Documents)
              .filter(([_, value]) => value !== 0)
              .map(([key]) => key)}
            input={<Input />}
            renderValue={renderValue()}
          >
            {Object.keys(slot.Documents).map((key) => (
              <MenuItem
                onClick={handleOnClick(slot.Documents, key)}
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
        <Bitfield
          name="Tutorials"
          data={tutorials}
          renderValue={renderValue}
          slot={slot}
        />
      </Grid>
    </Grid>
  );
};

export default DocumentsTutorials;
