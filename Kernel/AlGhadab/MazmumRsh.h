#ifndef MAZMUM_MAZMUMRSH_H
#define MAZMUM_MAZMUMRSH_H



#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "MazmumMod.h"


extern char *MAZMUM_EXIT;
char *Buf;

#define MAZMUM_COMMAND "/bin/ls /"

void MAZMUM_RSH_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);


int32_t MAZMUM_START_RSH(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
int32_t MAZMUM_RSH_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);



#endif MAZMUM_MAZMUMRSH_H
