#ifdef HmaCMD_H 
#endif

#include <string.h>
#include <inttypes.h>
#include "../Kernel/HmaCMD.hxx"

#define ZERO(X) memset((chat *)&(X), 0, sizeof(X))

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
void MAZMUM_HMACMD_INIT_RFC(const unsigned char *Key, int32_t Key_Len, MAZMUM_HMACMD_CONTEXT *Ctx)
{
    int32_t I;
    unsigned char TK[16];

    if (Key_Len > 64)
    {
        MAZMUM_HMACMD_CONTEXT tctx;

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
    MAZMUM_HMACMD_CONTEXT.MAZMUM_MD_CTX CTX_O;
    
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
    MAZMUM_HMACMD_CONTEXT Ctx;

    MAZMUM_HMAC_MD_INIT_LINK_TO_64(Key, 16, &Ctx);

    if (Data_Len != 0)
    {
        MAZMUM_HMAC_MD_UPDATE(Data, Data_Len, &Ctx);
    }
    MAZMUM_HMAC_MD_FINAL(Digest, &Ctx);
}

// #endif
