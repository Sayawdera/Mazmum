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



void MAZMUM_DUMMY_POSTGRESQL(void);
void MAZMUM_POSTGRES_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_POSTGRES_USAGE(const char *Service);

std::atomic_int32_t MAZMUM_START_POSTGRES(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MAZMUM_POSTGRES_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

#endif MAZMUM_MAZMUMPOSTGRESQL_HXX
