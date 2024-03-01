#ifndef MAZMUM_MAZMUMAFP_HXX
#define MAZMUM_MAZMUMAFP_HXX

#include <stdint.h>
#include <stdio.h>
#include "../AlGhadab/MazmumMod.h"

void MAZMUM_DUMMY_AFP();
void MAZMUM_STDOUT_FCT(void *PrivPTR, enum LogLevel, int32_t LogType, const char *Message);
void MAZMUM_SERVICE_AFP(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t Sp, char *HostName);

static int32_t MAZMUM_SERVER_SUB_CONNECTION(struct MAZMUM_AFP_URL MAU);
int32_t MAZMUM_START_AFP(int32_t S, char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp);
int32_t MAZMUM_SERVICE_AFP_INIT(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t Sp, char *HostName);

#endif MAZMUM_MAZMUMAFP_HXX
