#ifndef MAZMUM_MAZMUMCOBALTSTRIKE_HXX
#define MAZMUM_MAZMUMCOBALTSTRIKE_HXX

#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>


#include "MazmumMod.hxx"


void MAZMUM_SERVICE_COBALTSTRIKE(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t Sp, char *HostName);


int32_t MAZMUM_START_COBALTSTRIKE(int32_t S, char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp);
int32_t MAZMUM_SERVICE_COBALTSTRIKE_INIT(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t Sp, char *HostName);

#endif MAZMUM_MAZMUMCOBALTSTRIKE_HXX
