#ifndef MAZMUM_MAZMUMSNMP_HXX
#define MAZMUM_MAZMUMSNMP_HXX


#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>
#include <openssl/aes.h>
#include <openssl/des.h>
#include <openssl/hmac.h>
#include <openssl/md5.h>
#include <openssl/sha.h>

#include "../AlGhadab/MazmumMod.hxx"
#include "../SASL.hxx"

extern char *MAZMUM_EXIT;
char *Buf;

char Mazmum_SNMP_Buf[1024], *Mazmum_SNMP_Info = NULL;
int32_t Mazmum_SNMP_Info_Len = 0, Mazmum_SNMP_Info_Version = 1, Mazmum_SNMP_Info_Read = 1, Mazmum_SNMP_Info_Hash_Type = 1, Mazmum_SNMP_Info_ned_Type = 0;

struct MAZMUM_SNMP_V1_A
{
    char ID;
    char Len;
    char Ver[3];
    char Comid;
    char ComLen;
};

struct MAZMUM_SNMP_V1_A __MAZMUM_SNMP_V1_A = {
        .ID = '\x039',
        .Len = '\x039',
        .Ver = '\x039',
        .Comid = '\x039',
        .ComLen = '\x039',
};

struct MAZMUM_SNMP_V1_R
{
    unsigned char Type[2];
    unsigned char IdentId[2];
    unsigned char Ident[4];
    unsigned char ErrsTat[3];
    unsigned char Errind[3];
    unsigned char ObjectId[2];
    unsigned char Object[11];
    unsigned char Value[3];
};

struct MAZMUM_SNMP_V1_R __MAZMUM_SNMP_V1_R = {
        .Type = "",
        .IdentId = "",
        .Ident = "",
        .ErrsTat = "",
        .Errind = "",
        .ObjectId = "",
        .Object = "",
        .Value = "",
};


struct MAZMUM_SNMP_V1_W
{
    unsigned char Type[2];
    unsigned char IdentId[2];
    unsigned char Ident[4];
    unsigned char ErrsTat[3];
    unsigned char Errind[3];
    unsigned char ObjectId[2];
    unsigned char Object[11];
    unsigned char Value[3];
};

struct MAZMUM_SNMP_V1_W __MAZMUM_SNMP_V1_W = {
        .Type = "",
        .IdentId = "",
        .Ident = "",
        .ErrsTat = "",
        .Errind = "",
        .ObjectId = "",
        .Object = "",
        .Value = "",
};


extern int32_t MAZMUM_DATA_READY_TIMED(int32_t Socket, long Second, long NanoSecond);

void MAZMUM_PASSWORD_TO_KEY_MD5(u_char *Password, u_int Password_Len, u_char *EngineID, u_int Engine_Len, u_char *Key);
void MAZMUM_PASSWORD_TO_KEY_SHA(u_char *Password, u_int Password_Len, u_char *EngineID, u_int Engine_Len, u_char *Key);

void MAZMUM_SERVICE_SNMP(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_SNMP_USAGE(const char *Service);

std::atomic_int32_t MAZMUM_START_SNMP(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MAZMUM_SNMP_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

#endif MAZMUM_MAZMUMSNMP_HXX
