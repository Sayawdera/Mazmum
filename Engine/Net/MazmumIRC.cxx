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
void MAZMUM_IRC_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName)
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
int32_t MAZMUM_START_OPER_IRC(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp)
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
int32_t MAZMUM_IRC_SERVER_CONNECT(char *IP, int32_t PORT, unsigned char Options, int32_t Socket, char *HostName)
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
int32_t MAZMUM_START_PASSWORD_IRC(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName)
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
int32_t MAZMUM_SERVICE_IRC_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName)
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
void MAZMUM_IRC_USAGE(const char *Service)
{

}
