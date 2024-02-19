#include <stdint.h>
#include <stdio.h>
#include "Headers/SASL.h"



/*
|=========================================================================
|    Mazmum_Print_HEX()
|=========================================================================
|
| Функция для вывода значений массива в формате HEX.
|
| Параметры:
| - Buf: Указатель на массив байт для вывода.
| - Len: Длина массива.
|
| Выводит значения в формате "0x%02x", 
| разделяя их запятыми и переносами строк
| после каждых 8 значений для удобства чтения.
|
|=========================================================================
*/
int32_t Mazmum_Print_HEX(unsigned char *Buf, int32_t Len)
{
    int32_t I, J;

    for (I = 0, J = 0; I < Len; I++)
    {
        if (J > 7)
        {
            printf("\n");
            J = 0;
        }
        printf("0x%02x, ", Buf[I]);
        J++;
    }
    printf("\n");
    return (0);
}


/*
|=========================================================================
|    Mazmum_Print_HEX()
|=========================================================================
|
| Функция для вывода значений массива в формате HEX.
|
| Параметры:
| - Buf: Указатель на массив байт для вывода.
| - Len: Длина массива.
|
| Выводит значения в формате "0x%02x", 
| разделяя их запятыми и переносами строк
| после каждых 8 значений для удобства чтения.
|
|=========================================================================
*/
int32_t Mazmum_Sasl_SaslPrep(const char *In, MAZMUM_SASL_SASLPREP_FLAGS Flags, char **Out)
{
    #if LIBIDN
        int32_t rc;

        rc = stringprep_profile(In, Out, "SASLprep", (Flags & MAZMUM_SASL_ALLOW_UNASSIGNED) ? MAZMUM_STRINGPREP_NO_UNASSIGNED : 0);
        if (rc != MAZMUM_STRINGPRERP_OK)
        {
            *Out = NULL;
            return -1;
        }
    #if defined MAZMUM_HAVE_PR_H
        if (pr29_8z(*Out) != PR29_SUCCESS)
        {
            free(*Out);
            *Out = NULL;
            return -1;
        }
    #endif
    #else
        size_t I, InLen = strlen(In);

        for (I = 0; I < InLen; I++)
        {
            if (In[I] & 0x80)
            {
                *Out = NULL;
                MAZMUM_REPORT(stderr, "[ ERROR ]: Can't convert UTF-8, you should install libidinal\n");
                return -1;
            }
        }
        *Out = malloc(InLen + 1);

        if (!*Out)
        {
            MAZMUM_REPORT(stderr, "[ ERROR ]: Can't allocate memory\n");
            return -1;
        }
        strcpy(*Out, In);
    #endif
    
    return 0;
}

/*
|=========================================================================
|    Mazmum_Sasl_Plain()
|=========================================================================
|
| Функция для формирования строки аутентификации в формате SASL PLAIN.
|
| Параметры:
| - Result: Указатель на буфер, в который будет записан результат.
| - Login: Указатель на строку с именем пользователя.
| - Password: Указатель на строку с паролем пользователя.
|
| Возвращает:
| - Указатель на буфер с сформированной строкой или NULL в случае ошибки.
|
|=========================================================================
*/
char *Mazmum_Sasl_Plain(char *Result, char *Login, char *Password)
{
    char *PrePLogin, *PrePPasswd;
    int32_t rc = Mazmum_Sasl_SaslPrep(Login, MAZMUM_SASL_ALLOW_UNASSIGNED, &PrePLogin);

    if (rc)
    {
        Result = NULL;
        return Result;
    }
    rc = Mazmum_Sasl_SaslPrep(Password, 0, &PrePPasswd);

    if (rc)
    {
        free(PrePLogin);
        Result = NULL;
        return Result;
    }

    if (2 * strlen(PrePLogin) + 3 + strlen(PrePPasswd) < 180)
    {
        strcpy(Result, PrePLogin);
        strcpy(Result + strlen(PrePLogin) + 1, PrePLogin);
        strcpy(Result + 2 * strlen(PrePLogin) + 2, PrePPasswd);
        MAZMUM_TOBASE64((unsigned char *)Result, strlen(PrePLogin) * 2 + strlen(PrePPasswd) + 2, 250);
    }
    free(PrePLogin);
    free(PrePPasswd);
    return Result;
}

