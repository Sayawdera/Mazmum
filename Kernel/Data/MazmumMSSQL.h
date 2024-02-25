#ifndef MAZMUM_MAZMUMMSSQL_H
#define MAZMUM_MAZMUMMSSQL_H


#include <stdio.h>

#include "../AlGhadab/MazmumMod.h"


#define MSLEN 30
extern char *MAZMUM_EXIT;
char *Buf;

__attribute__((unused)) unsigned char P_RKK_ONE[];
__attribute__((unused)) unsigned char P_RKK_TWO[];
__attribute__((unused)) unsigned char P_RKK_THREE[];
__attribute__((unused)) unsigned char P_RKK_FOUR[];

void MAZMUM_MSSQL_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);

int32_t MAZMUM_START_MSSQL(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp);
int32_t MAZMUM_SERVICE_MSSQL_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);


#endif MAZMUM_MAZMUMMSSQL_H
