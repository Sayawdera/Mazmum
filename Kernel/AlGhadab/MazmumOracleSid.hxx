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

void MAZMUM_DUMMT_ORACLE_SID(void);
void MAZMUM_ORACLE_SID_SERVIE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);


int32_t MAZMUM_START_ORACLE_SID(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
int32_t MAZMUM_ORACLE_SID_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);


#endif MAZMUM_MAZMUMORACLESID_HXX
