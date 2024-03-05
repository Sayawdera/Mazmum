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

void MAZMUM_POP_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_POP_USAGE(const char *Service);

char *MAZMUM_POP_READ_SERVER_CAPACITY(int32_t Socket);


int32_t MAZMUM_POP_INIT_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
int32_t MAZMUM_LIST_REMOVE(MAZMUM_POOL *Node);
int32_t MAZMUM_START_POP(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
int32_t MAZMUM_POP_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

#endif MAZMUM_MAZMUMPOP_HXX
