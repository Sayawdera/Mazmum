#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "../Kernel/AlGhadab/MazmumMod.hxx"
#include "../Kernel/AlGhadab/MazmumOracleListener.hxx"
#include "../Kernel/AlGhadab/MazmumOracle.hxx"

using namespace std;





/*
|===========================================================
|    MAZMUM_DUMMY_ORACLE_LISTENER()
|===========================================================
|
|
|===========================================================
*/
void MAZMUM_DUMMY_ORACLE_LISTENER(void)
{

}

/*
|===========================================================
|    MAZMUM_ORACLE_LISTENER_SERVICE()
|===========================================================
|
|
|===========================================================
*/
void MAZMUM_ORACLE_LISTENER_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName)
{

}



/*
|===========================================================
|    MAZMUM_INITIAL_PERMUTATION()
|===========================================================
|
|
|===========================================================
*/
int32_t MAZMUM_INITIAL_PERMUTATION(unsigned char **Result, char *P_Str, int32_t *Size)
{
    return 1;
}

/*
|===========================================================
|    MAZMUM_ORA_HASH()
|===========================================================
|
|
|===========================================================
*/
int32_t MAZMUM_ORA_HASH(unsigned char **OraHash, unsigned char *Buf, int32_t Len)
{
    return 1;
}

/*
|===========================================================
|    MAZMUM_CONVERT_BYTE_ORDER()
|===========================================================
|
|
|===========================================================
*/
int32_t MAZMUM_CONVERT_BYTE_ORDER(unsigned char **Result, int32_t Size)
{
    return 1;
}

/*
|===========================================================
|    MAZMUM_ORA_DYCRYPT()
|===========================================================
|
|
|===========================================================
*/
int32_t MAZMUM_ORA_DYCRYPT(unsigned char **RS, unsigned char *Result, int32_t Size)
{
    return 1;
}

/*
|===========================================================
|    MAZMUM_ORA_HASH_PASSWORD()
|===========================================================
|
|
|===========================================================
*/
int32_t MAZMUM_ORA_HASH_PASSWORD(char **Password)
{
    return 1;
}

/*
|===========================================================
|    MAZMUM_START_ORACLE_LISTENER()
|===========================================================
|
|
|===========================================================
*/
int32_t MAZMUM_START_ORACLE_LISTENER(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp)
{
    return 1;
}

/*
|===========================================================
|    MAZMUM_ORACLE_LISTENER_SERVICE_INIT()
|===========================================================
|
|
|===========================================================
*/
int32_t MAZMUM_ORACLE_LISTENER_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName)
{
    return 1;
}


/*
|===========================================================
|    MAZMUM_ORACLE_LISTENER_USAGE()
|===========================================================
|
|
|===========================================================
*/
void MAZMUM_ORACLE_LISTENER_USAGE(const char *Service)
{

}