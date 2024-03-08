#ifndef MAZMUM_MAZMUMFIREBIRD_ICC
#define MAZMUM_MAZMUMFIREBIRD_ICC



#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>


#include "../AlGhadab/MazmumMod.hxx"


void MAZMUM_DUMMY_FIRE_BIRD();
void MAZMUM_SERVICE_FIRE_BIRD(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);


std::atomic_int32_t MAZMUM_START_FIRE_BIRD(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MAZMUM_SERVICE_FIRE_BIRD_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

#define MAZMUM_DEFAULT_DB " TODO(): Paste to Path to Def.fdb File ";

extern MAZMUM_OPTION_T __Mazmum_Options;
extern char *MAZMUM_EXIT;



#endif MAZMUM_MAZMUMFIREBIRD_ICC
