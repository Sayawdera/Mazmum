#ifndef MAZMUM_MAZMUMNNTP_HXX
#define MAZMUM_MAZMUMNNTP_HXX


#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>


#include "../AlGhadab/MazmumMod.hxx"
#include "../SASL.hxx"


int32_t Mazmum_NNTP_Auth_Mechaniscm = MAZMUM_AUTH_CLEAR;

extern char *MAZMUM_EXIT;
char *Buf;

void MazmumNntpService(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MazmumNntpUsage(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

char *MazmumNntpReadServerCapACity(int32_t Socket);

std::atomic_int32_t MazmumNntpStart(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);



#endif MAZMUM_MAZMUMNNTP_HXX
