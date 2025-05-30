
#include "std_testcase.h"

#include <wchar.h>

static const int STATIC_CONST_TRUE = 1;
static const int STATIC_CONST_FALSE = 0;

#ifndef OMITYwiNJ

void file_0079_Ea9ES()
{
    long * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
        free(data);
    }
    if(STATIC_CONST_TRUE)
    {
        printLongLine(data[0]);
    }
}

#endif

#ifndef OMITrlckM

static void file_0079_VKMzYB2G1()
{
    long * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
        free(data);
    }
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0079_IbV05B2G2()
{
    long * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
        free(data);
    }
    if(STATIC_CONST_TRUE)
    {
        ;
    }
}

static void file_0079_scIqNG2B1()
{
    long * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
    }
    if(STATIC_CONST_TRUE)
    {
        printLongLine(data[0]);
    }
}

static void file_0079_UxuNtG2B2()
{
    long * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
    }
    if(STATIC_CONST_TRUE)
    {
        printLongLine(data[0]);
    }
}

void file_0079_3WN8A()
{
    file_0079_ECm0tB2G1();
    file_0079_nYGGyB2G2();
    file_0079_DjzwqG2B1();
    file_0079_Gu322G2B2();
}

#endif

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITuIx1O
    printLine("Calling U1baH()...");
    file_0079_snFz4();
    printLine("Finished 0laMG()");
#endif
#ifndef OMITHVp01
    printLine("Calling L7YTc()...");
    file_0079_YABqx();
    printLine("Finished ZaRip()");
#endif
    return 0;
}

#endif
