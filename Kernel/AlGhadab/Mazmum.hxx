#ifndef MAZMUM_MAZMUM_ICC
#define MAZMUM_MAZMUM_ICC

#include <iostream>
#include <atomic>

#include <stdio.h>
#ifdef __MAZMUM
#include <sys/int_types.h>
#elif defined(__FreeBSD__) || defined(__IBMCPP__) || defined(_AIX__) || defined(__APPLE__)
#include <inttypes.h>
#else
#include <stdint.h>
#endif


#if defined(_INTTYPES_H) || defined(__CLANG_INTTYPES_H)
#define hPRIu64 PRIu64
#else
#define hPRIu64 "lu"
#endif

#include <arpa/inet.h>
#include <ctype.h>
#include <errno.h>
#include <fcntl.h>
#include <netdb.h>
#include <netinet/in.h>
#include <signal.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <sys/resource.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>
#include <unistd.h>


#endif MAZMUM_MAZMUM_ICC
