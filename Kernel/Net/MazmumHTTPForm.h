#ifndef MAZMUM_MAZMUMHTTPFORM_H
#define MAZMUM_MAZMUMHTTPFORM_H

#define MAX_REDIRECT 8
#define MAX_CONTENT_LENGTH 20
#define MAX_PROXY_LENGTH 2048 / sizeof(CookieURL) * 2

#include "MazmumHTTP.h"
#include "../SASL.h"

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

void MAZMUM_HDRREP(MAZMUM_COOKIE_NODE_PTR *PTR_Head, char *OldValue, char *NewValue);
void MAZMUM_HDRREPV(MAZMUM_COOKIE_NODE_PTR *PTR_Head, char *HDRName, char *NewValue);
void MAZMUM_CLEAN_UP(MAZMUM_COOKIE_NODE_PTR *PTR_Head);

char *MAZMUM_STNDRUP(const char *S, size_t N);
char *MAZMUM_STRINGIFY_COOKIES(MAZMUM_COOKIE_NODE_PTR PTR_COOKIE);
char *MAZMUM_STRINGFY_HEADERS(MAZMUM_COOKIE_NODE_PTR *PTR_Head);

int32_t MAZMUM_APPEND_COOKIE(char *Name, char *Value, MAZMUM_COOKIE_NODE_PTR *LastCookie);
int32_t MAZMUM_ADD_OR_UPDATE_COOKIE(MAZMUM_COOKIE_NODE_PTR *PTR_COOKIE, char *CookieExp);
int32_t MAZMUM_PROCESS_COOKIE(MAZMUM_COOKIE_NODE_PTR *PTR_COOKIE, char *CookieExp);
int32_t MAZMUM_ADD_HEADER(MAZMUM_COOKIE_NODE_PTR *PTR_Head, char *Header, char *Value, char Type);
int32_t MAZMUM_PARSE_OPTIONS(char *MiscPTR, MAZMUM_COOKIE_NODE_PTR *PTR_Head);

#endif MAZMUM_MAZMUMHTTPFORM_H
