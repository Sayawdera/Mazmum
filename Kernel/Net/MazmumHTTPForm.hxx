#ifndef X_4D415A4D554D5F4D415A4D554D48545450464F524D5F48_H
#define MAZMUM_MAZMUMHTTPFORM_H

#define MAX_REDIRECT 8
#define MAX_CONTENT_LENGTH 20
#define MAX_PROXY_LENGTH 2048 / sizeof(CookieURL) * 2

#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>


#include "../AlGhadab/MazmumMod.hxx"
#include "MazmumHTTP.hxx"
#include "../SASL.hxx"

char *Buf;
char *Cond;
char Cookie[4096] = "", CmiScPtr[4096];
char BufferURL[6096 + 24], CookieURL[6096 + 24] = "", UserHeader[6096 + 24] = "", *URL, *Variables, *Optionall;
char RedirectedURLBuff[2048] = "";
char *CookieRequest = NULL, *NormalRequest = NULL;

int32_t SuccesCond = 0;
int32_t GetCookie = 1;
int32_t AuthFlag = 0;
int32_t CodeisSucces = 0;
int32_t CodeisFailure = 0;
int32_t WebPort;
int32_t RedirectedFlag;
int32_t RedirectedCPT = MAX_REDIRECT;

struct MAZMUM_HEADER_NODE
{
    char *Header;
    char *Value;
    char Type;

    struct MAZMUM_HEADER_NODE *Next;
};

typedef struct MAZMUM_COOKIE_NODE
{
    char *Name;
    char *Value;

    struct MAZMUM_COOKIE_NODE *Prev;
    struct MAZMUM_COOKIE_NODE *Next;
} MAZMUM_COOKIE_NODE_T, *MAZMUM_COOKIE_NODE_PTR;


MAZMUM_COOKIE_NODE_PTR MAZMUM_INITIALIZE(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR);
MAZMUM_COOKIE_NODE_PTR MAZMUM_HEADER_EXISTS(MAZMUM_COOKIE_NODE_PTR *PTR_Head, char *Header_Name, char Type);

struct MAZMUM_HEADER_NODE MAZMUM_HEADER_INITIALIZE(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR);

void MAZMUM_HDRREP(MAZMUM_COOKIE_NODE_PTR *PTR_Head, char *OldValue, char *NewValue);
void MAZMUM_HDRREPV(MAZMUM_COOKIE_NODE_PTR *PTR_Head, char *HDRName, char *NewValue);
void MAZMUM_CLEAN_UP(MAZMUM_COOKIE_NODE_PTR *PTR_Head);
void MAZMUM_RECONNECT(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *HostName);
void MAZMUM_SERVICE_HTTP_FORM(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, char *HostName, FILE *Fp, char *Type, mazmum_ptr_node_header Ptr_Head, MAZMUM_COOKIE_NODE_T Ptr_Cookie);
void MAZMUM_SERVICE_HTTP_GET_FORM(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_SERVICE_HTTP_SET_FORM(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_USAGE_HTTP_FORM(const char *Service);

char *MAZMUM_STNDRUP(const char *S, size_t N);
char *MAZMUM_STRINGIFY_COOKIES(MAZMUM_COOKIE_NODE_PTR PTR_COOKIE);
char *MAZMUM_STRINGFY_HEADERS(MAZMUM_COOKIE_NODE_PTR *PTR_Head);
char *MAZMUM_PREPARE_HTTP_REQUEST(char *Type, char *Path, char *Params, char *Headers);
char *MAZMUM_HTML_ENCODE(char *String);

std::atomic_int32_t MAZMUM_APPEND_COOKIE(char *Name, char *Value, MAZMUM_COOKIE_NODE_PTR *LastCookie);
std::atomic_int32_t MAZMUM_ADD_OR_UPDATE_COOKIE(MAZMUM_COOKIE_NODE_PTR *PTR_COOKIE, char *CookieExp);
std::atomic_int32_t MAZMUM_PROCESS_COOKIE(MAZMUM_COOKIE_NODE_PTR *PTR_COOKIE, char *CookieExp);
std::atomic_int32_t MAZMUM_ADD_HEADER(MAZMUM_COOKIE_NODE_PTR *PTR_Head, char *Header, char *Value, char Type);
std::atomic_int32_t MAZMUM_PARSE_OPTIONS(char *MiscPTR, MAZMUM_COOKIE_NODE_PTR *PTR_Head);
std::atomic_int32_t MAZMUM_STRPOS(char *Str, char *Target);
std::atomic_int32_t MAZMUM_ANALYZE_SERVER_RESPONSE(int32_t S);
std::atomic_int32_t MAZMUM_START_HTTP_FORM(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, char *HostName, FILE *Fp, char *Type, mazmum_ptr_node_header Ptr_Head, MAZMUM_COOKIE_NODE_T Ptr_Cookie);
std::atomic_int32_t MAZMUM_SERVICE_HTTP_FORM_INIT(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, char *HostName);


#endif X_4D415A4D554D5F4D415A4D554D48545450464F524D5F48_H
