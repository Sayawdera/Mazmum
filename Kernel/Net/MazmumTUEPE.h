#ifndef MAZMUM_MAZMUMTUEPE_H
#define MAZMUM_MAZMUMTUEPE_H


#include <stdint.h>
#include <stdio.h>
#include "../AlGhadab/MazmumMod.h"

void MAZMUM_SERVICE_CISCO_ENABLE(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t Sp, char *HostName);
void MAZMUM_CISCO_ENABLE_USAGE_INFO(void);


void MAZMUM_SERVICE_HTTP_PROXY_URL_ENUM(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *Hstname);
void MAZMUM_USAGE_HTTP_PROXY_URL_ENUM(const char *Service);



int32_t MAZMUM_START_CISCO_ENABLE(int32_t S, char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp);
int32_t MAZMUM_CISCO_INIT(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t Sp, char *HostName);


int32_t MAZMUM_START_HTTP_PROXY_URL_ENUM(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
int32_t MAZMUM_SERVICE_HTTP_PROXY_URL_ENUM_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);



#endif MAZMUM_MAZMUMTUEPE_H
