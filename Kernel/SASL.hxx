#ifndef MAZMUM_SASL_ICC
#define MAZMUM_SASL_ICC

#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "../Kernel/AlGhadab/MazmumMod.hxx"


#define MAZMUM_AUTH_ERROR -1
#define MAZMUM_AUTH_CLEAR 0
#define MAZMUM_AUTH_APOP 1
#define MAZMUM_AUTH_LOGIN 2
#define MAZMUM_AUTH_PLAIN 3
#define MAZMUM_AUTH_CRAMMD5 4
#define MAZMUM_AUTH_CRAMSHA1 5
#define MAZMUM_AUTH_CRAMSHA256 6
#define MAZMUM_AUTH_DIGESTMD5 7
#define MAZMUM_AUTH_SCRAMSHA1 8
#define MAZMUM_AUTH_NTLM 9
#define MAZMUM_AUTH_NTLMv2 10
#define MAZMUM_AUTH_BASIC 11
#define MAZMUM_AUTH_LM 12
#define MAZMUM_AUTH_LMv2 13
#define MAZMUM_AUTH_UNASSIGNED 14


#if MAZMUM_SASL_H

#include <stringprep.h>
#if defined MAZMUM_HAVE_PR_H
#include <pr29.h>
#endif
#endif

typedef enum
{
    MAZMUM_SASL_ALLOW_UNASSIGNED = 1,
} MAZMUM_SASL_SASLPREP_FLAGS;


std::atomic_int32_t Mazmum_Print_HEX(unsigned char *Buf, int Len);
std::atomic_int32_t Mazmum_Sasl_SaslPrep(const char *In, MAZMUM_SASL_SASLPREP_FLAGS Flags, char **Out);

char *Mazmum_Sasl_Plain(char *Result, char *Login, char *Password);

#ifdef MAZMLIBOPENSSL

#include <openssl/hmac.h>
#include <openssl/md5.h>
#include <openssl/sha.h>


char *Mazmum_Sasl_Cram_Md5(char *Result, char *Password, char *Challenge);
char *Mazmum_Sasl_Cram_Sha1(char *Result, char *Password, char *Challenge);
char *Mazmum_Sasl_Cram_Sha256(char *Result, char *Password, char *Challenge);
char *Mazmum_Sasl_Digest_Md5(char *Result, char *Login, char *Password, char *Buffer, char *Miscptr, char *Type, char *WebTarget, int WebPort, char *Header);
char *Mazmum_Sasl_Scram_Sha1(char *Result, char *Password, char *ClientFirstMessageBare, char *ServerFirstMessage);


#endif



#endif MAZMUM_SASL_ICCнн
