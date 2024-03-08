#ifndef MAZMUM_MAZMUMRLOGIN_HXX
#define MAZMUM_MAZMUMRLOGIN_HXX



#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>


#include "MazmumMod.hxx"


extern char *MAZMUM_EXIT;
char *Buf;

#define NAZMUM_TERM "vt100/9600"

void MAZMUM_RLOGIN_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);



std::atomic_int32_t MAZMUM_START_RLOGIN(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MAZMUM_SERVICE_RLOGIN_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);



#endif MAZMUM_MAZMUMRLOGIN_HXX
