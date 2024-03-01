#ifndef MAZMUM_DES_HXX
#define MAZMUM_DES_HXX


#ifdef __MAZMUM
#include <sys/int_types.h>
#elif defined(__FreeBSD__) || defined(__IBMCPP__) || defined(_AIX__)
#include <inttypes.h>
#else
#include <stdint.h>
#endif

#define MAZM_EN0 0
#define MAZM_DE 1


extern void MazmumDeskey(unsigned char *, int32_t);
extern void MazmumUsekey(unsigned long *);
extern void MazmumCpkey(unsigned long *);
extern void MazmumDes(unsigned char *, unsigned char *);




#endif MAZMUM_DES_HXX
