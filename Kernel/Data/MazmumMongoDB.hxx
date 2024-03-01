#ifndef MAZMUM_MAZMUMMONGODB_HXX
#define MAZMUM_MAZMUMMONGODB_HXX


#include <stdio.h>
#include <mongoc.h>

#include "../AlGhadab/MazmumMod.h"

#ifndef LIBMONGODB
void MAZMUM_DUMMY_MONGODB();
#endif

extern int32_t MAZMUM_DATA_READY_TIMED(int32_t Socket, long Second, long NanoSecond);
extern MAZMUM_OPTION __MAZMUM_OPTION_T;
extern char *MAZMUM_EXID;

char *Buf;

#define DEFAULT_DB "admin"

void MAZMUM_MONGODB_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_MONGODB_USAGE(const char *Service);

int MAZMUM_IS_ERROR_MSG(char *Msg);
int MAZMUM_REQUIRE_AUTH(int32_t Socket);

int32_t MAZMUM_START_MONGODB(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp);
int32_t MAZMUM_SERVICE_MONGODB_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);

#endif MAZMUM_MAZMUMMONGODB_HXX
