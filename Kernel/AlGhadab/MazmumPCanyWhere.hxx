#ifndef MAZMUM_MAZMUMPCANYWHERE_HXX
#define MAZMUM_MAZMUMPCANYWHERE_HXX

#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>


#include "MazmumMod.hxx"
#include "../SASL.hxx"



extern char *MAZMUM_EXIT;
int32_t PCADebug;

void MazmumShowBuffer(char *Buffer, int32_t Size);
void MazmumClearBuffer(char *Buffer, int32_t Size);
void MazmumPrintEncryptedStr(char *Str);
void MazmumPcaEncrypt(char *Clear_Text);
void MazmumPcaDecrypt(char *Password);
void MazmumDebugPrintf(char *Msg);
void MazmumPCanyWhereService(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);


std::atomic_int32_t MazmumSendCString(int32_t S, char *Crypted_String);
std::atomic_int32_t MazmumStartPCanyWhere(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MazmumPcanyWhereINIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

#endif MAZMUM_MAZMUMPCANYWHERE_HXX
