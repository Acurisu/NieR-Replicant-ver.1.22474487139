import React from "react";
import {
  Accordion,
  AccordionDetails,
  AccordionSummary,
  Grid,
  TextField,
  Typography,
} from "@mui/material";
import ExpandMoreIcon from "@mui/icons-material/ExpandMore";

import { Savefile } from "../../interfaces";

interface Props {
  name: string;
  expanded: string | false;
  heading: string;
  handleChange: (
    panel: string
  ) => (event: React.ChangeEvent<{}>, isExpanded: boolean) => void;
  handleOnChange: (
    object: any,
    key: string,
    number: boolean
  ) => (event: React.ChangeEvent<HTMLInputElement>) => void;
  slot: Savefile;
}

const Items: React.FC<Props> = ({
  name,
  expanded,
  heading,
  handleChange,
  handleOnChange,
  slot,
}) => {
  return (
    <Accordion
      key={name}
      expanded={expanded === name}
      onChange={handleChange(name)}
    >
      <AccordionSummary
        expandIcon={<ExpandMoreIcon />}
        aria-controls={`${name}bh-content`}
        id={`${name}bh-header`}
      >
        <Typography className={heading}>{name}</Typography>
      </AccordionSummary>
      <AccordionDetails>
        <Grid container spacing={3}>
          {Object.entries(slot[name as keyof Savefile]).map(([key, value]) =>
            key.startsWith("unk") ? (
              ""
            ) : (
              <Grid key={key} item xs={6} sm={4} md={2}>
                <TextField
                  fullWidth
                  type="number"
                  InputProps={{
                    inputProps: {
                      pattern: "[0-9]*",
                      inputMode: "numeric",
                      min: 0,
                      max: 255,
                    },
                  }}
                  label={key}
                  defaultValue={value}
                  onChange={handleOnChange(
                    slot[name as keyof Savefile],
                    key,
                    true
                  )}
                />
              </Grid>
            )
          )}
        </Grid>
      </AccordionDetails>
    </Accordion>
  );
};

export default Items;
