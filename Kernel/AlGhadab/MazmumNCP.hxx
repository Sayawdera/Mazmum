#ifndef MAZMUM_MAZMUMNCP_HXX
#define MAZMUM_MAZMUMNCP_HXX


#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>
#include <string.h>


#include "MazmumMod.hxx"

#ifndef LIBNCP
void MAZMUM_DUMMY_NCP(void);
#endif


extern char *MAZMUM_EXIT;
extern int32_t Mazmum_CHild_Head_No;

typedef struct MAZMUM_NCP_DATA
{
    struct MAZMUM_NCP_CONNECTION_SPECIFICATOR Spec;
    struct MAZMUM_NCP_CONNECTION *Conn;

    char *Context;
} MAZMUM_NCP_DATA;

void MazmumNcpService(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MazmumNcpUsage(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

std::atomic_int32_t MazmumStartNcp(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MazmumNcpServiceINIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);



#endif MAZMUM_MAZMUMNCP_HXX
