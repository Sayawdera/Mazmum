#ifndef MAZMUM_MAZMUMCSV_H
#define MAZMUM_MAZMUMCSV_H

#include "MazmumMod.h"
#include <stdint.h>
#include <stdio.h>

void Mazmum_Service_CSV(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, char *HostName);

int32_t Mazmum_Start_CSV(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp);
int32_t Mazmum_Service_CSV_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);


#endif MAZMUM_MAZMUMCSV_H
