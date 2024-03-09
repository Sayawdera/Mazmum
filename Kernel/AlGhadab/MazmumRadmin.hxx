#ifndef MAZMUM_MAZMUMRADMIN_HXX
#define MAZMUM_MAZMUMRADMIN_HXX





#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>
#include <gcrypt.h>


#include "MazmumMod.hxx"


extern char *MAZMUM_EXIT;
char *Buf;

struct MAZMUM_RM_MESSAGE
{
    uint8_t Magic;
    uint8_t Length;
    uint8_t Checksum;
    uint8_t Type;
    unsigned char Data[32];
};


struct MAZMUM_RM_MESSAGE *Buffer_Message(char *Bufferization);

void MazmumChallengeRequest(struct MAZMUM_RM_MESSAGE *Msg);
void MazmumChallengeResponse(struct MAZMUM_RM_MESSAGE *Msg, unsigned char *Solution);
void MazmumRAdminService(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

char *MazmumMessageBufferization(struct MAZMUM_RM_MESSAGE *Msg);

std::atomic_int32_t MazmumCheckSum(struct MAZMUM_RM_MESSAGE *Msg);
std::atomic_int32_t MazmumStartRAdmin(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MazmumRAdminServiceINIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName);

#endif MAZMUM_MAZMUMRADMIN_HXX
