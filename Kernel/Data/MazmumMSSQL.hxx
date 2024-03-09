#ifndef MAZMUM_MAZMUMMSSQL_HXX
#define MAZMUM_MAZMUMMSSQL_HXX


#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>


#include "../AlGhadab/MazmumMod.hxx"


#define MSLEN 30
extern char *MAZMUM_EXIT;
char *Buf;

__attribute__((unused)) unsigned char P_RKK_ONE[];
__attribute__((unused)) unsigned char P_RKK_TWO[];
__attribute__((unused)) unsigned char P_RKK_THREE[];
__attribute__((unused)) unsigned char P_RKK_FOUR[];

void MazmumMSSQLService(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);

std::atomic_int32_t MazmumStartMSSQL(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MazmumServiceMSSQLINIT(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);


#endif MAZMUM_MAZMUMMSSQL_HXX
