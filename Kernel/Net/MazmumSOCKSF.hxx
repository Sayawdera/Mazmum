#ifndef MAZMUM_MAZMUMSOCKSF_HXX
#define MAZMUM_MAZMUMSOCKSF_HXX


#include "../AlGhadab/MazmumMod.h"

extern char *MAZMUM_EXIT;
unsigned char *Buf;

int fail_cnt;

int32_t MazmumStartSocksF(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char*MiscPTR);

#endif MAZMUM_MAZMUMSOCKSF_HXX
