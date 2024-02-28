#ifndef MAZMUM_MAZMUMRPCAP_H
#define MAZMUM_MAZMUMRPCAP_H


#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "MazmumMod.h"


extern char *MAZMUM_EXIT;
char *Buf;

void MAZMUM_RPCAP_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);


int32_t MAZMUM_START_RPCAP(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
int32_t MAZMUM_RPCAP_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);



#endif MAZMUM_MAZMUMRPCAP_H
