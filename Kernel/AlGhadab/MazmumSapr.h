#ifndef MAZMUM_MAZMUMSAPR_H
#define MAZMUM_MAZMUMSAPR_H



#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <string.h>
#include <ctype.h>
#include <saprfc.h>

#include "MazmumMod.h"
#include "../SASL.h"


extern char *MAZMUM_EXIT;
char *Buf;
extern MAZMUM_OPTION _Mazmum_Option;

MAZMUM_RFC_ERROR_INFO_EXIT MREIE;

#define MAZMUM_PKG_LIB_SAPR

const int32_t *__MAZMUM_C_TYPE_TO_LOWER;
const int32_t *__MAZMUM_C_TYPE_TO_UPPER;
const int32_t *__MAZMUM_C_TYPE_TO_B;

extern void MAZMUM_FLOOD();


void MAZMUM_DUMMY_SAPR(void);
void MAZMUM_SAPR_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_SAPR_USAGE(const char *Service);


int32_t MAZMUM_START_SAPR(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);



int32_t MAZMUM_SAPR_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);



#endif MAZMUM_MAZMUMSAPR_H
