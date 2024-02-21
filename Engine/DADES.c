#include "../Kernel/Des.h"


static void MazmumScrunch(unsigned char *, unsigned long *);
static void MazmumUnscrun(unsigned long *, unsigned char *);
static void MazmumDesfunc(unsigned long *, unsigned long *);
static void MazmumCookey(unsigned long *);

static unsigned long MZMKnL[32] = { 0L };
static unsigned short MazmumByteBit[8] = {
        01, 02, 04,
        010, 020, 040,
        0100, 0200
};
static unsigned long MazmumBigByte[24] = {
        0x800000L, 0x400000L,
        0x200000L, 0x100000L,
        0x80000L, 0x40000L,
        0x20000L, 0x10000L,
        0x8000L, 0x4000L,
        0x2000L, 0x1000L,
        0x800L, 0x400L,
        0x200L, 0x100L,
        0x80L, 0x40L,
        0x20L, 0x10L,
        0x8L, 0x4L,
        0x2L, 0x1L
};
static unsigned char MazmumPc1[56] = {
         56,  48, 40,
         32,  24, 16,
         8,   0,  57,
         49, 41, 33,
        25, 17, 9,
        1,  58, 50,
        42, 34, 26,
        18, 10, 2,
        59, 51, 43,
        35, 62, 54,
        46, 38, 30,
        22, 14, 6,
        61, 53, 45,
        37, 29, 21,
        13, 5,  60,
        52, 44, 36,
        28, 20, 12,
        4, 27,  19,
        11, 3
};
static unsigned char MazmumTotrot[16] = {
        1, 2, 4,
        6, 8, 10,
        12,14,15,
        17,19,21,
        23,25,27,
        28
};
static unsigned char MazmumPc2[48] = {
        13,  16, 10,
        23,  0,  4,
        2,   27, 14,
        5,  20, 9,
       22, 18, 11,
       3,  25, 7,
       15, 6,  26,
       19, 12, 1,
       40, 51, 30,
       36, 46, 54,
       29, 39, 50,
       44, 32, 47,
       43, 48, 38,
       55, 33, 52,
       45, 41, 49,
       35, 28, 31
};


static unsigned long SP1[64] = {
        0x01010400L, 0x00000000L, 0x00010000L,
        0x01010404L, 0x01010004L, 0x00010404L,
        0x00000004L, 0x00010000L, 0x00000400L,
        0x01010400L, 0x01010404L,  0x00000400L,
        0x01000404L, 0x01010004L, 0x01000000L,
        0x00000004L, 0x00000404L, 0x01000400L,
        0x01000400L, 0x00010400L, 0x00010400L,
        0x01010000L, 0x01010000L, 0x01000404L,
        0x00010004L, 0x01000004L, 0x01000004L,
        0x00010004L, 0x00000000L, 0x00000404L,
        0x00010404L, 0x01000000L, 0x00010000L,
        0x01010404L, 0x00000004L, 0x01010000L,
        0x01010400L, 0x01000000L, 0x01000000L,
        0x00000400L, 0x01010004L, 0x00010000L,
        0x00010400L, 0x01000004L, 0x00000400L,
        0x00000004L, 0x01000404L, 0x00010404L,
        0x01010404L, 0x00010004L, 0x01010000L,
        0x01000404L, 0x01000004L, 0x00000404L,
        0x00010404L, 0x01010400L, 0x00000404L,
        0x01000400L, 0x01000400L, 0x00000000L,
        0x00010004L, 0x00010400L, 0x00000000L,
        0x01010004L
};

static unsigned long SP2[64] = {
        0x80108020L, 0x80008000L, 0x00008000L,
        0x00108020L, 0x00100000L, 0x00000020L,
        0x80100020L, 0x80008020L, 0x80000020L,
        0x80108020L, 0x80108000L,  0x80000000L,
        0x80008000L, 0x00100000L, 0x00000020L,
        0x80100020L, 0x00108000L, 0x00100020L,
        0x80008020L, 0x00000000L, 0x80000000L,
        0x00008000L, 0x00108020L, 0x80100000L,
        0x00100020L, 0x80000020L, 0x00000000L,
        0x00108000L, 0x00008020L, 0x80108000L,
        0x80100000L, 0x00008020L, 0x00000000L,
        0x00108020L, 0x80100020L, 0x00100000L,
        0x80008020L, 0x80100000L, 0x80108000L,
        0x00008000L, 0x80100000L, 0x80008000L,
        0x00000020L, 0x80108020L, 0x00108020L,
        0x00000020L, 0x00008000L, 0x80000000L,
        0x00008020L, 0x80108000L, 0x00100000L,
        0x80000020L, 0x00100020L, 0x80008020L,
        0x80000020L, 0x00100020L, 0x00108000L,
        0x00000000L, 0x80008000L, 0x00008020L,
        0x80000000L, 0x80100020L, 0x80108020L,
        0x00108000L
};

