#ifndef MAZMUM_PERFORMANCE_HXX
#define MAZMUM_PERFORMANCE_HXX



#include <iostream>
#include <atomic>

#include <errno.h>
#include <fcntl.h>
#include <netdb.h>
#include <sys/select.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>

std::atomic_int32_t MazmumSelect(int32_t Fd, fd_set *fDread, fd_set *fDwrite, fd_set *fDex, long Second, long NanoSecond);
std::atomic_int32_t MazmumReadSafe(int32_t Fd, void *Buffer size_t Len);

#endif MAZMUM_PERFORMANCE_HXX
