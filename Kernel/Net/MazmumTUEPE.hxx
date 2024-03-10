#ifndef MAZMUM_MAZMUMTUEPE_HXX
#define MAZMUM_MAZMUMTUEPE_HXX


#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>


#include "../AlGhadab/MazmumMod.hxx"



extern char *MAZMUM_EXIT;
char *Buf;
char *Err = NULL;
int32_t ToSent = 0;

#define MAZMUM_VREY 0
#define MAZMUM_EXPN 1
#define MAZMUM_RCPT 2

int32_t Mazmum_SMTP_Enum_Cmd = MAZMUM_VREY;


void MazmumServiceCiscoEnable(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t Sp, char *HostName);
void MazmumCiscoEnableUsageInfo(void);


void MazmumServiceHttpProxyUrlEnum(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *Hstname);
void MazmumServiceSmtEnum(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *Hstname);
void MazmumUsageHttpProxyUrlEnum(const char *Service);
void MazmumUsageSmtService(const char *Service);



std::atomic_int32_t MazmumStartCiscoEnable(int32_t S, char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MazmumCiscoINIT(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t Sp, char *HostName);

std::atomic_int32_t MazmumStartSmtEnum(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);

std::atomic_int32_t MazmumStartHttpProxyUrlEnum(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
std::atomic_int32_t MazmumServiceHttpProxyUrlEnumINIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
std::atomic_int32_t MazmumServiceSmtEnumINIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);



#endif MAZMUM_MAZMUMTUEPE_HXX