static unsigned long SP3[64] = {
        0x00000208L, 0x08020200L, 0x00000000L,
        0x08020008L, 0x08000200L, 0x00000000L,
        0x00020208L, 0x08000200L, 0x00020008L,
        0x08000008L, 0x08000008L, 0x00020000L,
        0x08020208L, 0x00020008L, 0x08020000L,
        0x00000208L, 0x08000000L, 0x00000008L,
        0x08020200L, 0x00000200L, 0x00020200L,
        0x08020000L, 0x08020008L, 0x00020208L,
        0x08000208L, 0x00020200L, 0x00020000L,
        0x08000208L, 0x00000008L, 0x08020208L,
        0x00000200L, 0x08000000L, 0x08020200L,
        0x08000000L, 0x00020008L, 0x00000208L,
        0x00020000L, 0x08020200L, 0x08000200L,
        0x00000000L, 0x00000200L, 0x00020008L,
        0x08020208L, 0x08000200L, 0x08000008L,
        0x00000200L, 0x00000000L, 0x08020008L,
        0x08000208L, 0x00020000L, 0x08000000L,
        0x08020208L, 0x00000008L, 0x00020208L,
        0x00020200L, 0x08000008L, 0x08020000L,
        0x08000208L, 0x00000208L, 0x08020000L,
        0x00020208L, 0x00000008L, 0x08020008L,
        0x00020200L
};

static unsigned long SP4[64] = {
        0x00802001L, 0x00002081L, 0x00002081L,
        0x00000080L, 0x00802080L, 0x00800081L,
        0x00800001L, 0x00002001L, 0x00000000L,
        0x00802000L, 0x00802000L, 0x00802081L,
        0x00000081L, 0x00000000L, 0x00800080L,
        0x00800001L, 0x00000001L, 0x00002000L,
        0x00800000L, 0x00802001L, 0x00000080L,
        0x00800000L, 0x00002001L, 0x00002080L,
        0x00800081L, 0x00000001L, 0x00002080L,
        0x00800080L, 0x00002000L, 0x00802080L,
        0x00802081L, 0x00000081L, 0x00800080L,
        0x00800001L, 0x00802000L, 0x00802081L,
        0x00000081L, 0x00000000L, 0x00000000L,
        0x00802000L, 0x00002080L, 0x00800080L,
        0x00800081L, 0x00000001L, 0x00802001L,
        0x00002081L, 0x00002081L, 0x00000080L,
        0x00802081L, 0x00000081L, 0x00000001L,
        0x00002000L, 0x00800001L, 0x00002001L,
        0x00802080L, 0x00800081L, 0x00002001L,
        0x00002080L, 0x00800000L, 0x00802001L,
        0x00000080L, 0x00800000L, 0x00002000L,
        0x00802080L
};

static unsigned long SP5[64] = {
        0x00000100L, 0x02080100L, 0x02080000L,
        0x42000100L, 0x00080000L, 0x00000100L,
        0x40000000L, 0x02080000L, 0x40080100L,
        0x00080000L, 0x02000100L, 0x40080100L,
        0x42000100L, 0x42080000L, 0x00080100L,
        0x40000000L, 0x02000000L, 0x40080000L,
        0x40080000L, 0x00000000L, 0x40000100L,
        0x42080100L, 0x42080100L, 0x02000100L,
        0x42080000L, 0x40000100L, 0x00000000L,
        0x42000000L, 0x02080100L, 0x02000000L,
        0x42000000L, 0x00080100L, 0x00080000L,
        0x42000100L, 0x00000100L, 0x02000000L,
        0x40000000L, 0x02080000L, 0x42000100L,
        0x40080100L, 0x02000100L, 0x40000000L,
        0x42080000L, 0x02080100L, 0x40080100L,
        0x00000100L, 0x02000000L, 0x42080000L,
        0x42080100L, 0x00080100L, 0x42000000L,
        0x42080100L, 0x02080000L, 0x00000000L,
        0x40080000L, 0x42000000L, 0x00080100L,
        0x02000100L, 0x40000100L, 0x00080000L,
        0x00000000L, 0x40080000L, 0x02080100L,
        0x40000100L
};

