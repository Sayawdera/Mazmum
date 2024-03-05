#ifndef MAZMUM_MAZMUMVMAUTHD_ICC
#define MAZMUM_MAZMUMVMAUTHD_ICC



#include <atomic>
#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "../AlGhadab/MazmumMod.hxx"

extern MAZMUM_OPTION_T __Mazmum_Option;
extern char *MAZMUM_EXIT;
extern char *Buf;


void MazmumVMAuthDService(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MazmumVMAuthDUsage(const char *Service);


std::atomic_int32_t MazmumStartVMAuthD(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MazmumVMAuthDService_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);



#endif MAZMUM_MAZMUMVMAUTHD_ICC
