#ifndef MAZMUM_MAZMUMSOCKSF_HXX
#define MAZMUM_MAZMUMSOCKSF_HXX


#include "../AlGhadab/MazmumMod.hxx"

extern char *MAZMUM_EXIT;
unsigned char *Buf;

int fail_cnt;

#include <iostream>
#include <atomic>
#include <cstdint>

#include <stdint.h>
#include <stdio.h>
#include <inttypes.h>


#include "../AlGhadab/MazmumMod.hxx"


extern char *MAZMUM_EXIT;
unsigned char *Buf;

int32_t MazmumFailCnt;

void MazmumServiceSocksF(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

std::atomic_int32_t MazmumStartSocksF(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MazmumServiceSocksF_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

std::atomic_int32_t MazmumStartSocksF(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char*MiscPTR);

#endif MAZMUM_MAZMUMSOCKSF_HXX
