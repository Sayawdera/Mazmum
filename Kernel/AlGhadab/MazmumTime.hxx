#ifndef MAZMUM_MAZMUMTIME_ICC
#define MAZMUM_MAZMUMTIME_ICC



#include <atomic>
#include <iostream>

#include <zlib.h>
#include <stdio.h>
#include <stdlib.h>

#include "../CRC.hxx"
#include "../AlGhadab/MazmumMod.hxx"

extern MAZMUM_OPTION_T __Mazmum_Option;
extern char *MAZMUM_EXIT;
extern char *Buf;

std::atomic_int32_t MazmumSleep(time_t Seconds);
std::atomic_int32_t MazmumUSleepN(uint64_t MiliSeconds);
std::atomic_int32_t MazmumSleepN(uint32_t Seconds);
std::atomic_int32_t MazmumUSleepN(uint32_t MiliSeconds);




#endif MAZMUM_MAZMUMTIME_ICC
