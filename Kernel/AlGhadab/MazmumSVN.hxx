#ifndef MAZMUM_MAZMUMSVN_ICC
#define MAZMUM_MAZMUMSVN_ICC


#include <atomic>
#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <sys/param.h>
#include <svn_client.h>
#include <svn_cmdline.h>
#include <svn_config.h>
#include <svn_fs.h>
#include <svn_pools.h>
#include <svn_version.h>
#include <svn_path.h>

#include "MazmumMod.hxx"

#define MAZMUM_BRANCH "Trunk" // Or LYNX or MAZM

extern MAZMUM_OPTION __Mazmum_Option;
extern char *MAZMUM_EXIT;
extern char *Buf;

extern std::atomic_int32_t MazmumDataReadyTimed(int32_t Socket, long Second, long NanoSecond);

void MazmumDummySVN();
void MazmumServiceSVN(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, FILE *Fp, char *HostName);
void MazmumSVNUsage(const char *Service);

static svn_error_t *MazmumPrintDummy(void *Baton, const char *Path, const svn_dirent_t *Dirent, const svn_lock_t *Lock, const char *AbsPath, apr_pool_t *Pool);
static svn_error_t *MazmumPromptCallback(svn_auth_cred_simple_t **Cred, void *Baton, const char *Realm, const char *Username, svn_boolean_t MaySave, apr_pool_t *Pool);

std::atomic_int32_t MazmumStartSVN(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, FILE *Fp);
std::atomic_int32_t MazmumSVN_INIT(char *IP, int32_t PORT, unsigned char Options, int32_t Sp, FILE *Fp, char *HostName);

#endif MAZMUM_MAZMUMSVN_ICC
