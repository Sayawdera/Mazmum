#ifndef MAZMUM_MAZMUMTELNET_HXX
#define MAZMUM_MAZMUMTELNET_HXX



#include <atomic>
#include <iostream>

#include <zlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "../CRC.hxx"
#include "../AlGhadab/MazmumMod.hxx"

extern MAZMUM_OPTION_T __Mazmum_Option;
extern char *MAZMUM_EXIT;
extern char *Buf;


void MazmumTelNetService(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MazmumTelNetUsage(const char *Service);


std::atomic_int32_t MazmumStartTelNet(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MazmumTelNetServiceINIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

#endif MAZMUM_MAZMUMTELNET_HXX
