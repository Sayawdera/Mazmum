#ifndef MAZMUM_MAZMUMSIP_H
#define MAZMUM_MAZMUMSIP_H


#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <string.h>
#include <ctype.h>

#include "MazmumMod.h"
#include "../SASL.h"


extern char *MAZMUM_EXIT;
char *Buf;

char Mazmum_External_IP_Address[17] = "";



#define MAZMUM_SIP_MAX_BUF 1024

int32_t CSeq;

extern int32_t MAZMUM_DATA_READY_TIME(int32_t Socket, long Second, long NanoSecond);


void MAZMUM_DUMMY_SIP(void);
void MAZMUM_EMPTY_REGISTER(char *Buf, char *Host, char LHost, int32_t PORT, int32_t LPORT, char *User);
void MAZMUM_SIP_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

char *MAZMUM_GET_IFACE_IP(uint64_t IP);

int32_t MAZMUM_GET_SIP_CODE(char *Buf);

int32_t MAZMUM_START_SIP(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);



int32_t MAZMUM_SIP_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);




#endif MAZMUM_MAZMUMSIP_H
