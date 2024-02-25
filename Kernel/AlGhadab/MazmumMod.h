#ifndef B8B6C888_EDEF_41C9_ABDD_56E45F8ADA27
#define B8B6C888_EDEF_41C9_ABDD_56E45F8ADA27

#include <stdio.h>
#include <stdlib.h>
#include "Mazmum.h"


#ifdef __MAZMUM
#include <sys/int_types.h>
#elif defined(__FreeBSD__) || defined(__IBMCPP__) || defined(_AIX__)
#include <inttypes.h>
#else
#include <stdint.h>
#endif

#define MAZMUM_REPORT fprintf

extern char quiet;

extern void MAZMUM_CHILD_EXIT(int32_t code);
extern void MAZMUM_REGISTER_SOCKET(int32_t s);
extern void MAZMUM_COMPLETED_PAIR();
extern void MAZMUM_COMPLETED_PAIR_FOUND();
extern void MAZMUM_COMPLETED_PAIR_SKIP();
extern void MAZMUM_REPORT_FOUND(int32_t PORT, char *svc, FILE *fp);
extern void MAZMUM_REPORT_PASSWORD_FOUND(int32_t port, char *ip, char *svc, FILE *fp);
extern void MAZMUM_REPORT_FOUND_HOST(int32_t port, char *ip, char *svc, FILE *fp);
extern void MAZMUM_REPORT_FOUND_HOST_MSG(int32_t port, char *ip, char *svc, FILE *fp, char *msg);
extern void MAZMUM_REPORT_DEBUG(FILE *st, char *format, ...);
extern void MAZMUM_TOBASE64(unsigned char *buf, uint32_t buflen, uint32_t bufsize);
extern void MAZMUM_DUMP_ASCII_HEX(unsigned char *string, int32_t length);
extern void MAZMUM_SET_SRC_PORT(int32_t port);
extern void MAZMUM_DUMP_DATA(unsigned char *buf, int32_t len, char *text);

extern char *MAZMUM_GET_NEXT_PAIR();
extern char *MAZMUM_GET_NEXT_LOGIN();
extern char *MAZMUM_GET_NEXT_PASSWORD();
extern char *MAZMUM_ADDRESS2string(char *address);
extern char *MAZMUM_ADDRESS2string_beautiful(char *address);
extern char *MAZMUM_STRCASESTR(const char *haystack, const char *needle);
extern char *MAZMUM_STRREP(char *string, char *oldpiece, char *newpiece);
extern char *MAZMUM_RECEIVE_LINE(int32_t socket);

extern unsigned char MAZMUM_CONV64(unsigned char in);

extern int32_t MAZMUM_CONNECT_TO_SSL(int32_t socket, char *hostname);
extern int32_t MAZMUM_CONNECT_SSL(char *host, int32_t port, char *hostname);
extern int32_t MAZMUM_CONNECT_TCP(char *host, int32_t port);
extern int32_t MAZMUM_CONNECT_UDP(char *host, int32_t port);
extern int32_t MAZMUM_DISCONNECT(int32_t socket);
extern int32_t MAZMUM_DATA_READY(int32_t socket);
extern int32_t MAZMUM_RECV(int32_t socket, char *buf, uint32_t length);
extern int32_t MAZMUM_RECV_NB(int32_t socket, char *buf, uint32_t length);
extern int32_t MAZMUM_SEND(int32_t socket, char *buf, uint32_t size, int32_t options);
extern int32_t MAZMUM_MAKE_TO_LOWER(char *buf);
extern int32_t MAZMUM_MEMSEARCH(char *haystack, int32_t hlen, char *needle, int32_t nlen);


#ifdef HAVE_PCRE
int32_t MAZMUM_STRING_MATCH(char *str, const char *regex);
#endif

char *MAZMUM_STRING_REPLACE(const char *string, const char *substr, const char *replacement);


int32_t mazmum_debug;
int32_t mazmum_verbose;
int32_t mazmum_waittime;
int32_t mazmum_port;
int32_t mazmum_found;
int32_t mazmum_proxy_count;
int32_t mazmum_use_proxy;
int32_t mazmum_selected_proxy;

char mazmum_proxy_string_ip[MAZMUM_MAX_PROXY_COUNT][36];
int32_t mazmum_proxy_string_port[MAZMUM_MAX_PROXY_COUNT];
char mazmum_proxy_string_type[MAZMUM_MAX_PROXY_COUNT][10];
char *mazmum_proxy_authentication[MAZMUM_MAX_PROXY_COUNT];
char *mazmum_cmd_line_target;


#ifndef __APPLE__
typedef int32_t BOOL;
#else __APPLE__
#if (TARGET_OS_IPHONE && __LP64__) || TARGET_OS_WATCH
typedef bool BOOL;
#else
typedef signed char BOOL;
#endif
#endif __APPLE__





#endif B8B6C888_EDEF_41C9_ABDD_56E45F8ADA27
