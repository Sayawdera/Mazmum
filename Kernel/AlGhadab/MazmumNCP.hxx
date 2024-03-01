#ifndef MAZMUM_MAZMUMNCP_HXX
#define MAZMUM_MAZMUMNCP_HXX


#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <string.h>
#include <ncp/nwcalls.h>

#include "MazmumMod.h"

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

void MAZMUM_NCP_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_NCP_USAGE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

int32_t MAZMUM_START_NCP(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
int32_t MAZMUM_NCP_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);



#endif MAZMUM_MAZMUMNCP_HXX
