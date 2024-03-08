#ifndef MAZMUM_MAZMUMPROXY_HXX
#define MAZMUM_MAZMUMPROXY_HXX

#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>


#include "../AlGhadab/MazmumMod.hxx"


void MAZMUM_SERVICE_HTTP_PROXY(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_USAGE_HTTP_PROXY(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);


std::atomic_int32_t MAZMUM_START_HTTP_PROXY(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
std::atomic_int32_t MAZMUM_SERVICE_HTTP_PROXY_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);


#endif MAZMUM_MAZMUMPROXY_HXX
