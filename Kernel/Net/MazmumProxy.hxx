#ifndef MAZMUM_MAZMUMPROXY_HXX
#define MAZMUM_MAZMUMPROXY_HXX

#include <stdio.h>
#include <inttypes.h>


void MAZMUM_SERVICE_HTTP_PROXY(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_USAGE_HTTP_PROXY(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);


int32_t MAZMUM_START_HTTP_PROXY(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
int32_t MAZMUM_SERVICE_HTTP_PROXY_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);


#endif MAZMUM_MAZMUMPROXY_HXX
