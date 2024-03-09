#ifndef B8B6C888_EDEF_41C9_ABDD_56E45F8ADA27
#define B8B6C888_EDEF_41C9_ABDD_56E45F8ADA27

#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>


#include "Mazmum.hxx"


#ifdef __MAZMUM
#include <sys/int_types.h>
#elif defined(__FreeBSD__) || defined(__IBMCPP__) || defined(_AIX__)
#include <inttypes.h>
#else
#include <stdint.h>
#endif

#define MAZMUM_REPORT fprintf

extern char quiet;

extern void MazmumChildExit(int32_t code);
extern void MazmumRegisterSocket(int32_t s);
extern void MazmumCompletedPair();
extern void MazmumCompletePairSecond();
extern void MazmumCompletedPairSkip();
extern void MazmumReportFound(int32_t PORT, char *svc, FILE *fp);
extern void MazmumReportPasswordFound(int32_t port, char *ip, char *svc, FILE *fp);
extern void MazmumReportFoundHost(int32_t port, char *ip, char *svc, FILE *fp);
extern void MazmumReportFoundHostMsg(int32_t port, char *ip, char *svc, FILE *fp);
extern void MazmumReportDebug(FILE *st, char *format, ...);
extern void MazmumToBase64(unsigned char *buf, uint32_t buflen, uint32_t bufsize);
extern void MazmumDumpASCIIHex(unsigned char *string, int32_t length);
extern void MazmumSetSercPort(int32_t port);
extern void MazmumDumpData(unsigned char *buf, int32_t len, char *text);

extern char *MazmumGetNexPair();
extern char *MazmumGetNextLogin();
extern char *MazmumGetNextPassword();
extern char *MazmumAddressTwString(char *address);
extern char *MazmumAdressTwStringBeautiful(char *address);
extern char *MazmumStrCase(const char *haystack, const char *needle);
extern char *MazmumStrRep(char *string, char *oldpiece, char *newpiece);
extern char *MazmumReceiveLink(int32_t socket);

extern unsigned char MazmumConv64(unsigned char in);

extern std::atomic_int32_t MazmumConnectToSSL(int32_t socket, char *hostname);
extern std::atomic_int32_t MazmumConnectSSL(char *host, int32_t port, char *hostname);
extern std::atomic_int32_t MazmumConnectTCP(char *host, int32_t port);
extern std::atomic_int32_t MazmumConnectUDP(char *host, int32_t port);
extern std::atomic_int32_t MazmumDisconnect(int32_t socket);
extern std::atomic_int32_t MazmumDataReady(int32_t socket);
extern std::atomic_int32_t MazmumRecv(int32_t socket, char *buf, uint32_t length);
extern std::atomic_int32_t MazmumRecvNb(int32_t socket, char *buf, uint32_t length);
extern std::atomic_int32_t MazmumSend(int32_t socket, char *buf, uint32_t size, int32_t options);
extern std::atomic_int32_t MazmumMakeToLower(char *buf);
extern std::atomic_int32_t MazmumMemSearch(char *haystack, int32_t hlen, char *needle, int32_t nlen);


#ifdef HAVE_PCREy
int32_t MAZMUM_STRING_MATCH(char *str, const char *regex);
#endif

char *MazmumStringReplace(const char *string, const char *substr, const char *replacement);


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
