#ifndef MAZMUM_MAZMUMCISCOENBL_H
#define MAZMUM_MAZMUMCISCOENBL_H


#include <stdint.h>
#include <stdio.h>
#include "MazmumMod.h"

void Mazmum_Service_Cisco_Enable(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t Sp, char *HostName);
void Mazmum_Cisco_Enable_Usage_Info(void);

int32_t Mazmum_Start_Cisco_Enable(int32_t S, char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp);
int32_t Mazmum_Cisci_INIT(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t Sp, char *HostName);


#endif MAZMUM_MAZMUMCISCOENBL_H
