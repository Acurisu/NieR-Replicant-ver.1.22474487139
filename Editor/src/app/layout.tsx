import "@mantine/core/styles.css";
import type { Metadata } from "next";
import { ColorSchemeScript, MantineProvider, createTheme } from "@mantine/core";
import "./globals.css";

const theme = createTheme({
  colors: {
    silver: [
      "#f8f9fa",
      "#f1f3f5",
      "#e9ecef",
      "#dee2e6",
      "#ced4da",
      "#adb5bd",
      "#868e96",
      "#495057",
      "#343a40",
      "#212529",
    ],
  },
  primaryColor: "silver",
  primaryShade: {
    dark: 2,
    light: 6,
  },
  defaultRadius: "md",
  fontFamily: "Roboto, Helvetica, Arial, sans-serif",
  fontFamilyMonospace:
    '"SFMono-Regular", Menlo, Monaco, Consolas, "Liberation Mono", monospace',
  headings: {
    fontFamily: "Roboto, Helvetica, Arial, sans-serif",
  },
});

export const metadata: Metadata = {
  title: "NieR Replicant GAMEDATA Editor",
  description:
    "Modernized save editor for NieR Replicant ver.1.22474487139 GAMEDATA files.",
};

export default function RootLayout({
  children,
}: Readonly<{
  children: React.ReactNode;
}>) {
  return (
    <html lang="en" suppressHydrationWarning>
      <head>
        <ColorSchemeScript defaultColorScheme="dark" />
      </head>
      <body>
        <MantineProvider theme={theme} defaultColorScheme="dark">
          {children}
        </MantineProvider>
      </body>
    </html>
  );
}
