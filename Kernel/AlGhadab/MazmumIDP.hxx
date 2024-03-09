#ifndef MAZMUM_MAZMUMIDP_HXX
#define MAZMUM_MAZMUMIDP_HXX

#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>


#include "MazmumMod.hxx"


void MazmumIDPService(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName, char Version, int32_t Mazmum_Auth_Method);

void MazmumIDPGetService(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);
void MazmumIDPOistService(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);
void MazmumIDPCramMDService(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);
void MazmumIDPCramService(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);

void MazmumIDPUsage(const char *Service);

std::atomic_int32_t MazmumStartIDP(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName, char Version, int32_t Mazmum_Auth_Method);
std::atomic_int32_t MazmumIDPServiceINIT(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);



#endif MAZMUM_MAZMUMIDP_HXX
