#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "../../Kernel/AlGhadab/MazmumMod.hxx"
#include "../../Kernel/Net/MazmumIRC.hxx"

using namespace std;



/*
|===========================================================
|    MAZMUM_IRC_SERVICE()
|===========================================================
|
|
|===========================================================
*/
void MazmumIrcService(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName)
{

}

/*
|===========================================================
|    MAZMUM_START_OPER_IRC()
|===========================================================
|
|
|===========================================================
*/
std::atomic_int32_t MazmumStartOperIrc(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp)
{
    return 1;
}


/*
|===========================================================
|    MAZMUM_IRC_SERVER_CONNECT()
|===========================================================
|
|
|===========================================================
*/
std::atomic_int32_t MazmumIrcServerConnect(char *IP, int32_t PORT, unsigned char Options, int32_t Socket, char *HostName)
{
    return 1;
}


/*
|===========================================================
|    MAZMUM_START_PASSWORD_IRC()
|===========================================================
|
|
|===========================================================
*/
std::atomic_int32_t MazmumStartPasswordIrc(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName)
{
    return 1;
}


/*
|===========================================================
|    MAZMUM_SERVICE_IRC_INIT()
|===========================================================
|
|
|===========================================================
*/
std::atomic_int32_t MazmumServiceIrcINIT(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName)
{
    return 1;
}



/*
|===========================================================
|    MAZMUM_IRC_USAGE()
|===========================================================
|
|
|===========================================================
*/
void MazmumIrcUsage(const char *Service)
{

}
