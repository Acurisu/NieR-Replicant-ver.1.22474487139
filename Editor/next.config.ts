import type { NextConfig } from "next";

const repoBasePath = "/NieR-Replicant-ver.1.22474487139";
const isProduction = process.env.NODE_ENV === "production";

const nextConfig: NextConfig = {
  output: "export",
  basePath: isProduction ? repoBasePath : undefined,
  assetPrefix: isProduction ? `${repoBasePath}/` : undefined,
  turbopack: {
    root: process.cwd(),
  },
};

export default nextConfig;
