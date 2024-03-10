#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <string.h>

#include "../../Kernel/AlGhadab/MazmumMod.hxx"
#include "../../Kernel/Net/MazmumAFP.hxx"

using namespace std;


/*
|===========================================================
|    MazmumDummyAfp()
|===========================================================
|
|
|===========================================================
*/
void MazmumDummyAfp(void)
{
    printf("\n");
}

/*
|===========================================================
|    MazmumStdOutFct()
|===========================================================
|
|
|===========================================================
*/
void MazmumStdOutFct(void *PrivPTR, enum LogLevel, int32_t LogType, const char *Message)
{

}

/*
|===========================================================
|    MazmumServiceAfp()
|===========================================================
| Этот метод является частью сетевой службы Mazmum и
| предназначен для управления обменом данными с протоколом
| Apple Filing Protocol (AFP). Он обеспечивает установку и
| поддержание соединения, осуществляет настройку, и
| делегирует фактическую работу по обмену данными
| через AFP другим функциям.
|
|===========================================================
*/
void MazmumServiceAfp(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t Sp, char *HostName)
{
    int32_t Run = 1, NextRun = 1, Socket = -1, MyPort = MAZMUM_PORT_AFP;
    MazmumRegisterSocket(Sp);

    if (memcmp(MazmumGetNextPair(), &MAZMUM_EXIT, sizeof(MAZMUM_EXIT)) == 0)
    {
        return;
    }

    while (1)
    {
        switch (Run)
        {
            case 1:
                if (Socket >= 0)
                {
                    Socket = MazmumDisconnect(Socket);
                }
                if ((Options & MAZMUM_OPTION_SSL) == 0)
                {
                    if (PORT != 0)
                    {
                        MyPort = PORT;
                    }
                    Socket = MazmumConnectTCP(IP, MyPort);
                    PORT = MyPort;
                }
                if (Socket < 0)
                {
                    if (quit != 1)
                    {
                        fprintf(stderr, "[ ERROR ]: Child With Pid { %d } Terminating can Not Connect\n", (int32_t)getpid());
                    }
                    MazmumChildExit(1);
                }
                NextRun = 2;
                break;
            case 2:
                NextRun = MazmumStartAfp(Socket, IP, PORT, Options, MiscPTR, Fp);
                break;
            case 3:
                if (Socket >= 0)
                {
                    Socket = MazmumDisconnect(Socket);
                }
                MazmumChildExit(1);
                return;
                break;
            default:
                fprintf(stderr, "[ ERROR ]: Caught Unknown Return Code, exiting!\n");
                MazmumChildExit(1);
                break;
            Run = NextRun;
        }
    }
}

/*
|===========================================================
|    MazmumServerSubConnection()
|===========================================================
|
|
|===========================================================
*/
static std::atomic_int32_t MazmumServerSubConnection(struct MAZMUM_AFP_URL MAU)
{

}

/*
|===========================================================
|    MazmumStartAfp()
|===========================================================
|
|
|===========================================================
*/
std::atomic_int32_t MazmumStartAfp(int32_t S, char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp)
{
    unsigned char *Empty, *Login, *Password, MLogin[MAZMUM_AFP_USERNAME_LEN], MPassword[MAZMUM_AFP_PASSWORD_LEN];
    struct MAZMUM_AFP_URL TmpUrl;

    if (strlen(Login = MazmumGetNextLogin()) == 0)
    {

    }
}

/*
|===========================================================
|    MazmumServiceAfpINIT()
|===========================================================
|
|
|===========================================================
*/
std::atomic_int32_t MazmumServiceAfpINIT(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, int32_t Sp, char *HostName)
{

}