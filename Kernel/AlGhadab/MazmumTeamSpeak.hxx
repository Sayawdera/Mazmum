#ifndef MAZMUM_MAZMUMTEAMSPEAK_ICC
#define MAZMUM_MAZMUMTEAMSPEAK_ICC



#include <atomic>
#include <iostream>

#include <zlib.h>
#include <stdio.h>
#include <stdlib.h>

#include "../CRC.hxx"
#include "MazmumMod.hxx"

extern MAZMUM_OPTION_T __Mazmum_Option;
extern char *MAZMUM_EXIT;
extern char *Buf;


struct MAZMUM_TEAM_SPEAK
{
    char Header[16];
    unsigned long CRC;
    char ClientLen;
    char Client[29];
    char OSLen;
    char OS[29];
    char Misc[10];
    char UserLen;
    char User[29];
    char PasswordLen;
    char Password[29];
    char LoginLen;
    char Login[29];
};

extern std::atomic_int32_t MazmumDataReadyTimed(int32_t Socket, long Second, long NanoSecond);

void MazmumTeamSpeakService(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

std::atomic_int32_t MazmumStartTeamSpeak(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MazmumTeamSpeak_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);


#endif MAZMUM_MAZMUMTEAMSPEAK_ICC
