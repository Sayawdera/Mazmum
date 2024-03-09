#ifndef MAZMUM_MAZMUMRTSP_HXX
#define MAZMUM_MAZMUMRTSP_HXX




#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>
#include <string.h>

#include "MazmumMod.hxx"
#include "../SASL.hxx"


extern char *MAZMUM_EXIT;
char *Buf;
char Package_One[500];
char Package_Two[500];

#define MAZMUM_COMMAND "/bin/ls /"

void MazmumCreatePackageEngine(int32_t Control, char *IP, int32_t PORT);
void MazmumRtSpServide(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);


std::atomic_int32_t MazmumIsUnAuthorized(char *Service);
std::atomic_int32_t MazmumIsNotFound(char *Service);
std::atomic_int32_t mazmumIsAuthorized(char *Service);
std::atomic_int32_t MazmumUseAuthBasic(char *Service);
std::atomic_int32_t MazmumUseDigestAuth(char *Service);
std::atomic_int32_t MazmumStartRtSp(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);


std::atomic_int32_t MazmumRshServiceINIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);




#endif MAZMUM_MAZMUMRTSP_HXX
