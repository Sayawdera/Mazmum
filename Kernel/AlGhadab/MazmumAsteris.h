#ifndef MAZMUM_MAZMUMASTERIS_H
#define MAZMUM_MAZMUMASTERIS_H

#include <stdio.h>
#include "MazmumMod.h"

void Mazmum_Service_Asterisk(char *IP, int32_t Sp, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t PORT, char *HostName);

int32_t Mazmum_Start_Asterisk(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *fp);
int32_t Mazmum_Asterisk_INIT(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *fp, int32_t Sp, char *HostName);

#endif MAZMUM_MAZMUMASTERIS_H
