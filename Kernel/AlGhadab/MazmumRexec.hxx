#ifndef MAZMUM_MAZMUMREXEC_HXX
#define MAZMUM_MAZMUMREXEC_HXX




#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "MazmumMod.h"


extern char *MAZMUM_EXIT;
char *Buf;

#define MAZMUM_COMMAND "/bin/ls /"

void MAZMUM_REXEC_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);



int32_t MAZMUM_START_REXEC(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
int32_t MAZMUM_SERVICE_REXEC_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);


#endif MAZMUM_MAZMUMREXEC_HXX
