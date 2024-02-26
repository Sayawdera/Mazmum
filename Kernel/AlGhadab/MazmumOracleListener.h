#ifndef MAZMUM_MAZMUMORACLELISTENER_H
#define MAZMUM_MAZMUMORACLELISTENER_H



#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "MazmumMod.h"
#include "../SASL.h"

#define MAZMUM_HASH_SIZE 17

extern MAZMUM_OPTION __Mazmum_Option;
char *MAZMUM_EXIT;
char *Buf;
unsigned char *Hash;
int32_t Mazmum_Sid_Mechanissm = MAZMUM_AUTH_CLEAR;


void MAZMUM_DUMMY_ORACLE_LISTENER(void);
void MAZMUM_ORACLE_LISTENER_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_ORACLE_LISTENER_USAGE(const char *Service);

int32_t MAZMUM_INITIAL_PERMUTATION(unsigned char **Result, char *P_Str, int32_t *Size);
int32_t MAZMUM_ORA_HASH(unsigned char **OraHash, unsigned char *Buf, int32_t Len);
int32_t MAZMUM_CONVERT_BYTE_ORDER(unsigned char **Result, int32_t Size);
int32_t MAZMUM_ORA_DYCRYPT(unsigned char **RS, unsigned char *Result, int32_t Size);
int32_t MAZMUM_ORA_HASH_PASSWORD(char **Password);
int32_t MAZMUM_START_ORACLE_LISTENER(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);

int32_t MAZMUM_ORACLE_LISTENER_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

#endif MAZMUM_MAZMUMORACLELISTENER_H
