import React from 'react';
import ReactDOM from 'react-dom';

import { ThemeProvider, CssBaseline } from '@material-ui/core';
import { createMuiTheme } from '@material-ui/core/styles';

import App from './App';
// import reportWebVitals from './reportWebVitals';

const theme = createMuiTheme({
  palette: {
    type: 'dark',
  },
});

ReactDOM.render(
  <React.StrictMode>
    <ThemeProvider theme={theme}>
      <div>
        <CssBaseline />
         <App />
      </div>
    </ThemeProvider>
  </React.StrictMode>,
  document.getElementById('root')
);

// reportWebVitals();