static unsigned long SP6[64] = {
        0x20000010L, 0x20400000L, 0x00004000L,
        0x20404010L, 0x20400000L, 0x00000010L,
        0x20404010L, 0x00400000L, 0x20004000L,
        0x00404010L, 0x00400000L,  0x20000010L,
        0x00400010L, 0x20004000L, 0x20000000L,
        0x00004010L, 0x00000000L, 0x00400010L,
        0x20004010L, 0x00004000L, 0x00404000L,
        0x20004010L, 0x00000010L, 0x20400010L,
        0x20400010L, 0x00000000L, 0x00404010L,
        0x20404000L, 0x00004010L, 0x00404000L,
        0x20404000L, 0x20000000L, 0x20004000L,
        0x00000010L, 0x20400010L, 0x00404000L,
        0x20404010L, 0x00400000L, 0x00004010L,
        0x20000010L, 0x00400000L, 0x20004000L,
        0x20000000L, 0x00004010L, 0x20000010L,
        0x20404010L, 0x00404000L, 0x20400000L,
        0x00404010L, 0x20404000L, 0x00000000L,
        0x20400010L, 0x00000010L, 0x00004000L,
        0x20400000L, 0x00404010L, 0x00004000L,
        0x00400010L, 0x20004010L, 0x00000000L,
        0x20404000L, 0x20000000L, 0x00400010L,
        0x20004010L
};

static unsigned long SP7[64] = {
        0x00200000L, 0x04200002L, 0x04000802L,
        0x00000000L, 0x00000800L, 0x04000802L,
        0x00200802L, 0x04200800L, 0x04200802L,
        0x00200000L, 0x00000000L, 0x04000002L,
        0x00000002L, 0x04000000L, 0x04200002L,
        0x00000802L, 0x04000800L, 0x00200802L,
        0x00200002L, 0x04000800L, 0x04000002L,
        0x04200000L, 0x04200800L, 0x00200002L,
        0x04200000L, 0x00000800L, 0x00000802L,
        0x04200802L, 0x00200800L, 0x00000002L,
        0x04000000L, 0x00200800L, 0x04000000L,
        0x00200800L, 0x00200000L, 0x04000802L,
        0x04000802L, 0x04200002L, 0x04200002L,
        0x00000002L, 0x00200002L, 0x04000000L,
        0x04000800L, 0x00200000L, 0x04200800L,
        0x00000802L, 0x00200802L, 0x04200800L,
        0x00000802L, 0x04000002L, 0x04200802L,
        0x04200000L, 0x00200800L, 0x00000000L,
        0x00000002L, 0x04200802L, 0x00000000L,
        0x00200802L, 0x04200000L, 0x00000800L,
        0x04000002L, 0x04000800L, 0x00000800L,
        0x00200002L
};

static unsigned long SP8[64] = {
        0x10001040L, 0x00001000L, 0x00040000L,
        0x10041040L, 0x10000000L, 0x10001040L,
        0x00000040L, 0x10000000L, 0x00040040L,
        0x10040000L, 0x10041040L, 0x00041000L,
        0x10041000L, 0x00041040L, 0x00001000L,
        0x00000040L, 0x10040000L, 0x10000040L,
        0x10001000L, 0x00001040L, 0x00041000L,
        0x00040040L, 0x10040040L, 0x10041000L,
        0x00001040L, 0x00000000L, 0x00000000L,
        0x10040040L, 0x10000040L, 0x10001000L,
        0x00041040L, 0x00040000L, 0x00041040L,
        0x00040000L, 0x10041000L, 0x00001000L,
        0x00000040L, 0x10040040L, 0x00001000L,
        0x00041040L, 0x10001000L, 0x00000040L,
        0x10000040L, 0x10040000L, 0x10040040L,
        0x10000000L, 0x00040000L, 0x10001040L,
        0x00000000L, 0x10041040L, 0x00040040L,
        0x10000040L, 0x10040000L, 0x10001000L,
        0x10001040L, 0x00000000L, 0x10041040L,
        0x00041000L, 0x00041000L, 0x00001040L,
        0x00001040L, 0x00040040L, 0x10000000L,
        0x10041000L
};


