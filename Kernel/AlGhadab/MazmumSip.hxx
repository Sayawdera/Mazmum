#ifndef MAZMUM_MAZMUMSIP_HXX
#define MAZMUM_MAZMUMSIP_HXX


#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>
#include <string.h>
#include <ctype.h>

#include "MazmumMod.hxx"
#include "../SASL.hxx"


extern char *MAZMUM_EXIT;
char *Buf;

char Mazmum_External_IP_Address[17] = "";



#define MAZMUM_SIP_MAX_BUF 1024

int32_t CSeq;

extern int32_t MazmumDataReadyTime(int32_t Socket, long Second, long NanoSecond);


void MazmumDummySip(void);
void MazmumEmptyRegister(char *Buf, char *Host, char LHost, int32_t PORT, int32_t LPORT, char *User);
void MazmumSipService(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

char *MazmumGetIFaceIp(uint64_t IP);

std::atomic_int32_t MazmumGetSipCode(char *Buf);

std::atomic_int32_t MazmumSipStart(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);



std::atomic_int32_t MazmumSipServiceINIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);




#endif MAZMUM_MAZMUMSIP_HXX
