#ifndef MAZMUM_BFG_HXX
#define MAZMUM_BFG_HXX


#include <stdint.h>

#define MAZMUM_BFG_BUFLEN 1024
#define MAZMUM_BFG_CHARSMAX                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            \


#define MAZMUM_BFG_LOWER 1
#define MAZMUM_BFG_UPPER 2
#define MAZMUM_BFG_NUMS 4

typedef struct
{
    unsigned char mazmum_from;
    unsigned char mazmum_to;
    unsigned char mazmum_current;
    unsigned char mazmum_state[MAZMUM_BFG_CHARSMAX];
    unsigned char mazmum_pos;
    unsigned char mazmum_crs_len;
    char *arg;
    char *crs;
    char *ptr;
    uint32_t mazmum_disable_symbols;

} MAZMUM_BFG_OPTION;

extern MAZMUM_BFG_OPTION mazmum_bfg_options;

#ifdef HAVE_MATH_H
extern uint64_t mazmum_bfg_get_pcount();
extern int32_t mazmum_bfg_init(char *arg);
extern char *mazmum_bfg_next();
#endif



#endif MAZMUM_BFG_HXX
