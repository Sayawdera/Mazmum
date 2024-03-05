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

#ifdef LIBSSH
#include <libssh/libssh.h>
#endif

#define MAZMUM_OPTION_SSL 1
#define MAZMUM_NO_RSA_LEGACY

// MAZMUM PORTS STATEMENT

#define MAZMUM_PORT_NOPORT -1
#define MAZMUM_PORT_FTP 21
#define MAZMUM_PORT_TELNET 23
#define MAZMUM_PORT_HTTP 80
#define MAZMUM_PORT_HTTP_PROXY 3128
#define MAZMUM_PORT_POP3 110
#define MAZMUM_PORT_NNTP 119
#define MAZMUM_PORT_SMB 139
#define MAZMUM_PORT_SMBNT 445
#define MAZMUM_PORT_IMAP 143
#define MAZMUM_PORT_LDAP 389
#define MAZMUM_PORT_REXEC 512
#define MAZMUM_PORT_RLOGIN 513
#define MAZMUM_PORT_RSH 514
#define MAZMUM_PORT_SOCKS5 1080
#define MAZMUM_PORT_ICQ 4000
#define MAZMUM_PORT_VNC 5900
#define MAZMUM_PORT_PCNFS 0
#define MAZMUM_PORT_MYSQL 3306
#define MAZMUM_PORT_MSSQL 1433
#define MAZMUM_PORT_COBALTSTRIKE 50050
#define MAZMUM_PORT_POSTGRES 5432
#define MAZMUM_PORT_ORACLE 1521
#define MAZMUM_PORT_PCANYWHERE 5631
#define MAZMUM_PORT_ADAM6500 502
#define MAZMUM_PORT_SAPR3 -1
#define MAZMUM_PORT_SSH 22
#define MAZMUM_PORT_SNMP 161
#define MAZMUM_PORT_CVS 2401
#define MAZMUM_PORT_FIREBIRD 3050
#define MAZMUM_PORT_AFP 548
#define MAZMUM_PORT_NCP 524
#define MAZMUM_PORT_SVN 3690
#define MAZMUM_PORT_SMTP 25
#define MAZMUM_PORT_TEAMSPEAK 8767
#define MAZMUM_PORT_SIP 5060
#define MAZMUM_PORT_VMAUTHD 902
#define MAZMUM_PORT_XMPP 5222
#define MAZMUM_PORT_IRC 6667
#define MAZMUM_PORT_RDP 3389
#define MAZMUM_PORT_ASTERISK 5038
#define MAZMUM_PORT_S7_300 102
#define MAZMUM_PORT_REDIS 6379
#define MAZMUM_PORT_RTSP 554
#define MAZMUM_PORT_RPCAP 2002
#define MAZMUM_PORT_RADMIN2 4899
#define MAZMUM_PORT_MCACHED 11211
#define MAZMUM_PORT_MONGODB 27017


// MAZMUM SSL PORTS STATEMENT


