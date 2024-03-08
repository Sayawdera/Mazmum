#ifndef MAZMUM_MAZMUMIRC_HXX
#define MAZMUM_MAZMUMIRC_HXX

#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>


#include "../AlGhadab/MazmumMod.hxx"

extern char *MAZMUM_EXIT;
char Buffer[300] = "";
int32_t MyPort = PORT_IRC, MySSLPort = PORT_IRC_SSL;


void MAZMUM_IRC_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_IRC_USAGE(const char *Service);

std::atomic_int32_t MAZMUM_START_OPER_IRC(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MAZMUM_IRC_SERVER_CONNECT(char *IP, int32_t PORT, unsigned char Options, int32_t Socket, char *HostName);
std::atomic_int32_t MAZMUM_START_PASSWORD_IRC(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);
std::atomic_int32_t MAZMUM_SERVICE_IRC_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);




#endif MAZMUM_MAZMUMIRC_HXX
