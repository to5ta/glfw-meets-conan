#pragma once

#ifdef _WIN32
  #define gmc_EXPORT __declspec(dllexport)
#else
  #define gmc_EXPORT
#endif

gmc_EXPORT void gmc();
