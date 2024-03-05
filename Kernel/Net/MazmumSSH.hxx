#ifndef MAZMUM_MAZMUMSSH_HXX
#define MAZMUM_MAZMUMSSH_HXX



#include "../AlGhadab/MazmumMod.hxx"

#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include <libssh/libssh.h> // libssh.org for C++


SSHSession Session = NULL;

extern MAZMUM_OPTION_T __Mazmum_Option;
char *MAZMUM_EXIT;
char *Buf;
std::atomic_int32_t NewSession = 1;

void MazmumDummySSH();

void MazmumServiceSSH(char *IP, int32_t PORT, unsigned char Option, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
void MazmumServiceSSHKey(char *IP, int32_t PORT, unsigned char Option, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

std::atomic_int32_t MazmumStartSSH(char *IP, int32_t PORT, unsigned char Option, int32_t Sp, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MazmumSSHKey(char *IP, int32_t PORT, unsigned char Option, int32_t Sp, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MazmumServiceSSH_INIT(char *IP, int32_t PORT, unsigned char Option, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);
std::atomic_int32_t MazmumServiceSSHKey_INIT(char *IP, int32_t PORT, unsigned char Option, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);


#endif MAZMUM_MAZMUMSSH_HXX
