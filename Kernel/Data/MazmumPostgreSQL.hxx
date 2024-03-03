#ifndef MAZMUM_MAZMUMPOSTGRESQL_HXX
#define MAZMUM_MAZMUMPOSTGRESQL_HXX



#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "../AlGhadab//MazmumMod.h"
#include "libpq-fe.h"

#define DEFAULT_DB "template"

extern char *MAZMUM_EXIT;
extern MAZMUM_OPTION _Mazmum_Option;
char *Buf;



void MAZMUM_DUMMY_POSTGRESQL(void);
void MAZMUM_POSTGRES_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_POSTGRES_USAGE(const char *Service);

int32_t MAZMUM_START_POSTGRES(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
int32_t MAZMUM_POSTGRES_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

#endif MAZMUM_MAZMUMPOSTGRESQL_HXX