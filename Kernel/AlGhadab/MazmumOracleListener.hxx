#ifndef MAZMUM_MAZMUMORACLELISTENER_HXX
#define MAZMUM_MAZMUMORACLELISTENER_HXX

#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "MazmumMod.hxx"
#include "../SASL.hxx"

#define MAZMUM_HASH_SIZE 17

extern MAZMUM_OPTION_T __Mazmum_Option;
char *MAZMUM_EXIT;
char *Buf;
unsigned char *Hash;
int32_t Mazmum_Sid_Mechanissm = MAZMUM_AUTH_CLEAR;


void MazmumDummyOracleListener(void);
void MazmumOracleListenerService(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MazmumOracleListenerUsage(const char *Service);

std::atomic_int32_t MazmumOracleListenerPermutation(unsigned char **Result, char *P_Str, int32_t *Size);
std::atomic_int32_t MazmumOraHash(unsigned char **OraHash, unsigned char *Buf, int32_t Len);
std::atomic_int32_t MazmumConvertByteError(unsigned char **Result, int32_t Size);
std::atomic_int32_t MazmumOraDycrpt(unsigned char **RS, unsigned char *Result, int32_t Size);
std::atomic_int32_t MazmumOraHashPassword(char **Password);
std::atomic_int32_t MazmumOracleListenerStart(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);

std::atomic_int32_t MazmumOracleListenerServiceINIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

#endif MAZMUM_MAZMUMORACLELISTENER_HXX
