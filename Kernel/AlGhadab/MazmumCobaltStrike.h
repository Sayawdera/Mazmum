#ifndef MAZMUM_MAZMUMCOBALTSTRIKE_H
#define MAZMUM_MAZMUMCOBALTSTRIKE_H

#include "MazmumMod.h"
#include <stdint.h>
#include <stdio.h>

void MAZMUM_SERVICE_COBALTSTRIKE(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t Sp, char *HostName);


int32_t MAZMUM_START_COBALTSTRIKE(int32_t S, char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp);
int32_t MAZMUM_SERVICE_COBALTSTRIKE_INIT(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t Sp, char *HostName);

#endif MAZMUM_MAZMUMCOBALTSTRIKE_H
