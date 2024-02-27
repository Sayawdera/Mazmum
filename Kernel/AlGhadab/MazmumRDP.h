#ifndef MAZMUM_MAZMUMRDP_H
#define MAZMUM_MAZMUMRDP_H



#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <freerd/freerd.h>

#include "MazmumMod.h"


extern char *MAZMUM_EXIT;
char *Buf;
extern MAZMUM_OPTION _Mazmum_Option;


void MAZMUM_DUMMY_RDP(void);
void MAZMUM_RDP_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_RDP_USAGE(const char *Service);

BOOL MAZMUM_RDP_CONNECT(char *Server, int32_t PORT, char *Domain, char *Login, char *Password);


int32_t MAZMUM_START_RDP(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
int32_t MAZMUM_RDP_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
#endif MAZMUM_MAZMUMRDP_H
