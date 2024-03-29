#ifndef MAZMUM_MAZMUMAFP_HXX
#define MAZMUM_MAZMUMAFP_HXX

#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>
#include <afpfs-ng/afp.h>
#include <afpfs-ng/libafpclient.h>

#include "../AlGhadab/MazmumMod.hxx"


extern char *MAZMUM_EXIT;


static struct libfpcclient afpclient = {
        .unmount_volume = NULL,
        .log_for_client = stdout_fct,
        .forced_ending_hook = NULL,
        .scan_extra_fds = NULL,
        .loop_started = NULL,
};

void MazmumDummyAfp();
void MazmumStdOutFct(void *PrivPTR, enum LogLevel, int32_t LogType, const char *Message);
void MazmumServiceAfp(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t Sp, char *HostName);

static std::atomic_int32_t MazmumServerSubConnection(struct MAZMUM_AFP_URL MAU);
std::atomic_int32_t MazmumStartAfp(int32_t S, char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MazmumServiceAfpINIT(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t Sp, char *HostName);

#endif MAZMUM_MAZMUMAFP_HXX
