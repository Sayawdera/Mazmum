#ifndef MAZMUM_MAZMUMXMPP_CC
#define MAZMUM_MAZMUMXMPP_CC


#include <iostream>
#include <atomic>
#include <inttypes.h>

#include "../SASL.hxx"
#include "../AlGhadab/MazmumMod.hxx"


extern MAZMUM_OPTION __Mazmum_Option;
extern char *MAZMUM_EXIT;
extern char *Buf;

int32_t MazmumXMPPAuthMechanism = MAZMUM_AUTH_ERROR

char *MazmumJABBERClientINITstr = "<?xml version='1.0' ?><stream:stream to='";
char *MazmumJABBERClientINITEndstr = "' xmlns='jabber:client' xmlns:stream='http://etherx.jabber.org/streams' version='1.0'>";

void MazmumXAMPPService(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, char *HostName);
void MazmumXAMPPServiceUsage(const char *Service);

std::atomic_int32_t MazmumStartXAMPP(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp);
std::atomic_int32_t MazmumXAMPPServiceINIT(char *IP, int32_t PORT, unsigned char Options, char *MiscPTR, FILE *Fp, char *HostName);



#endif MAZMUM_MAZMUMXMPP_CC

