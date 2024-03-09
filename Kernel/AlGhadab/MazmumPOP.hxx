#ifndef MAZMUM_MAZMUMPOP_HXX
#define MAZMUM_MAZMUMPOP_HXX


#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>


#include "MazmumMod.hxx"


extern char *MAZMUM_EXIT;
char *Buf;
char Apop_Challenge[300] = "";


typedef struct MAZMUM_POOL_STR
{
    char IP[36];
    int32_t Pop_Auth_Mechanism;
    int32_t Disable_TLS;

    struct MAZMUM_POOL_STR *Nex;
} MAZMUM_POOL;

MAZMUM_POOL *PList = NULL, *MP_Ptr = NULL;

void MazmumPopService(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MazmumPopUsage(const char *Service);

char *MazmumPopReadServerCapACity(int32_t Socket);


std::atomic_int32_t MazmumPopInitService(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
std::atomic_int32_t MazmumListRemove(MAZMUM_POOL *Node);
std::atomic_int32_t MazmumStartPop(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MazmumPopServiceINIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

#endif MAZMUM_MAZMUMPOP_HXX