/*
|==============================================================================
|    MazmumDeskey()
|==============================================================================
|
| Эта функция формирует массив ключей 'mzm_kn' 
| на основе входного массива ключа 'MAZM_Key'.
|
| Параметры:
| - MAZM_Key: Указатель на входной массив ключа 
|             (размер должен быть не менее 8 байт).
| - MAZM_BFG: Режим работы (MAZM_EN
|             шифрование, MAZM_DE - дешифрование).
|
| Функция изменяет внутренний массив ключей 'MZMKnL'
| результатами формирования ключей.
|
|
|==============================================================================
*/
void MazmumDeskey(unsigned char *MAZM_Key, int32_t MAZM_BFG)
{
    register int32_t I;
    register int32_t J;
    register int32_t L;
    register int32_t M;
    register int32_t N;

    unsigned char mzm_pcm[56];
    unsigned char mzm_pcr[56];
    unsigned long mzm_kn[32];


    for (J = 0; J < 56; J++)
    {
        I = mzm_pcm[J];
        M = I & 07;
        mzm_pcm[J] = (MAZM_Key[I >> 3] & MazmumByteBit[M]) ? 1 : 0;
    }

    for (I = 0; I < 16; I++)
    {
        if (MAZM_BFG == MAZM_DE)
        {
            M = (15 - I) << 1;
        } else {
            M = I << 1;
        }

        N = M + 1;
        mzm_kn[M] = mzm_kn[N] = 0L;

        for (J = 0; J < 28; J++)
        {
            I = J + MazmumTotrot[I];

            if (L < 28)
            {
                mzm_pcr[J] = mzm_pcm[L];
            } else {
                mzm_pcr[J] = mzm_pcm[L - 28];
            }
        }

        for (J = 28; J < 56; J++)
        {
            L = J + MazmumTotrot[I];

            if (L < 56)
            {
                mzm_pcr[J] = mzm_pcm[L];
            } else {
                mzm_pcr[J] = mzm_pcm[L - 28];
            }
        }

        for (J = 0; J < 24; J++)
        {
            if (mzm_pcr[mzm_pcm[J]])
            {
                mzm_kn[M] |= MazmumBigByte[J];
            }

            if (mzm_pcr[mzm_pcm[J + 24]])
            {
                mzm_kn[N] |= MazmumBigByte[J];
            }
        }
    }
    MazmumCookey(mzm_kn);
    return;
}


/*
|==============================================================================
|    MazmumCookey()
|==============================================================================
|
| Эта функция преобразует входной массив ключей 'WAR' 
| и сохраняет результат во внутреннем массиве ключей 'MZMKnL'.
|
| Параметры:
| - WAR: Указатель на входной массив ключей 
|        (размер должен быть не менее 32 слов).
|
| Функция преобразует ключи, сохраненные во входном массиве 'WAR',
| и использует их для установки внутреннего массива ключей 'MZMKnL'.
|
|==============================================================================
*/
static void MazmumCookey(register unsigned long *WAR)
{
    register unsigned long *CookWar;
    register unsigned long *CookZero;
    unsigned long dough[32];
    register int32_t I;

    CookWar = dough;

    for (I = 0; I < 16; I++, WAR++)
    {
        CookZero = WAR++;
        *CookWar = (*CookZero & 0x00fc0000L) << 6;
        *CookWar |= (*CookZero & 0x00000fc0L) << 10;
        *CookWar |= (*WAR & 0x00fc0000L) >> 10;
        *CookWar++ |= (*WAR & 0x00000fc0L) >> 6;
        *CookWar = (*CookZero & 0x0003f000L) << 12;
        *CookWar |= (*CookZero & 0x0000003fL) << 16;
        *CookWar |= (*WAR & 0x0003f000L) >> 4;
        *CookWar++ |= (*WAR & 0x0000003fL);
    }
    MazmumUsekey(dough);
    return;
}


/*
|==============================================================================
|    MazmumCpkey()
|==============================================================================
|
| Эта функция копирует 32 32-битных слова из внутреннего массива 
| ключей 'MZMKnL' в выходной массив 'INTO'.
|
| Параметры:
| - INTO: Указатель на выходной массив ключей 
|         (размер должен быть не менее 32 слов).
|
| Функция создана для копирования ключей из внутреннего массива,
| используемого в алгоритме Mazmum,
| во внешний массив, который может быть использован
| в других частях программы.
|
|==============================================================================
*/
void MazmumCpkey(register unsigned long *INTO)
{
    register unsigned long *from;
    register unsigned long *endp;

    from = MZMKnL, endp = &MZMKnL[32];
    while (from < endp)
    {
        *INTO++ = *from++;
    }
    return;
}


