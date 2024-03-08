#ifndef MAZMUM_MAZMUMASTERIS_HXX
#define MAZMUM_MAZMUMASTERIS_HXX

#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>


#include "MazmumMod.hxx"

void MazmumAsteriskService(char *IP, int32_t Sp, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t PORT, char *HostName);

std::atomic_int32_t MazmumStartAsterisk(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *fp);
std::atomic_int32_t MazmumAsteriskINIT(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *fp, int32_t Sp, char *HostName);

#endif MAZMUM_MAZMUMASTERIS_HXX
