#include <stdio.h>
#include <stdlib.h>

#include "../../Kernel/Net/MazmumICQ.hxx"



/*
|===========================================================
|    MAZMUM_FIX_PACKAGE()
|===========================================================
|
|
|===========================================================
*/
void MAZMUM_FIX_PACKAGE(char *Buf, int32_t Len)
{

}

/*
|===========================================================
|    MAZMUM_ICQ_HEADER()
|===========================================================
|
|
|===========================================================
*/
void MAZMUM_ICQ_HEADER(char *Buf, unsigned short CMD, unsigned long Uin)
{

}



/*
|===========================================================
|    MAZMUM_ICQ_LOGIN()
|===========================================================
|
|
|===========================================================
*/
int32_t MAZMUM_ICQ_LOGIN(int32_t S, char *Login, char *Password)
{
    return 1;
}

/*
|===========================================================
|    MAZMUM_ICQ_DISCONNECT()
|===========================================================
|
|
|===========================================================
*/
int32_t MAZMUM_ICQ_LOGIN_l(int32_t S, char *Login)
{
    return 1;
}

/*
|===========================================================
|    MAZMUM_ICQ_DISCONNECT()
|===========================================================
|
|
|===========================================================
*/
int32_t MAZMUM_ICQ_DISCONNECT(int32_t S, char *Login)
{
    return 1;
}

/*
|===========================================================
|    MAZMUM_ICQ_ACK()
|===========================================================
|
|
|===========================================================
*/
int32_t MAZMUM_ICQ_ACK(int32_t S, char *Login)
{
    return 1;
}

/*
|===========================================================
|    MAZMUM_ICQ_START()
|===========================================================
|
|
|===========================================================
*/
int32_t MAZMUM_ICQ_START(char *IP, int32_t PORT, int32_t Socket, FILE *Output, char *MiscPTR, FILE *Fp)
{
    return 1;
}

/*
|===========================================================
|    MAZMUM_ICQ_SERVICE_INIT()
|===========================================================
|
|
|===========================================================
*/
int32_t MAZMUM_ICQ_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName)
{
    return 1;
}



/*
|===========================================================
|    MAZMUM_ICQ_SERVICE()
|===========================================================
|
|
|===========================================================
*/
void MAZMUM_ICQ_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t S, char *MiscPTR, FILE *Fp, char *HostName)
{

}