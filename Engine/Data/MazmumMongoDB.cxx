#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>


#include "../../Kernel/Data/MazmumMongoDB.hxx"
#include "../../Kernel/AlGhadab/MazmumMod.hxx"


/*
|===========================================================
|    MAZMUM_DUMMY_MEMCACHED()
|===========================================================
|
|
|===========================================================
*/
void MAZMUM_DUMMY_MEMCACHED(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName)
{

}

/*
|===========================================================
|    MAZMUM_MONGODB_USAGE()
|===========================================================
|
|
|===========================================================
*/
void MAZMUM_MONGODB_USAGE(const char *Service)
{

}


/*
|===========================================================
|    MAZMUM_IS_ERROR_MSG()
|===========================================================
|
|
|===========================================================
*/
int MAZMUM_IS_ERROR_MSG(char *Msg)
{
    return 0;
}

/*
|===========================================================
|    MAZMUM_REQUIRE_AUTH()
|===========================================================
|
|
|===========================================================
*/
int MAZMUM_REQUIRE_AUTH(int32_t Socket)
{
    return 0;
}


/*
|===========================================================
|    MAZMUM_START_MONGODB()
|===========================================================
|
|
|===========================================================
*/
int32_t MAZMUM_START_MONGODB(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp)
{
    return 1;
}

/*
|===========================================================
|    MAZMUM_SERVICE_MONGODB_INIT()
|===========================================================
|
|
|===========================================================
*/
int32_t MAZMUM_SERVICE_MONGODB_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName)
{
    return 1;
}