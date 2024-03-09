#ifndef MAZMUM_MAZMUMSMB_HXX
#define MAZMUM_MAZMUMSMB_HXX


#include <iostream>
#include <atomic>

#include <stdio.h>
#include <stdio.h>
#include <inttypes.h>
#include <openssl/des.h>
#include <openssl/md4.h>

#include "MazmumMod.hxx"
#include "../SASL.hxx"
#include "../HmaCMD.hxx"


extern char *MAZMUM_EXIT;
char *Buf;




#define MAZM_WIN2000_NATIVEMODE 1
#define MAZM_WIN_NETBIOSMODE 2
#define MAZM_PLAINTEXT 10
#define MAZM_ENCRYPTED 11
#ifndef MAZM_CHAR_BIT
#define MAZM_CHAR_BIT 8
#endif
#ifndef MAZM_TIME_T_MIN
#define MAZM_TIME_T_MIN ((time_t)0 < (time_t)-1 ? (time_t)0 : ~(time_t)0 << (sizeof(time_t) * MAZM_CHAR_BIT - 1))
#endif
#ifndef MAZM_TIME_T_MAX
#define MAZM_TIME_T_MAX (~(time_t)0 - TIME_T_MIN)
#endif
#define MAZM_IVAL_NC(buf, pos) (*(uint32_t *)((char *)(buf) + (pos)))
#define MAZM_SIVAL(buf, pos, val) MAZM_IVAL_NC(buf, pos) = ((uint32_t)(val))
#define MAZM_TIME_FIXUP_CONSTANT_INT 11644473600LL

static unsigned char challenge[8];
static unsigned char workgroup[16];
static unsigned char domain[16];
static unsigned char machine_name[16];
std::atomic_int32_t hashFlag, accntFlag, protoFlag;

std::atomic_int32_t smb_auth_mechanism = MAZMUM_AUTH_NTLM;
std::atomic_int32_t security_mode = MAZM_ENCRYPTED;


static void MazmumMakeKey(unsigned char *Key, unsigned char *Des_Key);
void MazmumDesEncrypt(unsigned char *Clear, unsigned char *Key, unsigned char *Cipher);
void MazmumSmbService(char *IP, int32_t PORT, unsigned char Options, int32_t Socket, char *MiscPTR, FILE *Fp, char *HostName);
void MazmumSmbServiceUsage(const char *Service);

std::atomic_int32_t MazmumHashLm(unsigned char **LmHash, unsigned char *Password, unsigned char *Challenge);
std::atomic_int32_t MazmumMakeNtlm(unsigned char *Ntlm_Hash, unsigned char *Password);
std::atomic_int32_t MazmumMakeLmv(unsigned char **LMV_Hash, unsigned char *SZ_Login, unsigned char *SZ_Password);
std::atomic_int32_t MazmumMakeNtlmv(unsigned char **LMV_Hash, int32_t *IBtyeCount, unsigned char *SZ_Login, unsigned char *SZ_Password);
std::atomic_int32_t MazmumHashNtlm(unsigned char **NTLM_Hash, unsigned char *Password, unsigned char *Challenge, char *MiscPTR);
std::atomic_int32_t MazmumNbsSessionRequest(int32_t Socket);
std::atomic_int32_t MazmumSmbNegPort(int32_t Socket);
std::atomic_int32_t MazmumSmbNegPort(int32_t Socket);
std::atomic_int32_t MazmumStartSmb(char *IP, int32_t PORT, unsigned char Options, int32_t Socket, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MazmumSmbServiceINIT(char *IP, int32_t PORT, unsigned char Options, int32_t Socket, char *MiscPTR, FILE *Fp, char *HostName);

unsigned long MazmumSmbSessionSetup(int32_t S, unsigned char *SZ_Login, unsigned char *SZ_Password, char *MiscPTR);

static size_t MazmumUtf6Utf16Le(unsigned char *In, int32_t InSIze, unsigned char *Out, int32_t OutSize);
static unsigned char MazmumGet78Bts(unsigned char *Input, int32_t Start_Byte);



#endif MAZMUM_MAZMUMSMB_HXX
