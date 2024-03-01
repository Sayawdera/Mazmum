#ifndef MAZMUM_MAZMUMIRC_HXX
#define MAZMUM_MAZMUMIRC_HXX

#include <inttypes.h>
#include <stdio.h>

#include "../AlGhadab/MazmumMod.h"

extern char *MAZMUM_EXIT;
char Buffer[300] = "";
int32_t MyPort = PORT_IRC, MySSLPort = PORT_IRC_SSL;


void MAZMUM_IRC_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_IRC_USAGE(const char *Service);

int32_t MAZMUM_START_OPER_IRC(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp);
int32_t MAZMUM_IRC_SERVER_CONNECT(char *IP, int32_t PORT, unsigned char Options, int32_t Socket, char *HostName);
int32_t MAZMUM_START_PASSWORD_IRC(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);
int32_t MAZMUM_SERVICE_IRC_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);




#endif MAZMUM_MAZMUMIRC_HXX