#define MAZMUM_PORT_FTP_SSL 990
#define MAZMUM_PORT_TELNET_SSL 992
#define MAZMUM_PORT_HTTP_SSL 443
#define MAZMUM_PORT_HTTP_PROXY_SSL 3128
#define MAZMUM_PORT_POP3_SSL 995
#define MAZMUM_PORT_NNTP_SSL 563
#define MAZMUM_PORT_SMB_SSL 139
#define MAZMUM_PORT_SMBNT_SSL 445
#define MAZMUM_PORT_IMAP_SSL 993
#define MAZMUM_PORT_LDAP_SSL 636
#define MAZMUM_PORT_REXEC_SSL 512
#define MAZMUM_PORT_RLOGIN_SSL 513
#define MAZMUM_PORT_RSH_SSL 514
#define MAZMUM_PORT_SOCKS5_SSL 1080
#define MAZMUM_PORT_ICQ_SSL -1
#define MAZMUM_PORT_VNC_SSL 5901
#define MAZMUM_PORT_PCNFS_SSL -1
#define MAZMUM_PORT_MYSQL_SSL 3306
#define MAZMUM_PORT_MSSQL_SSL 1433
#define MAZMUM_PORT_COBALTSTRIKE_SSL 50050
#define MAZMUM_PORT_POSTGRES_SSL 5432
#define MAZMUM_PORT_ORACLE_SSL 1521
#define MAZMUM_PORT_PCANYWHERE_SSL 5631
#define MAZMUM_PORT_ADAM6500_SSL 502
#define MAZMUM_PORT_SAPR3_SSL -1
#define MAZMUM_PORT_SSH_SSL 22
#define MAZMUM_PORT_SNMP_SSL 1993
#define MAZMUM_PORT_CVS_SSL 2401
#define MAZMUM_PORT_FIREBIRD_SSL 3050
#define MAZMUM_PORT_AFP_SSL 548
#define MAZMUM_PORT_NCP_SSL 524
#define MAZMUM_PORT_SVN_SSL 3690
#define MAZMUM_PORT_SMTP_SSL 465
#define MAZMUM_PORT_TEAMSPEAK_SSL 8767
#define MAZMUM_PORT_SIP_SSL 5061
#define MAZMUM_PORT_VMAUTHD_SSL 902
#define MAZMUM_PORT_XMPP_SSL 5223
#define MAZMUM_PORT_IRC_SSL 6697
#define MAZMUM_PORT_RDP_SSL 3389
#define MAZMUM_PORT_ASTERISK_SSL 5038
#define MAZMUM_PORT_S7_300_SSL 102
#define MAZMUM_PORT_REDIS_SSL 6379
#define MAZMUM_PORT_RTSP_SSL 554
#define MAZMUM_PORT_RPCAP_SSL 2002
#define MAZMUM_PORT_MCACHED_SSL 11211

#define FALSE 0
#define TRUE 1
#define MAZMUM_INET_ADDRSTRLEN 16
#define MAZMUM_MAX_PROXY_COUNT 64

#ifndef _WIN32
std::atomic_int32_t MazmumSleep(time_t Seconds);
std::atomic_int32_t MazmumUSleepN(uint64_t MiliSeconds);
#else
std::atomic_int32_t MazmumSleepN(uint32_t Seconds);
std::atomic_int32_t MazmumUSleepN(uint32_t MiliSeconds);
#endif


typedef enum
{
    MAZMUM_MODE_PASSWORD_LIST = 1,
    MAZMUM_MODE_LOGIN_LIST = 2,
    MAZMUM_MODE_PASSWORD_BRUTE = 4,
    MAZMUM_MODE_PASSWORD_REVERSE = 8,
    MAZMUM_MODE_PASSWORD_NULL = 16,
    MAZMUM_MODE_PASSWORD_SAME = 32,
    MAZMUM_MODE_COLON_FILE = 64,
} MAZMUM_MODE_T;

typedef enum
{
    MAZMUM_FORMAT_PLAIN_TEXT,
    MAZMUM_FORMAT_JSONV1,
    MAZMUM_FORMAT_JSONV2,
    MAZMUM_FORMAT_XMLV1,
} MAZMUM_OUTPUT_T;

typedef struct
{
    MAZMUM_MODE_T MazmumMode;
    int32_t LoopMode;
    int32_t Ssl;
    int32_t Restore;
    int32_t Debug;
    int32_t Verbose;
    int32_t ShowAllItem;
    int32_t Tasks;
    int32_t TryNullPassword;
    int32_t TryPasswordSameAsLogin;
    int32_t TryPasswordReverseLogin;
    int32_t ExitFound;
    int32_t MaxUse;
    int32_t Cidr;
    int32_t TimeNextAttempt;
    int32_t WaitTime;
    int32_t ConWait;
    uint32_t Port;
    int32_t SkipReddo;

    MAZMUM_OUTPUT_T OutFIleFormat;

    char *Login;
    char *LoginFile;
    char *Password;
    char *PasswordFile;
    char *OutputFilePTR;
    char *InFilePTR;
    char *ColonFile;
    char *MiscPTR;
    char *Server;
    char *Service;
    char BFG;
} MAZMUM_OPTION_T;

#endif MAZMUM_MAZMUM_ICC
