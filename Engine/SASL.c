#include "Engine/Headers/SASL.h"
#include <stdint.h>
#include <stdio.h> 

extern int32_t mazmum_selected_proxy;
extern enum MAZMUM_SASL_SASLPREP_FLAGS __MAZMUM_SASL_SASLPREP_FLAGS;

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
    int32_t I;
    int32_t J;

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
int32_t Mazmum_Sasl_SaslPrep(const char *In, __MAZMUM_SASL_SASLPREP_FLAGS Flags, char **Out)
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
        size_t I = strlen(In);;
        size_t InLen = strlen(In);

        for (I = 0; I < InLen; I++)
        {
            if (In[I] & 0x80)
            {
                *Out = NULL;
                MAZMUM_REPORT(stderr, "[ ERROR ]: Can't convert UTF-8, you should install libidn\n");
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