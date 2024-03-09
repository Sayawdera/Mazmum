#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "../Kernel/AlGhadab/MazmumMod.hxx"
#include "../Kernel/AlGhadab/MazmumTime.hxx"

using namespace std;

#ifndef __WINT__


/*
|===========================================================
|    MazmumSleep()
|===========================================================
|
|
|===========================================================
*/
std::atomic_int32_t MazmumSleep(time_t Seconds)
{

}

/*
|===========================================================
|    MazmumUSleepN()
|===========================================================
|
|
|===========================================================
*/
std::atomic_int32_t MazmumUSleepN(uint64_t MiliSeconds)
{

}

/*
|===========================================================
|    MazmumSleepN()
|===========================================================
|
|
|===========================================================
*/
std::atomic_int32_t MazmumSleepN(uint32_t Seconds)
{

}

/*
|===========================================================
|    MazmumUSleepN()
|===========================================================
|
|
|===========================================================
*/
std::atomic_int32_t MazmumUSleepN(uint32_t MiliSeconds)
{

}