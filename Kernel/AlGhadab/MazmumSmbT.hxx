#ifndef MAZMUM_MAZMUMSMBT_HXX
#define MAZMUM_MAZMUMSMBT_HXX




#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>
#include <string.h>
#include <errno.h>
#include <libsmbclient.h>
#include <stdbool.h>


#include "MazmumMod.hxx"
#include "../SASL.hxx"



extern char *MAZMUM_EXIT;
char *Buf;
extern MAZMUM_OPTION_T _Mazmum_Option;

typedef struct MAZMUM_CRES
{
    const char *Work_Group;
    const char *User;
    const char *Password;
} MAZMUM_CRES_T;

const char Mazmum_Default_Work_Group[] = "WORKGROUP";
bool use_nt_hash = false;
const char *workgroup = Mazmum_Default_Work_Group;
const char *netbios_name = NULL;

#define MAZMUM_EXIT_PROTOCOL_ERROR MAZMUM_CHILD_EXIT(2)
#define MAZMUM_EXIT_CONNECTION_ERROR MAZMUM_CHILD_EXIT(1)
#define MAZMUM_EXIT_NORMAL MAZMUM_CHILD_EXIT(0)


void MAZMUM_SMB_AUTH_PROVIDER(MAZM_SMB_CTX *Ctx, const char *Srv, const char *Shr, char *Wg, int WgLen, char *Un, int UnLen, char *Pw, int PwLen);
void MAZMUM_SMB_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_SMB_USAGE(const char *Service);

bool SMB_RUN_TEST(MAZMUM_CRES_T *Mct, const char *Server, uint16_t PORT);

std::atomic_int32_t MAZMUM_START_SIP(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);



std::atomic_int32_t MAZMUM_SM_T_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);




#endif MAZMUM_MAZMUMSMBT_HXX
