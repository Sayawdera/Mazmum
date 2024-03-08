#ifndef MAZMUM_MAZMUMRPCAP_HXX
#define MAZMUM_MAZMUMRPCAP_HXX


#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>


#include "MazmumMod.hxx"


extern char *MAZMUM_EXIT;
char *Buf;

void MAZMUM_RPCAP_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);


std::atomic_int32_t MAZMUM_START_RPCAP(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MAZMUM_RPCAP_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);



#endif MAZMUM_MAZMUMRPCAP_HXX
