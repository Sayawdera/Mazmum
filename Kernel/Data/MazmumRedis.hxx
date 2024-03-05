#ifndef MAZMUM_MAZMUMREDIS_HXX
#define MAZMUM_MAZMUMREDIS_HXX


#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>


#include "../AlGhadab/MazmumMod.hxx"


extern char *MAZMUM_EXIT;
char *Buf;


void MAZMUM_REDIS_SERVICE_ENGINE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName, int32_t TLS);
void MAZMUM_REDIS_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);


int32_t MAZMUM_START_REDIS(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
int32_t MAZMUM_REDIS_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);


#endif MAZMUM_MAZMUMREDIS_HXX
