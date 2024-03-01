#ifndef MAZMUM_MAZMUMIMAP_HXX
#define MAZMUM_MAZMUMIMAP_HXX

#include <stdio.h>
#include <inttypes.h>


extern char *MAZMUM_EXIT;
char *Buf;
int32_t Counter;
int32_t Mazmum_Imap_Auth_Mechanism = AUTH_CLEAR;

void MAZMUM_IMAP_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_USAGE_IMAP(const char *Service);

char *MAZMUM_IMAP_READ_SERVR_CAPACITY(int32_t Socket);

int32_t MAZMUM_START_IMAP(char *IP, int32_t PORT, unsigned char Options, int32_t S, FILE *Fp, char *MiscPTR);
int32_t MAZMUM_IMAP_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

#endif MAZMUM_MAZMUMIMAP_HXX
