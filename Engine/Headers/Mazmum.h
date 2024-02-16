#ifndef B22C89CD_EFE8_4481_84D0_66F9DA9CA08E
#define B22C89CD_EFE8_4481_84D0_66F9DA9CA08E

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


#define FALSE 0
#define TRUE 1


#include <stdio.h>
#ifdef __sun
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


#ifdef HAVE_OPENSSL
#define MAZMUM_SSL
#endif
#ifdef HAVE_SSL
#ifndef MAZMUM_SSL
#define MAZMUM_SSL
#endif
#endif

#ifdef LIBSSH
#include <libssh/libssh.h>
#endif

#ifdef HAVE_ZLIB
#include <zlib.h>
#endif

#define MAZMUM_OPTION_SSL 1

#ifdef LIBOPENSSL
#ifndef MAZMUM_NO_RSA_LEGACY
#if OPENSSL_VERSION_NUMBER >= 0x10100000L
#define MAZMUM_NO_RSA_LEGACY
#endif
#endif
#endif


// ALL_MAZMUM_NO_SSL_PORTS_STATE

#define MAZMUM_NOPORT -1
#define MAZMUM_FTP 21
#define MAZMUM_TELNET 23
#define MAZMUM_HTTP 80
#define MAZMUM_HTTP_PROXY 3128
#define MAZMUM_POP 110
#define MAZMUM_NNTP 119
#define MAZMUM_SMB 139
#define MAZMUM_SMBNT 445
#define MAZMUM_IMAP 143
#define MAZMUM_LDAP 389
#define MAZMUM_REXEC 512
#define MAZMUM_RLOGIN 513
#define MAZMUM_RSH 514
#define MAZMUM_SOCKS5 1080
#define MAZMUM_ICQ 4000
#define MAZMUM_VNC 5900
#define MAZMUM_PCNFS 0
#define MAZMUM_MYSQL 3306
#define MAZMUM_MSSQL 1433
#define MAZMUM_COBALTSTRIKE 50050
#define MAZMUM_POSTGRES 5432
#define MAZMUM_ORACLE 1521
#define MAZMUM_PCANYWHERE 5631
#define MAZMUM_ADAM 502
#define MAZMUM_SAPR3 -1
#define MAZMUM_SSH 22
#define MAZMUM_SNMP 161
#define MAZMUM_CVS 2401
#define MAZMUM_FIREBIRD 3050
#define MAZMUM_AFP 548
#define MAZMUM_NCP 524
#define MAZMUM_SVN 3690
#define MAZMUM_SMTP 25
#define MAZMUM_TEAMSPEAK 8767
#define MAZMUM_SIP 5060
#define MAZMUM_VMAUTHD 902
#define MAZMUM_XMPP 5222
#define MAZMUM_IRC 6667
#define MAZMUM_RDP 3389
#define MAZMUM_ASTERISK 5038
#define MAZMUM_S7_300 102
#define MAZMUM_REDIS 6379
#define MAZMUM_RTSP 554
#define MAZMUM_RPCAP 2002
#define MAZMUM_RADMIN2 4899
#define MAZMUM_MCACHED 11211
#define MAZMUM_MONGODB 27017




// ALL_MAZMUM_SSL_PORTS_STATE


#define MAZMUM_FTP_SSL 990
#define MAZMUM_TELNET_SSL 992
#define MAZMUM_HTTP_SSL 443
#define MAZMUM_HTTP_PROXY_SSL 3128
#define MAZMUM_POP3_SSL 995
#define MAZMUM_NNTP_SSL 563
#define MAZMUM_SMB_SSL 139
#define MAZMUM_SMBNT_SSL 445
#define MAZMUM_IMAP_SSL 993
#define MAZMUM_LDAP_SSL 636
#define MAZMUM_REXEC_SSL 512
#define MAZMUM_RLOGIN_SSL 513
#define MAZMUM_RSH_SSL 514
#define MAZMUM_SOCKS5_SSL 1080
#define MAZMUM_ICQ_SSL -1
#define MAZMUM_VNC_SSL 5901
#define MAZMUM_PCNFS_SSL -1
#define MAZMUM_MYSQL_SSL 3306
#define MAZMUM_MSSQL_SSL 1433
#define MAZMUM_COBALTSTRIKE_SSL 50050
#define MAZMUM_POSTGRES_SSL 5432
#define MAZMUM_ORACLE_SSL 1521
#define MAZMUM_PCANYWHERE_SSL 5631
#define MAZMUM_ADAM6500_SSL 502
#define MAZMUM_SAPR3_SSL -1
#define MAZMUM_SSH_SSL 22
#define MAZMUM_SNMP_SSL 1993
#define MAZMUM_CVS_SSL 2401
#define MAZMUM_FIREBIRD_SSL 3050
#define MAZMUM_AFP_SSL 548
#define MAZMUM_NCP_SSL 524
#define MAZMUM_SVN_SSL 3690
#define MAZMUM_SMTP_SSL 465
#define MAZMUM_TEAMSPEAK_SSL 8767
#define MAZMUM_SIP_SSL 5061
#define MAZMUM_VMAUTHD_SSL 902
#define MAZMUM_XMPP_SSL 5223
#define MAZMUM_IRC_SSL 6697
#define MAZMUM_RDP_SSL 3389
#define MAZMUM_ASTERISK_SSL 5038
#define MAZMUM_S7_300_SSL 102
#define MAZMUM_REDIS_SSL 6379
#define MAZMUM_RTSP_SSL 554
#define MAZMUM_RPCAP_SSL 2002
#define MAZMUM_MCACHED_SSL 11211

#define MAZMUM_MAX_PROXY_COUNT 64

#ifndef MAZMUM_INET_ADDRESS_STRLEN
#define MAZMUM_INET_ADDRESS_STRLEN 16
#endif


#ifndef _WIN32
int32_t sleepn(time_t seconds);
int32_t usleepn(uint64_t useconds);
#else
int32_t sleepn(uint32_t seconds);
int32_t usleepn(uint32_t useconds);
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
    MAZMUM_FORMAT_XMLV1
} MAZMUM_OUTPUT_FORMAT_T;


typedef struct {
  MAZMUM_MODE_T mode;

  int32_t mazmum_loop_mode;
  int32_t mazmum_ssl;
  int32_t mazmum_restore;
  int32_t mazmum_debug;
  int32_t mazmum_verbose;
  int32_t mazmum_showAttempt;
  int32_t mazmum_tasks;
  int32_t mazmum_try_null_password;
  int32_t mazmum_try_password_same_as_login;
  int32_t mazmum_try_password_reverse_login;
  int32_t mazmum_exit_found;
  int32_t mazmum_max_use;
  int32_t mazmum_cidr;
  int32_t mazmum_time_next_attempt;

  MAZMUM_OUTPUT_FORMAT_T outfile_format;

  char *mazmum_login;
  char *mazmum_loginfile;
  char *mazmum_pass;
  char *mazmum_passfile;
  char *mazmum_outfile_ptr;
  char *mazmum_infile_ptr;
  char *mazmum_colonfile;

  int32_t mazmum_waittime;
  int32_t mazmum_conwait;
  uint32_t mazmum_port;

  char *mazmum_miscptr;
  char *mazmum_server;
  char *mazmum_service;
  char mazmum_bfg;
  int32_t mazmum_skip_redo;
} MAZMUM_OPTION;

#endif B22C89CD_EFE8_4481_84D0_66F9DA9CA08E
