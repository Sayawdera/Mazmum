#ifndef MAZMUM_MAZMUMICQ_HXX
#define MAZMUM_MAZMUMICQ_HXX

#include <stdio.h>
#include <inttypes.h>

extern char *MAZMUM_EXIT;
extern int32_t Mazmum_Child_Head_No;
int32_t Seq = 1;

void MAZMUM_FIX_PACKAGE(char *Buf, int32_t Len);
void MAZMUM_ICQ_HEADER(char *Buf, unsigned short CMD, unsigned long Uin);
void MAZMUM_ICQ_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);


int32_t MAZMUM_ICQ_LOGIN(int32_t S, char *Login, char *Password);
int32_t MAZMUM_ICQ_LOGIN_l(int32_t S, char *Login);
int32_t MAZMUM_ICQ_DISCONNECT(int32_t S, char *Login);
int32_t MAZMUM_ICQ_ACK(int32_t S, char *Login);
int32_t MAZMUM_ICQ_START(char *IP, int32_t PORT, int32_t Socket, FILE *Output, char *MiscPTR, FILE *Fp);
int32_t MAZMUM_ICQ_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);


#endif MAZMUM_MAZMUMICQ_HXX
