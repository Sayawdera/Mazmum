#ifndef MAZMUM_MAZMUMASTERIS_H
#define MAZMUM_MAZMUMASTERIS_H

#include <stdio.h>
#include "MazmumMod.h"

void MAZMUM_SERVICE_ASTERISK(char *IP, int32_t Sp, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t PORT, char *HostName);

int32_t MAZMUM_START_ASTERISK(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *fp);
int32_t MAZMUM_ASTERISK_INIT(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *fp, int32_t Sp, char *HostName);

#endif MAZMUM_MAZMUMASTERIS_H
