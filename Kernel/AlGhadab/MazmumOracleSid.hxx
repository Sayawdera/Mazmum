#ifndef MAZMUM_MAZMUMORACLESID_HXX
#define MAZMUM_MAZMUMORACLESID_HXX

#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdlib.h>
#include <openssl/des.h>

#include "MazmumMod.hxx"
#include "../SASL.hxx"


extern MAZMUM_OPTION_T __Mazmum_Option;
char *MAZMUM_EXIT;
char *Buf;
unsigned char *Hash;
int32_t Mazmum_Sid_Mechanissm = MAZMUM_AUTH_CLEAR;

#define MAZMUM_HASH_SIZE 17

void MazmumDummyOracleSId(void);
void MazmumOracleSidService(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);


std::atomic_int32_t MazmumStartOracleSid(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MazmumStartOracleSidINIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);


#endif MAZMUM_MAZMUMORACLESID_HXX
