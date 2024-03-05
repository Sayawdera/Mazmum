#ifndef MAZMUM_MAZMUMVNC_ICC
#define MAZMUM_MAZMUMVNC_ICC


#include <atomic>
#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "../AlGhadab/MazmumMod.hxx"

#define RFB33 1
#define RFB37 2

extern MAZMUM_OPTION_t __Mazmum_Option;
extern char *MAZMUM_EXIT;
extern char *Buf;

int32_t VncLientVersion = RFB33;
int32_t FailedAuth = 0;

void MazmumVNCService(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MazmumVNCUsage(const char *Service);
void MazmumVNCEncryptedBytes(unsigned char *Bytes, char *Password);

std::atomic_int32_t MazmumStartVNC(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MazmumVNCService_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);


#endif MAZMUM_MAZMUMVNC_ICC
