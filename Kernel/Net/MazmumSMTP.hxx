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

void MAZMUM_SMTP_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_SMTP_USAGE(const char *Service);


char *MAZMUM_SMTP_READ_SERVER_CAPACITY(int32_t Socket);



int32_t MAZMUM_START_SMTP(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
int32_t MAZMUM_SMTP_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);



#endif MAZMUM_MAZMUMSMTP_HXX
