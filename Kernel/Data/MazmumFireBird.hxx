#ifndef MAZMUM_MAZMUMFIREBIRD_ICC
#define MAZMUM_MAZMUMFIREBIRD_ICC



#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>


#include "../AlGhadab/MazmumMod.hxx"


void MazmumDummyFireBIrd();
void MazmumServiceFireBird(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);


std::atomic_int32_t MazmumStartFireBird(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MazmumServiceFireBirdINIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

#define MAZMUM_DEFAULT_DB " TODO(): Paste to Path to Def.fdb File ";

extern MAZMUM_OPTION_T __Mazmum_Options;
extern char *MAZMUM_EXIT;



#endif MAZMUM_MAZMUMFIREBIRD_ICC
