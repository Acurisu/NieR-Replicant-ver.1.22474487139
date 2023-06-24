import React from "react";
import {
  Accordion,
  AccordionDetails,
  AccordionSummary,
  Chip,
  SelectChangeEvent,
  Typography,
} from "@mui/material";
import { createStyles, makeStyles } from "@mui/styles";
import { Theme } from "@mui/material/styles";
import ExpandMoreIcon from "@mui/icons-material/ExpandMore";

import { Savefile } from "../interfaces";
import DocumentsTutorials from "./tabs/DocumentsTutorials";
import General from "./tabs/General";
import Items from "./tabs/Items";
import KeyItemsMaps from "./tabs/KeyItemsMaps";
import Quests from "./tabs/Quests";
import WeaponsWords from "./tabs/WeaponsWords";

interface Props {
  slotName: string;
  slot: Savefile;
}

const useStyles = makeStyles((theme: Theme) =>
  createStyles({
    category: {
      textShadow: "0px 4px 4px rgba(0,0,0,0.33)",
    },

    heading: {
      fontSize: theme.typography.pxToRem(15),
      flexShrink: 0,
    },

    input: {
      display: "none",
    },

    label: {
      justifySelf: "center",
    },

    chips: {
      display: "flex",
      flexWrap: "wrap",
    },

    chip: {
      margin: 2,
    },

    noLabel: {
      marginTop: theme.spacing(3),
    },
  })
);

const Slot: React.FC<Props> = ({ slotName, slot }) => {
  const classes = useStyles();

  const [expanded, setExpanded] = React.useState<string | false>(false);

  const handleChange =
    (panel: string) => (_: React.ChangeEvent<{}>, isExpanded: boolean) => {
      setExpanded(isExpanded ? panel : false);
    };

  const handleOnChange =
    (object: any, key: string, number: boolean) =>
    (event: React.ChangeEvent<HTMLInputElement>) => {
      object[key] = number ? event.target.valueAsNumber : event.target.value;
    };

  const handleOnChangeSelect =
    (object: any, key: string) => (event: SelectChangeEvent<any>) => {
      object[key] = event.target.value as string;
    };

  const handleOnClick = (object: any, key: string) => () => {
    object[key] = object[key] === 0 ? 1 : 0;
  };

  const renderValue =
    (f?: (value: string | number) => string | number) => (selected: unknown) =>
      (
        <div className={classes.chips}>
          {(selected as string[]).map((value) => (
            <Chip
              key={value}
              label={f ? f(value) : value}
              className={classes.chip}
            />
          ))}
        </div>
      );

  return (
    <React.Fragment key={slotName}>
      <Accordion
        expanded={expanded === "General"}
        onChange={handleChange("General")}
      >
        <AccordionSummary
          expandIcon={<ExpandMoreIcon />}
          aria-controls="Generalbh-content"
          id="Generalbh-header"
        >
          <Typography className={classes.heading}>General</Typography>
        </AccordionSummary>
        <AccordionDetails>
          <General
            handleOnChange={handleOnChange}
            handleOnChangeSelect={handleOnChangeSelect}
            slot={slot}
          />
        </AccordionDetails>
      </Accordion>

      <Accordion
        expanded={expanded === "Quests"}
        onChange={handleChange("Quests")}
      >
        <AccordionSummary
          expandIcon={<ExpandMoreIcon />}
          aria-controls={`Questssbh-content`}
          id={`Questsbh-header`}
        >
          <Typography className={classes.heading}>Quests</Typography>
        </AccordionSummary>
        <AccordionDetails>
          <Quests renderValue={renderValue} slot={slot} />
        </AccordionDetails>
      </Accordion>

      <Accordion
        expanded={expanded === "WeaponsWords"}
        onChange={handleChange("WeaponsWords")}
      >
        <AccordionSummary
          expandIcon={<ExpandMoreIcon />}
          aria-controls={`WeaponsWordsbh-content`}
          id={`WeaponsWordsbh-header`}
        >
          <Typography className={classes.heading}>Weapons & Words</Typography>
        </AccordionSummary>
        <AccordionDetails>
          <WeaponsWords
            handleOnChangeSelect={handleOnChangeSelect}
            renderValue={renderValue}
            slot={slot}
          />
        </AccordionDetails>
      </Accordion>

      <Accordion
        expanded={expanded === "DocumentsTutorials"}
        onChange={handleChange("DocumentsTutorials")}
      >
        <AccordionSummary
          expandIcon={<ExpandMoreIcon />}
          aria-controls={`DocumentsTutorialssbh-content`}
          id={`DocumentsTutorialsbh-header`}
        >
          <Typography className={classes.heading}>
            Documents & Tutorials
          </Typography>
        </AccordionSummary>
        <AccordionDetails>
          <DocumentsTutorials
            handleOnClick={handleOnClick}
            renderValue={renderValue}
            slot={slot}
          />
        </AccordionDetails>
      </Accordion>

      <Accordion
        expanded={expanded === "KeyItemsMaps"}
        onChange={handleChange("KeyItemsMaps")}
      >
        <AccordionSummary
          expandIcon={<ExpandMoreIcon />}
          aria-controls={`KeyItemsMapsbh-content`}
          id={`KeyItemsMapsbh-header`}
        >
          <Typography className={classes.heading}>Key Items & Maps</Typography>
        </AccordionSummary>
        <AccordionDetails>
          <KeyItemsMaps
            handleOnClick={handleOnClick}
            renderValue={renderValue}
            slot={slot}
          />
        </AccordionDetails>
      </Accordion>

      <Items
        name="Recovery"
        expanded={expanded}
        heading={classes.heading}
        handleChange={handleChange}
        handleOnChange={handleOnChange}
        slot={slot}
      />
      <Items
        name="Raw Materials"
        expanded={expanded}
        heading={classes.heading}
        handleChange={handleChange}
        handleOnChange={handleOnChange}
        slot={slot}
      />
      <Items
        name="Fishing"
        expanded={expanded}
        heading={classes.heading}
        handleChange={handleChange}
        handleOnChange={handleOnChange}
        slot={slot}
      />
      <Items
        name="Cultivation"
        expanded={expanded}
        heading={classes.heading}
        handleChange={handleChange}
        handleOnChange={handleOnChange}
        slot={slot}
      />
    </React.Fragment>
  );
};

export default Slot;
