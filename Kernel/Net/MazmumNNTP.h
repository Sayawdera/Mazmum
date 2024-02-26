#ifndef MAZMUM_MAZMUMNNTP_H
#define MAZMUM_MAZMUMNNTP_H


#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "../AlGhadab/MazmumMod.h"
#include "../SASL.h"


int32_t Mazmum_NNTP_Auth_Mechaniscm = MAZMUM_AUTH_CLEAR;

extern char *MAZMUM_EXIT;
char *Buf;

void MAZMUM_NNTP_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_NNTP_USAGE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

char *MAZMUM_NNTP_READ_SERVER_CAPACITY(int32_t Socket);

int32_t MAZMUM_NNTP_START(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);



#endif MAZMUM_MAZMUMNNTP_H
