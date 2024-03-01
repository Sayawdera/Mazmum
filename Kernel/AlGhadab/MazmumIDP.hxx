#ifndef MAZMUM_MAZMUMIDP_HXX
#define MAZMUM_MAZMUMIDP_HXX

#include <stdio.h>
#include <inttypes.h>


void MAZMUM_IDP_SERVIE(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName, char Version, int32_t Mazmum_Auth_Method);

void MAZMUM_IDP_GET_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_IDP_POST_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_IDP_CRAM_MD_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_IDP_DIGEST_MD_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);

void MAZMUM_IDP_USAGE(const char *Service);

int32_t MAZMUM_START_IDP(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName, char Version, int32_t Mazmum_Auth_Method);
int32_t MAZMUM_IDP_SERVICE_INT(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);



#endif MAZMUM_MAZMUMIDP_HXX
