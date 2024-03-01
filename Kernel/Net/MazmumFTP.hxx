#ifndef MAZMUM_MAZMUMFTP_HXX
#define MAZMUM_MAZMUMFTP_HXX


#include <stdint.h>
#include <stdio.h>

void MAZMUM_SERVICE_FTP_ENGINE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName, int32_t TLS);
void MAZMUM_SERVICE_FTP(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_SERVICE_FTPS(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, char *HostName);

int32_t MAZMUM_START_FTP(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp);
int32_t MAZMUM_SERVICE_FTP_INIT(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, char *HostName);

#endif MAZMUM_MAZMUMFTP_HXX
