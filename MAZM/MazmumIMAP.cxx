#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "../Kernel/AlGhadab/MazmumMod.hxx"
#include "../Kernel/AlGhadab/MazmumIMAP.hxx"

using namespace std;


/*
|===========================================================
|    MAZMUM_IMAP_SERVICE()
|===========================================================
|
|
|===========================================================
*/
void MAZMUM_IMAP_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName)
{

}




/*
|===========================================================
|    *MAZMUM_IMAP_READ_SERVR_CAPACITY()
|===========================================================
|
|
|===========================================================
*/
char *MAZMUM_IMAP_READ_SERVR_CAPACITY(int32_t Socket)
{
    return 0;
}

/*
|===========================================================
|    MAZMUM_START_IMAP()
|===========================================================
|
|
|===========================================================
*/
int32_t MAZMUM_START_IMAP(char *IP, int32_t PORT, unsigned char Options, int32_t S, FILE *Fp, char *MiscPTR)
{
    return 1;
}

/*
|===========================================================
|    MAZMUM_IMAP_SERVICE_INIT()
|===========================================================
|
|
|===========================================================
*/
int32_t MAZMUM_IMAP_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName)
{
    return 1;
}


/*
|===========================================================
|    MAZMUM_USAGE_IMAP()
|===========================================================
|
|
|===========================================================
*/
void MAZMUM_USAGE_IMAP(const char *Service)
{

}