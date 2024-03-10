#ifndef MAZMUM_MAZMUMICQ_HXX
#define MAZMUM_MAZMUMICQ_HXX

#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>


#include "../AlGhadab/MazmumMod.hxx"

extern char *MAZMUM_EXIT;
extern int32_t Mazmum_Child_Head_No;
int32_t Seq = 1;

void MazmumFixPackage(char *Buf, int32_t Len);
void MazmumIcqHeader(char *Buf, unsigned short CMD, unsigned long Uin);
void mazmumIcqService(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);


std::atomic_int32_t MazmumIcqLogin(int32_t S, char *Login, char *Password);
std::atomic_int32_t MazmumIcqLoginL(int32_t S, char *Login);
std::atomic_int32_t mazmumIcqDisconnect(int32_t S, char *Login);
std::atomic_int32_t MazmumIcqAck(int32_t S, char *Login);
std::atomic_int32_t MazmumIcqStart(char *IP, int32_t PORT, int32_t Socket, FILE *Output, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MazmumIcqServiceINIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);


#endif MAZMUM_MAZMUMICQ_HXX
