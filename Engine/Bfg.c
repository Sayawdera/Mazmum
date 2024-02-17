#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#ifdef __MAZMUM
#include <sys/int_types.h>
#elif defined(__FreeBSD__) || defined(__IBMCPP__) || defined(_AIX__) || defined(__linux__) || defined(__unix__)
#include <inttypes.h>
#else
#include <stdint.h>
#endif
#include "Headers/BFG.h"


MAZMUM_BFG_OPTION __mazmum_bfg_options;

#ifdef MAZMUM_HAVE_MATH_H

extern init32_t mazmum_debug;


/*
|=========================================================================
|    Mazmum_Add_Single_Char()
|=========================================================================
|
| Добавляет один символ к набору символов
| для использования в генераторе паролей.
|
| Параметры:
| - ch: Символ для добавления.
| - flags: Флаги, определяющие характеристики символа
|                 (например, числа, заглавные буквы).
| - crs_len: Указатель на переменную,
|            содержащую текущую длину набора символов.
|
| Возвращаемое значение:
| - 0, если символ успешно добавлен,
|      иначе - ошибка.
|
| Примечание: Функция также обрабатывает случаи,
| когда символ уже определен в наборе символов
| для чисел или букв в верхнем регистре,
| в зависимости от переданных флагов.
|
|=========================================================================
 */
static int32_t Mazmum_Add_Single_Char(char ch, char flags, int32_t *crs_len)
{
    if ((ch >= '2' && ch <= '9') || ch == '0')
    {
        if ((flags & MAZMUM_BFG_NUMS) > 0)
        {
            printf("[ ERROR ]: Character { %c } defined in -x although the whole the number Range was already defined by '1', ignored", ch);
            return 0;

        }
    }

    if (tolower((int32_t)ch) >= 'b' && tolower((int32_t)ch) <= 'z')
    {
        if ((ch <= 'Z' && (flags & MAZMUM_BFG_UPPER) > 0) || (ch > 'Z' && (flags & MAZMUM_BFG_UPPER) > 0))
        {
            printf("[ERROR] character { %c } defined in -x although the whole letter range was already defined by { '%c' }, ignored\n", ch, ch <= 'Z' ? 'A' : 'a');
            return 0;
        }
    }
    (*crs_len)++;

    if (MAZMUM_BFG_CHARSMAX - *crs_len < 1)
    {
        free(__mazmum_bfg_options.crs);
        fprintf(stderr, "[ ERROR ]: charset specification exceeds { %d } characters. \n", MAZMUM_BFG_CHARSMAX);
        return 0;
    } else {
        mazmum_bfg_options.crs[*crs_len - 1] = ch;
        mazmum_bfg_options.crs[*crs_len] = '\0';
    }
    return 0;
}


/*
|=========================================================================
|    Mazmum_Bfg_Init()
|=========================================================================
|
| Инициализирует параметры для генератора паролей
| в соответствии
| с переданными опциями командной строки.
|
| Параметры:
| - arg: Строка с опциями командной строки
|        для параметра -x.
|
| Возвращаемое значение:
| - 0, если инициализация прошла успешно,
|      иначе - код ошибки.
|
| Примечание:
| - Функция обрабатывает опции командной строки
|    для генератора паролей,
|    устанавливает соответствующие флаги и
|    выполняет инициализацию набора
|    символов для генерации паролей.
|
|
|=========================================================================
 */
