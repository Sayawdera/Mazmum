#ifndef MAZMUM_CRC_HXX
#define MAZMUM_CRC_HXX

#include <sys/types.h>
#include <stdint.h>

#ifndef HAVE_ZLIB
uint32_t MazmumCRC(const void *buf, uint32_t size);
#endif

#endif MAZMUM_CRC_HXX
