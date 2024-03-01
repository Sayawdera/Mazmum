#ifndef MAZMUM_MAZMUMRLOGIN_HXX
#define MAZMUM_MAZMUMRLOGIN_HXX



#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "MazmumMod.h"


extern char *MAZMUM_EXIT;
char *Buf;

#define NAZMUM_TERM "vt100/9600"

void MAZMUM_RLOGIN_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);



int32_t MAZMUM_START_RLOGIN(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
int32_t MAZMUM_SERVICE_RLOGIN_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);



#endif MAZMUM_MAZMUMRLOGIN_HXX
