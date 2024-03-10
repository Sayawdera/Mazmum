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


void MazmumRedisServiceEngine(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName, int32_t TLS);
void MazmumRedisService(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);


std::atomic_int32_t MazmumStartRedis(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MazmumRedisServiceINIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);


#endif MAZMUM_MAZMUMREDIS_HXX
