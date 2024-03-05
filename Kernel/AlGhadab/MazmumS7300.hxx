#ifndef MAZMUM_MAZMUMS7300_HXX
#define MAZMUM_MAZMUMS7300_HXX



#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>
#include <string.h>

#include "MazmumMod.hxx"
#include "../SASL.hxx"


extern char *MAZMUM_EXIT;
char *Buf;

#define MAZMUM_S7300_SIZE_LEN 8

unsigned char MAZMUM_PC_OPT[];
unsigned char MAZMUM_P_S7300_NEGOTIATE_PDU[];
unsigned char MAZMUM_P_S7300_READ_SIZE[];
unsigned char MAZMUM_P_S7300_PASSWORD_REQUEST[];

void MAZMUM_S7300_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_S7300_USAGE(const char *Service);


int32_t MAZMUM_S7300_START(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);



int32_t MAZMUM_S7300_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);




#endif MAZMUM_MAZMUMS7300_HXX
