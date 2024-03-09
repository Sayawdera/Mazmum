#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "../Kernel/AlGhadab/MazmumMod.hxx"
#include "../Kernel/AlGhadab/MazmumCSV.hxx"

using namespace std;


/*
|===========================================================
|    MAZMUM_SERVICE_CSV()
|===========================================================
|
|
|===========================================================
*/
void MazmumCSVService(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, char *HostName)
{

}

/*
|===========================================================
|    MAZMUM_SART_CSV()
|===========================================================
|
|
|===========================================================
*/
std::atomic_int32_t MazmumStartCSV(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp)
{
    return 0;
}

/*
|===========================================================
|    MAZMUM_SERVICE_CSV_INIT()
|===========================================================
|
|
|===========================================================
*/
std::atomic_int32_t MazmumCSVServiceINIT(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName)
{
    return 0;
}
