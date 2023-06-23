import React from 'react';
import ReactDOM from 'react-dom';

import { ThemeProvider, CssBaseline } from '@mui/material';
import { createTheme  } from '@mui/material/styles';

import App from './App';
// import reportWebVitals from './reportWebVitals';

const theme = createTheme({
  palette: {
    mode: 'dark',
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
