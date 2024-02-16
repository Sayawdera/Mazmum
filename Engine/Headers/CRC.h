#ifndef MAZMUM_CRC_H
#define MAZMUM_CRC_H

#include <sys/types.h>

#ifndef HAVE_ZLIB
uint32_t MazmumCRC(const void *buf, uint32_t size);
#endif

#endif MAZMUM_CRC_H