int32_t Mazmum_Bfg_Init(char *arg)
{
    int32_t I = 0;
    int32_t crs_len = 0;
    char flags = 0;
    char *tmp = strchr(arg,':');

    // Проверка наличия символа ':' в переданных опциях командной строки.
    if (!tmp)
    {
        fprintf(stderr, "[ ERROR ]: Invalid option fromat for { -x }\n");
        return -1;
    } else {
        tmp[0] = '\0';
    }
    // Инициализация параметра mazmum_from из переданных опций.
    __mazmum_bfg_options.mazmum_from = atoi(arg);

    // Проверка допустимости значения mazmum_from
    if (__mazmum_bfg_options.mazmum_from < 1 || mazmum_bfg_options.mazmum_from > 127)
    {
        fprintf(stderr, "[ ERROR ]: minimum length must be between 1 and 127, format -> -X min:max:types\n");
        return 1;
    }
    arg = tmp + 1;
    tmp++;

    // Проверка наличия максимальной длины в переданных опциях.
    if (!arg[0])
    {
        fprintf(stderr, "[ ERROR]: no maximum length specified for -x min:max:types!\n");
        return 1;
    }
    tmp = strchr(arg, ':');

    // Проверка наличия символа ':' после минимальной длины.
    if (!tmp)
    {
        fprintf(stderr, "[ ERROR ]: Invalid option format for -x\n");
        return 1;
    } else {
        tmp[0] = '\0';
    }
    // Инициализация параметра mazmum_to из переданных опций.
    __mazmum_bfg_options.mazmum_to = atoi(arg);
    tmp++;

    // Проверка допустимости значений mazmum_from и mazmum_to.
    if (__mazmum_bfg_options.mazmum_from > __mazmum_bfg_options.mazmum_to)
    {
        fprintf(stderr, "[ ERROR ]: you specified a minimum length higher than the maximum length!\n");
        return 1;
    }

    // Проверка, что опции командной строки для символов заданы.
    if (tmp[0] == 0)
    {
        fprintf(stderr, "[ ERROR ]: charset not specified!\n");
        return 1;
    }
    __mazmum_bfg_options.crs[0] = 0;


    // Обработка опций командной строки для символов и установка соответствующих флагов.
    for (; tmp[I]; I++)
    {
        if (__mazmum_bfg_options.mazmum_disable_symbols)
        {
            if (Mazmum_Add_Single_Char(tmp[I], flags, &crs_len) == -1)
            {
                return 1;
            } else {
                switch (tmp[I])
                {
                    // Обработка опции 'a' и добавление символов в набор.
                    case 'a':
                        crs_len = crs_len + 26;

                         if (MAZMUM_BFG_CHARSMAX - crs_len < 1)
                         {
                             free(__mazmum_bfg_options.crs);
                             fprintf(stderr, "[ ERROR ]: charset specification exceeds { %d } characters.\n", MAZMUM_BFG_CHARSMAX);
                             return 1;
                         }
                         else if (flags & MAZMUM_BFG_LOWER)
                         {
                             free(__mazmum_bfg_options.crs);
                             fprintf(stderr, "[ ERROR ] 'a' specified more than once in charset!\n");
                             return 1;
                         } else {
                             strcat(__mazmum_bfg_options.crs, "abcdefghijklmnopqrstuvwxyz");
                             flags |= MAZMUM_BFG_LOWER;
                         }

                        break;

                    // Обработка опции 'A' и добавление символов в набор.
                    case 'A':
                        crs_len = crs_len + 26;

                        if (MAZMUM_BFG_CHARSMAX - crs_len < 1)
                        {
                            free(__mazmum_bfg_options.crs);
                            fprintf(stderr, "[ ERROR ]: charset specification exceeds { %d } characters.\n", MAZMUM_BFG_CHARSMAX);
                            return 1;
                        }
                        else if (flags & MAZMUM_BFG_UPPER)
                        {
                            free(__mazmum_bfg_options.crs);
                            fprintf(stderr, "[ ERROR ]: 'A' specified more than once in charset!\n");
                            return 1;
                        } else {
                            strcat(__mazmum_bfg_options.crs, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
                            flags |= MAZMUM_BFG_UPPER;
                        }

                        break;

                    // Обработка опции '1' и добавление символов в набор.
                    case '1':
                        crs_len = crs_len + 10;

                        if (MAZMUM_BFG_CHARSMAX - crs_len < 1)
                        {
                            free(__mazmum_bfg_options.crs);
                            fprintf(stderr, "[ ERROR ]: charset specification exceeds %d characters.\n", MAZMUM_BFG_CHARSMAX);
                            return 1;
                        }
                        else if (flags & MAZMUM_BFG_NUMS)
                        {
                            free(__mazmum_bfg_options.crs);
                            fprintf(stderr, "[ ERROR ]: '1' specified more than once in charset!\n");
                            return 1;
                        } else {
                            strcat(__mazmum_bfg_options.crs, "0123456789");
                            flags |= MAZMUM_BFG_CHARSMAX;
                        }

                        break;

                    // Обработка других символов и добавление их в набор.
                    default:
                        if (Mazmum_Add_Single_Char(tmp[I], flags, &crs_len) == -1)
                        {
                            return 1;
                        }
                        break;
                }
            }
        }
        // Завершение инициализации и вывод отладочной информации.
        __mazmum_bfg_options.mazmum_crs_len = crs_len;
        __mazmum_bfg_options.mazmum_current = __mazmum_bfg_options.mazmum_from;
        memset((char *)__mazmum_bfg_options.mazmum_state, 0, sizeof(__mazmum_bfg_options.mazmum_state));

        if (mazmum_debug)
        {
            printf("[DEBUG] bfg INIT: from %u, to %u, len: %u, set: %s\n", __mazmum_bfg_options.mazmum_from, __mazmum_bfg_options.mazmum_to, __mazmum_bfg_options.mazmum_crs_len, __mazmum_bfg_options.crs);
            return 0;
        }
    }
}

/*
|=========================================================================
|    Mazmum_Bfg_Get_PCount()
|=========================================================================
|
| Возвращает оценочное количество паролей,
| которые могут быть
| сгенерированы в результате настроек
| для генератора паролей.
|
| Возвращаемое значение:
| - Оценочное количество паролей.
|
| Примечание:
| - Функция использует формулу подсчета паролей
|           с учетом минимальной
|           и максимальной длины паролей,
|           а также размера набора символов.
|
| - В случае, если количество паролей превышает 4 миллиарда,
|   выводится ошибка, так как подобные попытки
|   брутфорса становятся
|   неосуществимыми в разумные сроки.
|
|=========================================================================
 */
uint64_t Mazmum_Bfg_Get_PCount()
{
    int32_t I;
    double count = 0;
    uint64_t foo;

    // Итерация по всем возможным длинам паролей в заданном диапазоне.
    for (I = __mazmum_bfg_options.mazmum_from; I <= __mazmum_bfg_options.mazmum_to; I++)
    {
        // Использование формулы для оценки количества паролей.
        count = count + (pow((double )__mazmum_bfg_options.mazmum_crs_len, (double)I));

        // Проверка, чтобы избежать переполнения 4 миллиардов.
        if (count >= 0xffffffff)
        {
            fprintf(stderr, "\n[ ERROR ]: definition for password bruteforce (-x) generates more than 4 billion passwords - this is not a bug in the program, it is just not feasible to try so many attempts. Try a calculator how long that would take. duh.\n");
            exit(-1);
        }
        // Преобразование double в uint64_t и возврат значения.
        foo = count / 1;
        return foo;
    }
}

/*
|=========================================================================
|    Mazmum_Bfg_Next()
|=========================================================================
|
|  Возвращает следующий пароль из множества паролей,
|  сгенерированных на основе заданных параметров.
|
| Возвращаемое значение:
| - Указатель на строку, представляющую следующий пароль.
| - Если все пароли были сгенерированы, возвращает NULL.
|
| Примечание:
| - Функция использует состояние и параметры, заданные
|   при инициализации генератора паролей (-x).
| - Перед возвратом следующего пароля функция обновляет
|   внутреннее состояние для генерации следующего пароля.
| - При отладке выводит информацию о текущем состоянии
|   генератора и сгенерированном пароле.
|
|
|=========================================================================
 */
char *Mazmum_Bfg_Next()
{
    int32_t I;
    int32_t pos = __mazmum_bfg_options.mazmum_current - 1;

    // Проверка, были ли сгенерированы все пароли.
    if (__mazmum_bfg_options.mazmum_current > __mazmum_bfg_options.mazmum_to)
    {
        return NULL;
    }

    // Выделение памяти для хранения сгенерированного пароля.
    if ((__mazmum_bfg_options.ptr = malloc(MAZMUM_BFG_CHARSMAX)) == NULL)
    {
        fprintf(stderr, "[ ERROR ]: Can not allocate memory for -x data!\n");
        return NULL;
    }

    // Заполнение пароля на основе текущего состояния генератора.
    for (I = 0; I < __mazmum_bfg_options.mazmum_current; ++I)
    {
        __mazmum_bfg_options.ptr[I] = __mazmum_bfg_options.crs[__mazmum_bfg_options.mazmum_state[I]];
        __mazmum_bfg_options.ptr[__mazmum_bfg_options.mazmum_current];
    }

    // Вывод отладочной информации о текущем состоянии генератора и сгенерированном пароле.
    if (mazmum_debug)
    {
        printf("[DEBUG] bfg IN: len %u, from %u, current %u, to %u, state:", __mazmum_bfg_options.mazmum_crs_len, __mazmum_bfg_options.mazmum_from, __mazmum_bfg_options.mazmum_current, __mazmum_bfg_options.mazmum_to);

        for (I = 0; I < __mazmum_bfg_options.mazmum_current; I++)
        {
            printf("[ INFO ]: { %u }", __mazmum_bfg_options.mazmum_state[I]);
            printf("[ INFO ]: { x } | { %s }\n", __mazmum_bfg_options.ptr);
        }
    }

    // Обновление состояния для генерации следующего пароля.
    while (pos >= 0 && (++__mazmum_bfg_options.mazmum_state[pos]) >= __mazmum_bfg_options.mazmum_crs_len)
    {
        __mazmum_bfg_options.mazmum_current++;
        memset((char *)__mazmum_bfg_options.mazmum_state, 0, sizeof(__mazmum_bfg_options.mazmum_state));
    }
    return __mazmum_bfg_options.ptr; // Возврат сгенерированного пароля.
}

#endif
