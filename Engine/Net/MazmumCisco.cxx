#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "../../Kernel/AlGhadab/MazmumMod.hxx"
#include "../../Kernel/Al/MazmumCisco.hxx"

using namespace std;



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