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

void MAZMUM_SHOW_BUFFER(char *Buffer, int32_t Size);
void MAZMUM_CLEAR_BUFFER(char *Buffer, int32_t Size);
void MAZMUM_PRINT_ENCRYPTED_STR(char *Str);
void MAZMUM_PCA_ENCRYPT(char *Clear_Text);
void MAZMUM_PCA_DECRYPT(char *Password);
void MAZMUM_DEBUG_PRINTF(char *Msg);
void MAZMUM_PCANYWHERE_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);


int32_t MAZMUM_SEND_CSTRING(int32_t S, char *Crypted_String);
int32_t MAZMUM_START_PCANYWHERE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
int32_t MAZMUM_PCANYWHERE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

#endif MAZMUM_MAZMUMPCANYWHERE_HXX
