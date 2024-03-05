#ifndef MAZMUM_BFG_HXX
#define MAZMUM_BFG_HXX

#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "../Kernel/AlGhadab/MazmumMod.hxx"

#define MAZMUM_BFG_BUFLEN 1024
#define MAZMUM_BFG_CHARSMAX 256                                                                                                                                                                                                                                                                                                                                                                                    \


#define MAZMUM_BFG_LOWER 1
#define MAZMUM_BFG_UPPER 2
#define MAZMUM_BFG_NUMS 4

typedef struct
{
    unsigned char MazmumFrom;
    unsigned char MazmumTo;
    unsigned char MazmumCurrent;
    unsigned char MazmumState[MAZMUM_BFG_CHARSMAX];
    unsigned char MazmumPos;
    unsigned char MazmumCrsLen;
    char *arg;
    char *crs;
    char *ptr;
    uint32_t MazmumDisableSymbols;

} MAZMUM_BFG_OPTION;

extern MAZMUM_BFG_OPTION mazmum_bfg_options;

#ifdef HAVE_MATH_H
extern uint64_t mazmum_bfg_get_pcount();
extern int32_t mazmum_bfg_init(char *arg);
extern char *mazmum_bfg_next();
#endif



#endif MAZMUM_BFG_HXX
