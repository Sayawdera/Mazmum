#ifndef MAZMUM_MAZMUMHTTP_HXX
#define MAZMUM_MAZMUMHTTP_HXX

#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>


#include "../AlGhadab/MazmumMod.hxx"
#include "MazmumHTTPForm.hxx"
#include "../SASL.hxx"

#define MAZMUM_HEADER_TYPE_USER_HEADER 'h'
#define MAZMUM_HEADER_TYPE_USER_HEADER_REPL 'H'
#define MAZMUM_HEADER_TYPE_DEFAULT 'D'
#define MAZMUM_HEADER_TYPE_DEFAULT_REPL 'd'
#define MAZMUM_END_CONDITION_MAX_LEN 100

static char MAZMUM_END_CONDITION_LEN[MAZMUM_END_CONDITION_MAX_LEN];

typedef struct MAZMUM_NODE_HEADER mazmum_node_header_t, *mazmum_ptr_node_header;

extern char *mazmum_webtarget;
extern char *mazmum_slash;
extern char *mazmum_optional1;
extern char *mazmum_exit;
extern char *http_buf;

extern int32_t MAZMYM_PARSE_OPTIONS(char *miscptr, mazmum_ptr_node_header *ptr_head);
extern int32_t MAZMUM_ADD_HEADERS(mazmum_ptr_node_header *ptr_head, char *header, char *value, char type);

int Mazmum_End_Condition_Type = -1;
int32_t Mazmum_web_port;
int32_t Mazmum_HTTP_Auth_Mechanism = MAZMUM_AUTH_UNASSIGNED;

extern char *stringify_headers(mazmum_ptr_node_header *ptr_head);

void MAZMUM_HTTP_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName, char *Type);
void MAZMUM_HTTP_GET_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_HTTP_POST_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_HTTP_HEAD_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_HTTP_USAGE(const char *Service);

int32_t MAZMUM_START_HTTP(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *Type, mazmum_ptr_node_header Ptr_Head);
int32_t MAZMUM_HTTP_INIT_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);



#endif MAZMUM_MAZMUMHTTP_HXX
