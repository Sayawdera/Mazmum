#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "../Kernel/AlGhadab/MazmumMod.hxx"
#include "../Kernel/AlGhadab/MazmumAdam.hxx"

using namespace std;



/*
|===========================================================
|    MazmumAdamService()
|===========================================================
|
|
|===========================================================
*/
void MazmumAdamService(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName)
{

}


/*
|===========================================================
|    MazmumStartAdam()
|===========================================================
|
|
|===========================================================
*/
std::atomic_int32_t MazmumStartAdam(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp)
{
    char *Empty = "";
    char *Password;
    unsigned char *BUffer[300];
    int32_t I;

    if (strlen(Password = MazmumGetNextPassword()) == 0)
    {
        Password = Empty;
    }

}

/*
|===========================================================
|    MazmumAdamINIT()
|===========================================================
|
|
|===========================================================
*/
std::atomic_int32_t MazmumAdamINIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, char *MiscPTR, FILE *Fp, char *HostName)
{

}