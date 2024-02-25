#ifndef MAZMUM_MAZMUMMEMCACHED_H
#define MAZMUM_MAZMUMMEMCACHED_H

#include <stdio.h>
#include <inttypes.h>

#ifdef LIBMCACHED
#include <libmemcached/memcached.h>
#endif

#include "../AlGhadab/MazmumMod.h"

#ifndef LIBMCACHED
void MAZMUM_DUMMY_MEMCACHED();
#else

extern int32_t MAZMUM_DATA_READY_TIMED(int32_t Socket, long Second, long NanoSecond);
extern MAZMUM_OPTION __MAZMUM_OPTION_T;
extern char *MAZMUM_EXID;

void MAZMUM_MEMCACHED_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

int MAZMUM_MEMCACHED_SEND_COM_QUIT(int32_t Socket);
int MAZMUM_MEMCACHED_SEND_COM_VERSION(int32_t Socket);

int32_t MAZMUM_START_MEMCACHED(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp);
int32_t MAZMUM_MEMCACHED_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp);

#endif MAZMUM_MAZMUMMEMCACHED_H
