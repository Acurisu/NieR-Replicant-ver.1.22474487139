import React from "react";
import {
  FormControl,
  Grid,
  InputLabel,
  MenuItem,
  Select,
  TextField,
} from "@material-ui/core";

import { Savefile } from "../../interfaces";
import {
  abilities,
  buttons,
  maps,
  oneHandedSwords,
  spears,
  twoHandedSwords,
  levelToXP,
} from "../../Nier";

interface Props {
  handleOnChange: (
    object: any,
    key: string,
    number: boolean
  ) => (event: React.ChangeEvent<HTMLInputElement>) => void;
  handleOnChangeSelect: (
    object: any,
    key: string
  ) => (event: React.ChangeEvent<{ value: unknown }>) => void;
  slot: Savefile;
}

const General: React.FC<Props> = ({
  handleOnChange,
  handleOnChangeSelect,
  slot,
}) => {
  const handleOnChangeLevel = (event: React.ChangeEvent<HTMLInputElement>) => {
    const lvl = event.target.valueAsNumber - 1;
    slot.Level = lvl;
    slot.XP = levelToXP[lvl];
  };

  return (
    <Grid container spacing={3}>
      <Grid item xs={12} sm={4}>
        <TextField
          fullWidth
          InputProps={{ inputProps: { maxLength: 10 } }}
          label="Name"
          defaultValue={slot.Name}
          onChange={handleOnChange(slot, "Name", false)}
        />
      </Grid>

      <Grid item xs={12} sm={4}>
        <FormControl fullWidth variant="outlined">
          <InputLabel>Map</InputLabel>
          <Select
            key={slot.Map}
            defaultValue={slot.Map}
            label="Map"
            onChange={handleOnChangeSelect(slot, "Map")}
          >
            {maps.map((map) => {
              return (
                <MenuItem key={map} value={map}>
                  {map}
                </MenuItem>
              );
            })}
          </Select>
        </FormControl>
      </Grid>

      <Grid item xs={12} sm={4}>
        <TextField
          fullWidth
          variant="filled"
          inputProps={{ style: { textAlign: "center" } }}
          type="text"
          label="Checksum"
          defaultValue={slot.Checksum}
          disabled
        />
      </Grid>

      <Grid item xs={6} md={3}>
        <TextField
          fullWidth
          type="number"
          InputProps={{
            inputProps: {
              pattern: "[0-9]*",
              inputMode: "numeric",
              min: 0,
              max: 4294967295,
            },
          }}
          label="Spawn"
          defaultValue={slot.Spawn}
          onChange={handleOnChange(slot, "Spawn", true)}
        />
      </Grid>

      <Grid item xs={6} md={3}>
        <FormControl fullWidth variant="outlined">
          <InputLabel>Character</InputLabel>
          <Select
            key={slot.Character}
            defaultValue={slot.Character}
            label="Character"
            onChange={handleOnChangeSelect(slot, "Character")}
          >
            <MenuItem value={0}>Nier (Young)</MenuItem>
            <MenuItem value={1}>Nier (Prologue)</MenuItem>
            <MenuItem value={2}>Nier (Old)</MenuItem>
            <MenuItem value={3}>Nier (Gestalt)</MenuItem>
            <MenuItem value={4}>Kainé</MenuItem>
          </Select>
        </FormControl>
      </Grid>

      <Grid item xs={6} md={3}>
        <TextField
          fullWidth
          type="number"
          InputProps={{
            inputProps: {
              pattern: "[0-9]*",
              inputMode: "numeric",
              min: 1,
              max: 99,
            },
          }}
          label="Level"
          defaultValue={slot.Level + 1}
          onChange={handleOnChangeLevel}
        />
      </Grid>

      <Grid item xs={6} md={3}>
        <TextField
          fullWidth
          type="number"
          InputProps={{
            inputProps: {
              pattern: "[0-9]*",
              inputMode: "numeric",
              min: -2147483648,
              max: 2147483647,
            },
          }}
          label="Money"
          defaultValue={slot.Money}
          onChange={handleOnChange(slot, "Money", true)}
        />
      </Grid>

      <Grid item xs={4} md={2}>
        <TextField
          fullWidth
          label="Health"
          defaultValue={slot.Health}
          disabled
        />
      </Grid>
      <Grid item xs={4} md={2}>
        <TextField
          fullWidth
          label="Health Kainé"
          defaultValue={slot["Health Kaine"]}
          disabled
        />
      </Grid>
      <Grid item xs={4} md={2}>
        <TextField
          fullWidth
          label="Health Emil"
          defaultValue={slot["Health Emil"]}
          disabled
        />
      </Grid>
      <Grid item xs={4} md={2}>
        <TextField fullWidth label="Magic" defaultValue={slot.Magic} disabled />
      </Grid>
      <Grid item xs={4} md={2}>
        <TextField
          fullWidth
          label="Magic Kainé"
          defaultValue={slot["Magic Kaine"]}
          disabled
        />
      </Grid>
      <Grid item xs={4} md={2}>
        <TextField
          fullWidth
          label="Magic Emil"
          defaultValue={slot["Magic Emil"]}
          disabled
        />
      </Grid>

      <Grid item xs={6} md={3}>
        <FormControl fullWidth variant="outlined">
          <InputLabel>Active Weapon</InputLabel>
          <Select
            defaultValue={slot["Active Weapon"]}
            label="Active Weapon"
            onChange={handleOnChangeSelect(slot, "Active Weapon")}
          >
            {oneHandedSwords.map((ability, idx) => {
              return (
                <MenuItem key={ability} value={idx}>
                  {ability}
                </MenuItem>
              );
            })}
            {twoHandedSwords.map((ability, idx) => {
              return (
                <MenuItem key={ability} value={idx + 20}>
                  {ability}
                </MenuItem>
              );
            })}
            {spears.map((ability, idx) => {
              return (
                <MenuItem key={ability} value={idx + 40}>
                  {ability}
                </MenuItem>
              );
            })}
          </Select>
        </FormControl>
      </Grid>

      <Grid item xs={6} md={3}>
        <FormControl fullWidth variant="outlined">
          <InputLabel>Selected One Handed Sword</InputLabel>
          <Select
            defaultValue={slot["Selected One Handed Sword"]}
            label="Selected One Handed Sword"
            onChange={handleOnChangeSelect(slot, "Selected One Handed Sword")}
          >
            <MenuItem value={4294967295}>None</MenuItem>
            {oneHandedSwords.map((ability, idx) => {
              return (
                <MenuItem key={ability} value={idx}>
                  {ability}
                </MenuItem>
              );
            })}
          </Select>
        </FormControl>
      </Grid>

      <Grid item xs={6} md={3}>
        <FormControl fullWidth variant="outlined">
          <InputLabel>Selected Two Handed Sword</InputLabel>
          <Select
            defaultValue={slot["Selected Two Handed Sword"]}
            label="Selected Two Handed Sword"
            onChange={handleOnChangeSelect(slot, "Selected Two Handed Sword")}
          >
            <MenuItem value={4294967295}>None</MenuItem>
            {twoHandedSwords.map((ability, idx) => {
              return (
                <MenuItem key={ability} value={idx + 20}>
                  {ability}
                </MenuItem>
              );
            })}
          </Select>
        </FormControl>
      </Grid>

      <Grid item xs={6} md={3}>
        <FormControl fullWidth variant="outlined">
          <InputLabel>Selected Spear</InputLabel>
          <Select
            defaultValue={slot["Selected Spear"]}
            label="Selected Spear"
            onChange={handleOnChangeSelect(slot, "Selected Spear")}
          >
            <MenuItem value={4294967295}>None</MenuItem>
            {spears.map((ability, idx) => {
              return (
                <MenuItem key={ability} value={idx + 40}>
                  {ability}
                </MenuItem>
              );
            })}
          </Select>
        </FormControl>
      </Grid>

      {buttons.map((button) => (
        <Grid key={button} item xs={6} md={3}>
          <FormControl fullWidth variant="outlined">
            <InputLabel>{button}</InputLabel>
            <Select
              key={`${button}-${slot[button as keyof Savefile]}`}
              defaultValue={slot[button as keyof Savefile]}
              label={button}
              onChange={handleOnChangeSelect(slot, button)}
            >
              {abilities.map((ability, idx) => {
                return (
                  <MenuItem key={ability} value={idx}>
                    {ability}
                  </MenuItem>
                );
              })}
            </Select>
          </FormControl>
        </Grid>
      ))}
    </Grid>
  );
};

export default General;
