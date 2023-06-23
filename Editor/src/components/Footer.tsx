import React from "react";
import { Divider, Grid, Link, Typography } from "@mui/material";
import { createStyles, makeStyles } from "@mui/styles";
import { Theme } from "@mui/material/styles";

const useStyles = makeStyles((theme: Theme) =>
  createStyles({
    div: {
      display: "flex",
      justifyContent: "center",
    },

    footer: {
      marginBottom: theme.spacing(12),
    },

    divider: {
      width: "100%",
      marginBottom: theme.spacing(2),
    },
  })
);

const Footer: React.FC<{}> = () => {
  const classes = useStyles();

  return (
    <div className={classes.div}>
      <Grid container width="75vw" className={classes.footer}>
        <Grid container item xs={12} justifyContent="center">
          <Divider className={classes.divider} />
        </Grid>

        <Grid container item xs={4} justifyContent="center">
          <Link
            target="_blank"
            rel="noopener"
            href="https://github.com/Acurisu/NieR-Replicant-ver.1.22474487139"
            variant="button"
            color="textSecondary"
            align="center"
          >
            Fork me on GitHub
          </Link>
        </Grid>

        <Grid container item xs={4} justifyContent="center">
          <Typography variant="button" color="textSecondary" align="center">
            made by{" "}
            <Link
              target="_blank"
              rel="noopener"
              href="https://github.com/Acurisu"
              variant="button"
              color="textSecondary"
            >
              Acurisu
            </Link>
          </Typography>
        </Grid>

        <Grid container item xs={4} justifyContent="center">
          <Typography variant="button" color="textSecondary" align="center">
            <Link
              target="_blank"
              rel="noopener"
              href="https://twitter.com/acurisu"
              variant="button"
              color="textSecondary"
            >
              Twitter
            </Link>
            <br />
            <Link
              target="_blank"
              rel="noopener"
              href="https://steamcommunity.com/id/Acurisu/"
              variant="button"
              color="textSecondary"
            >
              Steam
            </Link>
          </Typography>
        </Grid>
      </Grid>
    </div>
  );
};

export default Footer;