#ifdef LIBOPENSSL_
#endif

/*
|=========================================================================
|    Mazmum_Sasl_Cram_Md5()
|=========================================================================
|
|
|
|=========================================================================
*/
char *Mazmum_Sasl_Cram_Md5(char *Result, char *Password, char *Challenge)
{
    char Ipad[64], Opad[64];
    unsigned char Mazmum_Md5_Raw[MD5_DIGEST_LENGTH];
    Mazmum_Md5_Ctx md5c;
    int32_t I, RC;
    char *PrePPasswd;

    if (Challenge == NULL)
    {
        Result = NULL;
        return Result;
    }
    RC = Mazmum_Sasl_SaslPrep(Password, 0, &PrePPasswd);


}




/*
|=========================================================================
|    Mazmum_Sasl_Cram_Sha1()
|=========================================================================
|
|
|
|=========================================================================
*/
char *Mazmum_Sasl_Cram_Sha1(char *Result, char *Password, char *Challenge)
{
    char Ipad[64], Opad[64];
    unsigned char Mazmum_Md5_Raw[SHA_DIGEST_LENGTH];
    Mazmum_Md5_Ctx md5c;
    int32_t I, RC;
    char *PrePPasswd;
}

/*
|=========================================================================
|    Mazmum_Sasl_Cram_Sha256()
|=========================================================================
|
|
|
|=========================================================================
*/
char *Mazmum_Sasl_Cram_Sha256(char *Result, char *Password, char *Challenge)
{
    char Ipad[64], Opad[64];
    unsigned char Mazmum_Md5_Raw[SHA256_DIGEST_LENGTH];
    Mazmum_Md5_Ctx md5c;
    int32_t I, RC;
    char *PrePPasswd;
}

/*
|=========================================================================
|    Mazmum_Sasl_Digest_Md5()
|=========================================================================
|
|
|
|=========================================================================
*/
char *Mazmum_Sasl_Digest_Md5(char *Result, char *Login, char *Password, char *Buffer, char *Miscptr, char *Type, char *WebTarget, int32_t WebPort, char *Header)
{
    char *PBuffer = NULL;
    int32_t Array_Size = 10;
    unsigned char Response[MD5_DIGEST_LENGTH];
    char *Array[Array_Size];
    char Buffer1[500], Buffer2[500], Nonce[200], Realm[200], Algo[20];
    int32_t I = 0, Ind = 0, LastPos = 0, CurrentPost = 0, IntQ = 0, AuthFInd = 0;
    MD5_CTX md5c;
    char *PrePLogin, *PrePPasswd;
    int32_t rc = Mazmum_Sasl_Prep(Login, MAZMUM_ALLOW_UNSIGNED, &PrePLogin);
}

/*
|=========================================================================
|    Mazmum_Sasl_Scram_Sha1()
|=========================================================================
|
|
|
|=========================================================================
*/
char *Mazmum_Sasl_Scram_Sha1(char *Result, char *Password, char *ClientFirstMessageBare, char *ServerFirstMessage)
{
    int32_t SaltLen = 0;
    int32_t Iter = 4096;
    char *Salt, *Nonce, *IC, *PrePPasswd;
    uint32_t ResultLen = 0;
    char ClientFinalMessageWaitHoutProof[200], Buffer[500];
    unsigned char SaltedPassword[SHA_DIGEST_LENGTH], ClientKey[SHA_DIGEST_LENGTH], StoreKet[SHA_DIGEST_LENGTH], ClientSignature[SHA_DIGEST_LENGTH];
    char AuthMessage[1024];
    char ClientProof[SHA_DIGEST_LENGTH];
    unsigned char ClientProof_B64[50];
    int32_t rc = Mazmum_Sasl_SaslPrep(pass, 0 ,&PrePPasswd);
}








