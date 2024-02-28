#ifndef MAZMUM_MAZMUMRTSP_H
#define MAZMUM_MAZMUMRTSP_H




#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <string.h>

#include "MazmumMod.h"
#include "../SASL.h"


extern char *MAZMUM_EXIT;
char *Buf;
char Package_One[500];
char Package_Two[500];

#define MAZMUM_COMMAND "/bin/ls /"

void MAZMUM_CREATE_PACKAGE_ENGINE(int32_t Control, char *IP, int32_t PORT);
void MAZMUM_RTSP_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);


int32_t MAZMUM_IS_UNAUTHORIZED(char *Service);
int32_t MAZMUM_IS_NOT_FOUND(char *Service);
int32_t MAZMUM_IS_AUTHORIZED(char *Service);
int32_t MAZMUM_USE_BASIC_AUTH(char *Service);
int32_t MAZMUM_USE_DIGEST_AUTH(char *Service);
int32_t MAZMUM_START_RTSP(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);


int32_t MAZMUM_RSH_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);




#endif MAZMUM_MAZMUMRTSP_H
