#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "../../Kernel/AlGhadab/MazmumMod.hxx"
#include "../../Kernel/Net/MazmumProxy.hxx"

using namespace std;



/*
|===========================================================
|    MAZMUM_SERVICE_HTTP_PROXY()
|===========================================================
|
|
|===========================================================
*/
void MazmumServiceHttpProxy(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName)
{

}




/*
|===========================================================
|    MAZMUM_START_HTTP_PROXY()
|===========================================================
|
|
|===========================================================
*/
std::atomic_int32_t MazmumStartHttpProxy(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName)
{
    return 1;
}

/*
|===========================================================
|    MAZMUM_SERVICE_HTTP_PROXY_INIT()
|===========================================================
|
|
|===========================================================
*/
std::atomic_int32_t MazmumServiceHttpProxyINIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName)
{
    return 1;
}


/*
|===========================================================
|    MAZMUM_USAGE_HTTP_PROXY()
|===========================================================
|
|
|===========================================================
*/
void MazmumUsageHttpProxy(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName)
{

}