/*
|==============================================================================
|    MazmumUsekey()
|==============================================================================
|
| Эта функция копирует 32 32-битных слова из входного массива 'FROM' 
| во внутренний массив ключей 'MZMKnL'.
|
| Параметры:
| - FROM: Указатель на входной массив ключей 
|         (размер должен быть не менее 32 слов).
|
| Функция копирует ключи, которые будут использоваться
| для шифрования DES внутри алгоритма Mazmum.
|
|
|==============================================================================
*/
void MazmumUsekey(register unsigned long *FROM)
{
    register unsigned long *to;
    register unsigned long *endp;

    to = MZMKnL, endp = &MZMKnL[32];
    while (to < endp)
    {
        *to++ = *FROM++;
    }
    return;
}


/*
|==============================================================================
|    MazmumDes()
|==============================================================================
|
| Эта функция выполняет шифрование DES для блока данных 'InBlock'
| и сохраняет результат в 'OutBlock'.
|
| Параметры:
| - InBlock: Указатель на входной блок данных (размер должен быть 8 байт).
| - OutBlock: Указатель на выходной блок данных (размер должен быть 8 байт).
|
| Функция использует внутренние ключи и процедуры 
| шифрования DES (MazmumScrunch, MazmumDesfunc, MazmumUnscrun).
|
|==============================================================================
*/
void MazmumDes(unsigned char *InBlock, unsigned char *OutBlock)
{
    unsigned long WORK[2];

     // Упаковываем входной блок в 32-битные слова
    MazmumScrunch(InBlock, WORK);
     // Производим шифрование DES
    MazmumDesfunc(WORK, MZMKnL);
     // Разбираем результат обратно в байты
    MazmumUnscrun(WORK, OutBlock);
    return;
}


/*
|==============================================================================
|    MazmumScrunch()
|==============================================================================
|
| Эта функция компактно упаковывает байты из массива 'Outof'
| в 32-битное слово 'Into'.
|
| Параметры:
| - Outof: Указатель на массив байт (вход).
| - Into: Указатель на 32-битное слово (выход).
|
| Функция изменяет параметр 'Into' результатами упаковки байтов из 'Outof'.
|==============================================================================
*/
static void MazmumScrunch(register unsigned char *Outof, register unsigned long *Into)
{
    *Into = (*Outof++ & 0xffL) << 24;
    *Into |= (*Outof++ & 0xffL) << 16;
    *Into |= (*Outof++ & 0xffL) << 8;
    *Into++ |= (*Outof++ & 0xffL);
    *Into = (*Outof++ & 0xffL) << 24;
    *Into |= (*Outof++ & 0xffL) << 16;
    *Into |= (*Outof++ & 0xffL) << 8;
    *Into |= (*Outof & 0xffL);
    return;
}

/*
|==============================================================================
|    MazmumUnscrun()
|==============================================================================
| Эта функция разбирает 32-битное слово 'Outof'
| и сохраняет его байты в массив 'Into'.
|
| Параметры:
| - Outof: Указатель на 32-битное слово (вход).
| - Into: Указатель на массив байт (выход).
|
| Функция изменяет параметр 'Into' результатами разбора 'Outof'.
|
|==============================================================================
*/
static void MazmumUnscrun(register unsigned long *Outof, register unsigned char *Into)
{
    *Into++ = (*Outof >> 24) & 0xffL;
    *Into++ = (*Outof >> 16) & 0xffL;
    *Into++ = (*Outof >> 8) & 0xffL;
    *Into++ = *Outof++ & 0xffL;
    *Into++ = (*Outof >> 24) & 0xffL;
    *Into++ = (*Outof >> 16) & 0xffL;
    *Into++ = (*Outof >> 8) & 0xffL;
    *Into = *Outof & 0xffL;
    return;
}


