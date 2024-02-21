#ifndef MAZMUM_MAZMUMCOBALTSTRIKE_H
#define MAZMUM_MAZMUMCOBALTSTRIKE_H

#include "MazmumMod.h"
#include <stdint.h>
#include <stdio.h>

void Mazmum_Service_CobalStrike(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t Sp, char *HostName);


int32_t Mazmum_Start_CobalStrike(int32_t S, char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp);
int32_t Mazmum_Service_CobalstStrike_INIT(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t Sp, char *HostName);

#endif MAZMUM_MAZMUMCOBALTSTRIKE_H
