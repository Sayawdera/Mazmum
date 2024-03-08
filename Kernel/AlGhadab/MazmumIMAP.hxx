#ifndef MAZMUM_MAZMUMIMAP_HXX
#define MAZMUM_MAZMUMIMAP_HXX

#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>


#include "MazmumMod.hxx"
#include "../SASL.hxx"


extern char *MAZMUM_EXIT;
char *Buf;
int32_t Counter;
int32_t Mazmum_Imap_Auth_Mechanism = MAZMUM_AUTH_CLEAR;

void MazmumIMAPService(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);
void MazmumIMAPUsage(const char *Service);


char *MazmumIMAPReadServerCapaCity(int32_t Socket);

std::atomic_int32_t MazmumStartIMAP(char *IP, int32_t PORT, unsigned char Options, int32_t S, FILE *Fp, char *MiscPTR);
std::atomic_int32_t MazmumIMAPServiceINIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

#endif MAZMUM_MAZMUMIMAP_HXX
