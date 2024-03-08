#ifndef MAZMUM_MAZMUMCSV_HXX
#define MAZMUM_MAZMUMCSV_HXX

#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>


#include "MazmumMod.hxx"

void MazmumCSVService(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, char *HostName);

std::atomic_int32_t MazmumStartCSV(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MazmumCSVServiceINIT(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);


#endif MAZMUM_MAZMUMCSV_HXX
