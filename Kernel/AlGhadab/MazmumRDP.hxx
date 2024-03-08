#ifndef MAZMUM_MAZMUMRDP_HXX
#define MAZMUM_MAZMUMRDP_HXX


#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>
#include <freerd/freerd.h>

#include "MazmumMod.hxx"





extern char *MAZMUM_EXIT;
char *Buf;
extern MAZMUM_OPTION_T _Mazmum_Option;


void MAZMUM_DUMMY_RDP(void);
void MAZMUM_RDP_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_RDP_USAGE(const char *Service);

BOOL MAZMUM_RDP_CONNECT(char *Server, int32_t PORT, char *Domain, char *Login, char *Password);


std::atomic_int32_t MAZMUM_START_RDP(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MAZMUM_RDP_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);


#endif MAZMUM_MAZMUMRDP_HXX
