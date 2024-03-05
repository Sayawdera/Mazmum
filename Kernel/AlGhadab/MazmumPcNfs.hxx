#ifndef MAZMUM_MAZMUMPCNFS_HXX
#define MAZMUM_MAZMUMPCNFS_HXX



#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>


#include "MazmumMod.hxx"


extern char *MAZMUM_EXIT;
char *Buf;

#define MAZMUM_LEN_HDR_RPC 24
#define MAZMUM_LEN_AUTH_UNIX 72 + 12
#define MAZMUM_LEN_HDR_PCN_AUTH sizeof(struct MAZMUM_PR_AUTH_ARGS)

struct MAZMUM_RPC_HDR
{
    unsigned long Xid;
    unsigned long Type_Msg;
    unsigned long Version_Rpc;
    unsigned long Prog_Id;
    unsigned long Prog_Ver;
    unsigned long Prog_Proc;
};

struct MAZMUM_PR_AUTH_ARGS
{
    unsigned long Len_Clnt;
    char Name[64];
    unsigned long Len_Id;
    char Id[32];
    unsigned long Len_Password;
    char Password[64];
    unsigned long Len_Comments;
    char Comments[255];
};


void MAZMUM_PCNFS_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

int32_t MAZMUM_START_PCNFS(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
int32_t MAZMUM_PCNFS_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);


#endif MAZMUM_MAZMUMPCNFS_HXX
