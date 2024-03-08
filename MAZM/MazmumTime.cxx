#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "../Kernel/AlGhadab/MazmumMod.hxx"
#include "../Kernel/AlGhadab/MazmumTime.hxx"

using namespace std;
#ifndef __WINT__

int32_t MAZMUM_SLEEPN(time_t MAZM_Seconds)
{
    struct Mazmum_Time_Spec MTS;
    MTS.MTS_Seconds = MAZM_Seconds;
    MTS.MTS_Nano_Second = 0;
    return MAZMUM_NANO_SLEEP(&MTS, NULL);

}