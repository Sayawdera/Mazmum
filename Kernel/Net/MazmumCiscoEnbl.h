#ifndef MAZMUM_MAZMUMCISCOENBL_H
#define MAZMUM_MAZMUMCISCOENBL_H


#include <stdint.h>
#include <stdio.h>
#include "../AlGhadab/MazmumMod.h"

void MAZMUM_SERVICE_CISCO_ENABLE(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t Sp, char *HostName);
void MAZMUM_CISCO_ENABLE_USAGE_INFO(void);

int32_t MAZMUM_START_CISCO_ENABLE(int32_t S, char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp);
int32_t MAZMUM_CISCO_INIT(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t Sp, char *HostName);


#endif MAZMUM_MAZMUMCISCOENBL_H
