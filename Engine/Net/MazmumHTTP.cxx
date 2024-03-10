#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "../../Kernel/AlGhadab/MazmumMod.hxx"
#include "../../Kernel/Net/MazmumHTTP.hxx"

using namespace std;


/*
|===========================================================
|    MAZMUM_HTTP_SERVICE()
|===========================================================
|
|
|===========================================================
*/
void MAZMUM_HTTP_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName, char *Type)
{

}

/*
|===========================================================
|    MAZMUM_HTTP_GET_SERVICE()
|===========================================================
|
|
|===========================================================
*/
void MAZMUM_HTTP_GET_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName)
{

}

/*
|===========================================================
|    MAZMUM_HTTP_POST_SERVICE()
|===========================================================
|
|
|===========================================================
*/
void MAZMUM_HTTP_POST_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName)
{

}

/*
|===========================================================
|    MAZMUM_HTTP_HEAD_SERVICE()
|===========================================================
|
|
|===========================================================
*/
void MAZMUM_HTTP_HEAD_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName)
{

}



/*
|===========================================================
|    MAZMUM_START_HTTP()
|===========================================================
|
|
|===========================================================
*/
std::atomic_int32_t MAZMUM_START_HTTP(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *Type, mazmum_ptr_node_header Ptr_Head)
{
    return 1;
}

/*
|===========================================================
|    MAZMUM_HTTP_INIT_SERVICE()
|===========================================================
|
|
|===========================================================
*/
std::atomic_int32_t MAZMUM_HTTP_INIT_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName)
{
    return 1;
}


/*
|===========================================================
|    MAZMUM_HTTP_USAGE()
|===========================================================
|
|
|===========================================================
*/
void MAZMUM_HTTP_USAGE(const char *Service)
{

}