/*
|==============================================================================
|    MazmumDesfunc()
|==============================================================================
|
| Эта функция реализует один раунд алгоритма DES (Data Encryption Standard).
| Принимает блок данных 'Block' размером 64 бита и набор раундовых
| ключей 'Keys' размером 48 бит.
| Функция выполняет серию битовых операций, операций исключающего
| ИЛИ и таблицовых поисков, используя
| таблицы замен-перестановок (SP1, SP2, ..., SP8),
| для преобразования входного блока.
|
| Параметры:
| - Block: Указатель на блок данных размером 64 бита
|          (вход и выход).
| - Keys: Указатель на набор раундовых
|         ключей размером 48 бит.
|
| Функция изменяет параметр 'Block' результатом преобразования DES.
|==============================================================================
*/
static void MazmumDesfunc(register unsigned long *Block, register unsigned long *Keys)
{
    register unsigned long FVAL;
    register unsigned long WORK;
    register unsigned long RIGHT;
    register unsigned long LEFT;
    register int32_t round;

    // Начальная перестановка и расширение данных
    LEFT = Block[0];
    RIGHT = Block[1];
    WORK = ((LEFT >> 4) ^ RIGHT) & 0x0f0f0f0fL;
    RIGHT ^= WORK;
    LEFT ^= (WORK << 4);
    WORK = ((LEFT >> 16) ^ RIGHT) & 0x0000ffffL;
    RIGHT ^= WORK;
    LEFT ^= (WORK << 16);
    WORK = ((RIGHT >> 2) ^ LEFT) & 0x33333333L;
    LEFT ^= WORK;
    LEFT ^= (WORK << 2);
    WORK = ((RIGHT >> 8) ^ LEFT) & 0x00ff00ffL;
    LEFT ^= WORK;
    RIGHT ^= (WORK << 8);
    RIGHT = ((RIGHT << 1) | ((RIGHT >> 31) & 1L)) & 0xffffffffL;
    WORK = (LEFT ^ RIGHT) & 0xaaaaaaaaL;
    LEFT ^= WORK;
    RIGHT ^= WORK;
    LEFT = ((LEFT << 1) | ((LEFT >> 31) & 1L)) & 0xffffffffL;

    // Основной цикл преобразования DES
    for (round = 0; round < 8; round++)
    {
        // Перестановка и подстановка данных
        WORK = (RIGHT << 28) | (RIGHT >> 4);
        WORK ^= *Keys++;
        FVAL = SP7[WORK & 0x3fL];
        FVAL |= SP5[(WORK >> 8) & 0x3fL];
        FVAL |= SP3[(WORK >> 16) & 0x3fL];
        FVAL |= SP1[(WORK >> 24) & 0x3fL];
        WORK = RIGHT ^ *Keys++;
        FVAL |= SP8[WORK & 0x3fL];
        FVAL |= SP6[(WORK >> 8) & 0x3fL];
        FVAL |= SP4[(WORK >> 16) & 0x3fL];
        FVAL |= SP2[(WORK >> 24) & 0x3fL];
        LEFT ^= FVAL;
        WORK = (LEFT << 28) | (LEFT >> 4);
        WORK ^= *Keys++;
        FVAL = SP7[WORK & 0x3fL];
        FVAL |= SP5[(WORK >> 8) & 0x3fL];
        FVAL |= SP3[(WORK >> 16) & 0x3fL];
        FVAL |= SP1[(WORK >> 24) & 0x3fL];
        WORK = LEFT ^ *Keys++;
        FVAL |= SP8[WORK & 0x3fL];
        FVAL |= SP6[(WORK >> 8) & 0x3fL];
        FVAL |= SP4[(WORK >> 16) & 0x3fL];
        FVAL |= SP2[(WORK >> 24) & 0x3fL];
        RIGHT ^= FVAL;
    }

    // Конечная перестановка
    RIGHT = (RIGHT << 31) | (RIGHT >> 1);
    WORK = (LEFT ^ RIGHT) & 0xaaaaaaaaL;
    LEFT ^= WORK;
    RIGHT ^= WORK;
    LEFT = (LEFT << 31) | (LEFT >> 1);
    WORK = ((LEFT >> 8) ^ RIGHT) & 0x00ff00ffL;
    RIGHT ^= WORK;
    LEFT ^= (WORK << 8);
    WORK = ((LEFT >> 2) ^ RIGHT) & 0x33333333L;
    RIGHT ^= WORK;
    LEFT ^= (WORK << 2);
    WORK = ((RIGHT >> 16) ^ LEFT) & 0x0000ffffL;
    LEFT ^= WORK;
    RIGHT ^= (WORK << 16);
    WORK = ((RIGHT >> 4) ^ LEFT) & 0x0f0f0f0fL;
    LEFT ^= WORK;
    RIGHT ^= (WORK << 4);

    // Вывод результата
    *Block++ = RIGHT;
    *Block = LEFT;
    return;
}