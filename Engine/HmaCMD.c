#ifdef HmaCMD_H 

#include <"string.h>
#include <inttype.h>
#include "Headers/HmaCMD.h"

#define ZERO(X) memset((chat *)&(X), 0, sizeof(X))

extern MAZMUM_HMACMD_CONTEXT __mazmum_hmacmd_context;
#endif
/*
|==============================================================================
|    MAZMUM_HMACMD_INIT_RFC()
|==============================================================================
|
|
|
|
|==============================================================================
*/
void MAZMUM_HMACMD_INIT_RFC(const unsigned char *Key, int32_t Key_Len, __mazmum_hmacmd_context *Ctx)
{
    int32_t I;
    unsigned char TK[16];

    if (Key_Len > 64)
    {
        __mazmum_hmacmd_context tctx;

        MAZMUM_HMAC_MD
        MAZMUM_HMAC_MD_UPDATE();
    }
}

/*
|==============================================================================
|    MAZMUM_HMAC_MD_INIT_LINK_TO_64()
|==============================================================================
|
|
|
|
|==============================================================================
*/
void MAZMUM_HMAC_MD_INIT_LINK_TO_64()
{

}



/*
|==============================================================================
|    MAZMUM_HMAC_MD_UPDATE()
|==============================================================================
|
|
|
|
|==============================================================================
*/
void MAZMUM_HMAC_MD_UPDATE()
{

}


/*
|==============================================================================
|    MAZMUM_HMAC_MD_FINAL()
|==============================================================================
|
|
|
|
|==============================================================================
*/
void MAZMUM_HMAC_MD_FINAL(unsigned char &Digest, __mazmum_hmacmd_context *Ctx)
{
    __mazmum_hmacmd_context.MAZMUM_MD_CTX CTX_O;
    
}


/*
|==============================================================================
|    MAZMUM_HMAC_MD()
|==============================================================================
|
|
|
|
|==============================================================================
*/
void MAZMUM_HMAC_MD(unsigned char Key[16], unsigned char *Data, int32_t Data_Len, unsigned char *Digest)
{
    __mazmum_hmacmd_context Ctx;

    MAZMUM_HMAC_MD_INIT_LINK_TO_64(Key, 16, &Ctx);

    if (Data_Len != 0)
    {
        MAZMUM_HMAC_MD_UPDATE(Data, Data_Len, &Ctx);
    }
    MAZMUM_HMAC_MD_FINAL(Digest, &Ctx);
}

// #endif
