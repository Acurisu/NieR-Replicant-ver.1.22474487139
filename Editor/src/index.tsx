import React from "react";
import { createRoot } from "react-dom/client";

import { ThemeProvider, CssBaseline } from "@mui/material";
import { createTheme } from "@mui/material/styles";

import App from "./App";
// import reportWebVitals from './reportWebVitals';

const theme = createTheme({
  palette: {
    mode: "dark",
  },
});

const container = document.getElementById("root");
const root = createRoot(container!);
root.render(
  <React.StrictMode>
    <ThemeProvider theme={theme}>
      <div>
        <CssBaseline />
        <App />
      </div>
    </ThemeProvider>
  </React.StrictMode>
);

// reportWebVitals();
