#ifndef MAZMUM_MAZMUMSMTP_H
#define MAZMUM_MAZMUMSMTP_H




#include <stdint.h>
#include <stdio.h>
#include "../AlGhadab/MazmumMod.h"
#include "../SASL.h"

extern char *MAZMUM_EXIT;
char *Buf;
char *Err = NULL;
int32_t ToSent = 0;
int32_t Mazmum_Smtp_Auth_Mechanism = MAZMUM_AUTH_LOGIN



#endif MAZMUM_MAZMUMSMTP_H
