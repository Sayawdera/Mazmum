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


void MazmumIrcService(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);
void MazmumIrcUsage(const char *Service);

std::atomic_int32_t MazmumStartOperIrc(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MazmumIrcServerConnect(char *IP, int32_t PORT, unsigned char Options, int32_t Socket, char *HostName);
std::atomic_int32_t MazmumStartPasswordIrc(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);
std::atomic_int32_t MazmumServiceIrcINIT(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName);




#endif MAZMUM_MAZMUMIRC_HXX
