#ifndef MAZMUM_MAZMUMPOSTGRESQL_HXX
#define MAZMUM_MAZMUMPOSTGRESQL_HXX


#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>
#include <libpq-fe.h>

#include "../AlGhadab/MazmumMod.hxx"



#define DEFAULT_DB "template"

extern char *MAZMUM_EXIT;
extern MAZMUM_OPTION_T _Mazmum_Option;
char *Buf;



void MazmumDummyPostgreSql(void);
void MazmumPostgresService(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MazmumPostgresUsage(const char *Service);

std::atomic_int32_t MazmumStartPostgres(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MazmumPostgresServiceINIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

#endif MAZMUM_MAZMUMPOSTGRESQL_HXX
