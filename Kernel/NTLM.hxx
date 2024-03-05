#ifndef MAZMUM_NTLM_HXX
#define MAZMUM_NTLM_HXX

#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "../Kernel/AlGhadab/MazmumMod.hxx"

#ifdef __MAZMUM
#include <sys/int_types.h>
#elif defined(__FreeBSD__) || defined(__IBMCPP__) || defined(_AIX__)
#include <inttypes.h>
#else
#include <stdint.h>
#endif

#include <stdio.h>

typedef unsigned short uint16;
typedef uint32_t uint32;
typedef unsigned char uint8;

typedef struct
{
    uint16 mazmum_len;
    uint16 mazmum_maxlen;
    uint32 mazmum_offset;
} MAZMUM_T_SMB_STR_HEADER;

typedef struct
{
    char mazmum_ident[8];
    uint32 mazmum_msgType;
    uint32 mazmum_flags;

    MAZMUM_T_SMB_STR_HEADER mazmum_host;
    MAZMUM_T_SMB_STR_HEADER mazmum_domain;

    uint8 mazmum_buffer[1024];
    uint32 mazmum_bufIndex;
} MAZMUM_T_SMB_NTLM_AUTH_REQUEST;

typedef struct
{
    char mazmum_ident[8];
    uint32 mazmum_msgType;

    MAZMUM_T_SMB_STR_HEADER mazmum_uDomain;

    uint32 mazmum_flags;
    uint8 mazmum_challengeData[8];
    uint8 mazmum_reserved[8];

    MAZMUM_T_SMB_STR_HEADER mazmum_emptyString;

    uint8 mazmum_buffer[1024];
    uint32 mazmum_bufIndex;
} MAZMUM_T_SMB_NTLM_AUTH_CHALLENGE;

typedef struct
{
    char mazmum_ident[8];
    uint32 mazmum_msgType;

    MAZMUM_T_SMB_STR_HEADER mazmum_lmResponse;
    MAZMUM_T_SMB_STR_HEADER mazmum_ntResponse;
    MAZMUM_T_SMB_STR_HEADER mazmum_uDomain;
    MAZMUM_T_SMB_STR_HEADER mazmum_uUser;
    MAZMUM_T_SMB_STR_HEADER mazmum_uWks;
    MAZMUM_T_SMB_STR_HEADER mazmum_sessionKey;

    uint32 mazmum_flags;
    uint8 mazmum_buffer[1024];
    uint32 mazmum_bufIndex;
} MAZMUM_T_SMB_NTLM_AUTH_RESPONSE;


#define SmbLength(ptr) (((ptr)->buffer - (uint8 *)(ptr)) + (ptr)->bufIndex)
extern void buildAuthRequest(MAZMUM_T_SMB_NTLM_AUTH_REQUEST *request, long flags, char *host, char *domain);

int32_t Mazmumfrom64tobits(char *out, const char *in);


void MazmumBuildAuthRequest(MAZMUM_T_SMB_NTLM_AUTH_REQUEST *request, long flags, char *host, char *domain);
void MazmumbuildAuthResponse(MAZMUM_T_SMB_NTLM_AUTH_CHALLENGE *challenge, MAZMUM_T_SMB_NTLM_AUTH_RESPONSE *response, long flags, char *user, char *password, char *domain, char *host);
void MazmumTo64FromBits(unsigned char *out, const unsigned char *in, int32_t inlen);
void MazmumXor (char *out, char *in1, char *in2, int32_t n);
void MazmumDumpAuthRequest(FILE *fp, MAZMUM_T_SMB_NTLM_AUTH_REQUEST *request);
void MazmumDumpAuthChallenge(FILE *fp, MAZMUM_T_SMB_NTLM_AUTH_CHALLENGE *challenge);
void MazmumDumpAuthResponse(FILE *fp, MAZMUM_T_SMB_NTLM_AUTH_RESPONSE *response);

void MazmumStrupper(char *s);

#endif MAZMUM_NTLM_HXX
