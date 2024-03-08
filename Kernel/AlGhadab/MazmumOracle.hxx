#ifndef MAZMUM_MAZMUMORACLE_HXX
#define MAZMUM_MAZMUMORACLE_HXX

#include <iostream>
#include <atomic>


#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <oci.h>
#include <stdbool.h>
#include <sys/types.h>

#include "MazmumMod.hxx"
#include "../SASL.hxx"


extern MAZMUM_OPTION_T __Mazmum_Option;
char *MAZMUM_EXIT;
char *Buf;
unsigned char *Hash;
int32_t Mazmum_Sid_Mechanissm = MAZMUM_AUTH_CLEAR;

OCIEnv *o_environment;
OCISvcCtx *o_servicecontext;
OCIBind *o_bind;
OCIError *o_error;
OCIStmt *o_statement;
OCIDefine *o_define;
text o_errormsg[512];
sb4 o_errorcode;




void MAZMUM_DUMMY_ORACLE(void);
void MAZMUM_PRINT_ORACLE_ERROR(char **Err);
void MAZMUM_ORACLE_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_ORACLE_USAGE(const char *Service);


std::atomic_int32_t MAZMUM_START_ORACLE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MAZMUM_ORACLE_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);



#endif MAZMUM_MAZMUMORACLE_HXX
