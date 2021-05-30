import React from "react";
import { Divider, Grid, Link, Typography } from "@material-ui/core";
import { createStyles, makeStyles, Theme } from "@material-ui/core/styles";

const useStyles = makeStyles((theme: Theme) =>
  createStyles({
    div: {
      display: "flex",
      justifyContent: "center",
    },

    footer: {
      width: "75vw",
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
      <Grid container className={classes.footer}>
        <Grid container item xs={12} justify="center">
          <Divider className={classes.divider} />
        </Grid>

        <Grid container item xs={4} justify="center">
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

        <Grid container item xs={4} justify="center">
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

        <Grid container item xs={4} justify="center">
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
