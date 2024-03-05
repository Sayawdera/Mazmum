#ifndef MAZMUM_HMACMD_HXX
#define MAZMUM_HMACMD_HXX

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
#include <openssl/md5.h>

typedef struct
{
    MAZMUM_MD_CTX ctx;
    unsigned char k_ipad[65];
    unsigned char k_opad[65];
} MAZMUM_HMACMD_CONTEXT;


void MAZMUM_HMACMD_INIT_RFC(const unsigned char *key, int32_t key_len, MAZMUM_HMACMD_CONTEXT *ctx);
void MAZMUM_HMAC_MD_INIT_LINK_TO_64(const unsigned char *key, int32_t key_len, MAZMUM_HMACMD_CONTEXT *ctx);
void MAZMUM_HMAC_MD_UPDATE(const unsigned char *text, int32_t text_len, MAZMUM_HMACMD_CONTEXT *ctx);
void MAZMUM_HMAC_MD_FINAL(unsigned char *digest, MAZMUM_HMACMD_CONTEXT *ctx);
void MAZMUM_HMAC_MD(unsigned char key[16], unsigned char *data, int32_t data_len, unsigned char *digest);

#endif MAZMUM_HMACMD_HXX
