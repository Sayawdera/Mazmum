#ifndef MAZMUM_MAZMUMAFP_H
#define MAZMUM_MAZMUMAFP_H

#include <stdint.h>
#include <stdio.h>
#include "MazmumMod.h"

void Mazmum_Dummy_AFP();
void Mazmum_StdOut_FCT(void *PrivPTR, enum LogLevel, int32_t LogType, const char *Message);
void Mazmum_Service_AFP(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t Sp, char *HostName);

static int32_t Mazmum_Server_SubConnection(struct MAZMUM_AFP_URL MAU);
int32_t Mazmum_start_AFP(int32_t S, char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp);
int32_t Mazmum_Service_AFP_INIT(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t Sp, char *HostName);

#endif MAZMUM_MAZMUMAFP_H
