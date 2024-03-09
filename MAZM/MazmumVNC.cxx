#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "../Kernel/AlGhadab/MazmumMod.hxx"
#include "../Kernel/AlGhadab/MazmumVNC.hxx"

using namespace std;


/*
|===========================================================
|    MazmumVNCService()
|===========================================================
|
|
|===========================================================
*/
void MazmumVNCService(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName)
{

}



/*
|===========================================================
|    MazmumVNCEncryptedBytes()
|===========================================================
|
|
|===========================================================
*/
void MazmumVNCEncryptedBytes(unsigned char *Bytes, char *Password)
{
    unsigned char Keys[8];
    int32_t I;

    for (I = 0; I < 8; I++)
    {
        if (I < strlen(Password))
        {
            Keys[I] = Password[I];
        } else {
            Keys[I] = 0;
        }
    }
}

/*
|===========================================================
|    MazmumStartVNC()
|===========================================================
|
|
|===========================================================
*/
std::atomic_int32_t MazmumStartVNC(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp)
{

}

/*
|===========================================================
|    MazmumVNCService_INIT()
|===========================================================
|
|
|===========================================================
*/
std::atomic_int32_t MazmumVNCService_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName)
{

}


/*
|===========================================================
|    MazmumVNCUsage()
|===========================================================
|
|
|===========================================================
*/
void MazmumVNCUsage(const char *Service)
{

}