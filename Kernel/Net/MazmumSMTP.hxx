#ifndef MAZMUM_MAZMUMSMTP_HXX
#define MAZMUM_MAZMUMSMTP_HXX




#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>


#include "../AlGhadab/MazmumMod.hxx"
#include "../SASL.hxx"

extern char *MAZMUM_EXIT;
char *Buf;
char *Err = NULL;
int32_t ToSent = 0;
int32_t Mazmum_Smtp_Auth_Mechanism = MAZMUM_AUTH_LOGIN;

void MazmumSmtpService(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MazmumSmtpUsage(const char *Service);


char *MazmumSmtpReadServerCapACity(int32_t Socket);



std::atomic_int32_t MazmumStartSmtp(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MazmumSmtpServiceINIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);



#endif MAZMUM_MAZMUMSMTP_HXX
