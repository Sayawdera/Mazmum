#ifndef MAZMUM_MAZMUMMONGODB_HXX
#define MAZMUM_MAZMUMMONGODB_HXX


#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>
#include <mongoc.h>


#include "../AlGhadab/MazmumMod.hxx"

#ifndef LIBMONGODB
void MAZMUM_DUMMY_MONGODB();
#endif

extern int32_t MazmumDataReadyTimed(int32_t Socket, long Second, long NanoSecond);
extern MAZMUM_OPTION_T __MAZMUM_OPTION_T;
extern char *MAZMUM_EXID;

char *Buf;

#define DEFAULT_DB "admin"

void MazmumMongoDBService(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);
void MazmumMongoDBUsage(const char *Service);

int MazmumIsErrorMsg(char *Msg);
int MazmumRequireAuth(int32_t Socket);

std::atomic_int32_t MazmumStartMongoDB(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MazmumServiceMongoDBINIT(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);

#endif MAZMUM_MAZMUMMONGODB_HXX
