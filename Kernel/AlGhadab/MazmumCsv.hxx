#ifndef MAZMUM_MAZMUMCSV_HXX
#define MAZMUM_MAZMUMCSV_HXX

#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>


#include "MazmumMod.hxx"

void MAZMUM_SERVICE_CSV(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, char *HostName);

int32_t MAZMUM_SART_CSV(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp);
int32_t MAZMUM_SERVICE_CSV_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);


#endif MAZMUM_MAZMUMCSV_HXX
