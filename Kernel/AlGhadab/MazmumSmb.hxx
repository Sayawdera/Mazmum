#ifndef MAZMUM_MAZMUMSMB_HXX
#define MAZMUM_MAZMUMSMB_HXX



#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <openssl/des.h>
#include <openssl/md4.h>

#include "MazmumMod.h"
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
int32_t hashFlag, accntFlag, protoFlag;

int32_t smb_auth_mechanism = MAZMUM_AUTH_NTLM;
int32_t security_mode = MAZMUM_ENCRYPTED;


static void MAZMUM_MAKE_KEY(unsigned char *Key, unsigned char *Des_Key);
void MAZMUM_DES_ENCRYPT(unsigned char *Clear, unsigned char *Key, unsigned char *Cipher);
void MAZMUM_SMB_SERVICE(char *IP, int32_t PORT, unsigned char Options, int32_t Socket, char *MiscPTR, FILE *Fp, char *HostName);
void MAZMUM_SMB_SERVICE_USAGE(const char *Service);

int32_t MAZMUM_HASH_LM(unsigned char **LmHash, unsigned char *Password, unsigned char *Challenge);
int32_t MAZMUM_MAKE_NTLM(unsigned char *Ntlm_Hash, unsigned char *Password);
int32_t MAZMUM_MAKE_LMV(unsigned char **LMV_Hash, unsigned char *SZ_Login, unsigned char *SZ_Password);
int32_t MAZMUM_MAKE_NTLMV(unsigned char **LMV_Hash, int32_t *IBtyeCount, unsigned char *SZ_Login, unsigned char *SZ_Password);
int32_t MAZMUM_HASH_NTLM(unsigned char **NTLM_Hash, unsigned char *Password, unsigned char *Challenge, char *MiscPTR);
int32_t MAZMUM_NBS_SESSION_REQUEST(int32_t Socket);
int32_t MAZMUM_SMB_NEG_PORT(int32_t Socket);
int32_t MAZMUM_START_SM_(char *IP, int32_t PORT, unsigned char Options, int32_t Socket, char *MiscPTR, FILE *Fp);
int32_t MAZMUM_SMB_SERVICE_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Socket, char *MiscPTR, FILE *Fp, char *HostName);

unsigned long MAZMUM_SMB_SESSION_SETUP(int32_t S, unsigned char *SZ_Login, unsigned char *SZ_Password, char *MiscPTR);

static size_t MAZMUM_UTF8_UTF16_LE(unsigned char *In, int32_t InSIze, unsigned char *Out, int32_t OutSize);
static unsigned char MAZMUM_GET_78_BITS(unsigned char *Input, int32_t Start_Byte);



#endif MAZMUM_MAZMUMSMB_HXX
