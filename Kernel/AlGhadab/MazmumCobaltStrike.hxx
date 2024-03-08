#ifndef MAZMUM_MAZMUMCOBALTSTRIKE_HXX
#define MAZMUM_MAZMUMCOBALTSTRIKE_HXX

#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>


#include "MazmumMod.hxx"


void MazmumCobaltStrikeService(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t Sp, char *HostName);


std::atomic_int32_t MazmumStartCobaltStrike(int32_t S, char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MazmumCobaltStrikeServiceINIT(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t Sp, char *HostName);

#endif MAZMUM_MAZMUMCOBALTSTRIKE_HXX
