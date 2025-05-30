
#include "std_testcase.h"

#include <wchar.h>

static int staticFive = 5;

#ifndef OMITVg1Ev

void file_0032_iPonU()
{
    int64_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
        free(data);
    }
    if(staticFive==5)
    {
        printLongLongLine(data[0]);
    }
}

#endif

#ifndef OMITff2Rw

static void file_0032_hFvwwB2G1()
{
    int64_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
        free(data);
    }
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0032_bQ2LPB2G2()
{
    int64_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
        free(data);
    }
    if(staticFive==5)
    {
        ;
    }
}

static void file_0032_xDCOEG2B1()
{
    int64_t * data;
    data = NULL;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
    }
    if(staticFive==5)
    {
        printLongLongLine(data[0]);
    }
}

static void file_0032_YpWSIG2B2()
{
    int64_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
    }
    if(staticFive==5)
    {
        printLongLongLine(data[0]);
    }
}

void file_0032_X7Uhy()
{
    file_0032_sdRlNB2G1();
    file_0032_ztHYoB2G2();
    file_0032_5yQf4G2B1();
    file_0032_H3qn1G2B2();
}

#endif

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT4OGmP
    printLine("Calling dogry()...");
    file_0032_jGQmA();
    printLine("Finished bt32a()");
#endif
#ifndef OMITUR3R5
    printLine("Calling HDVxv()...");
    file_0032_RJ1QB();
    printLine("Finished TcsGs()");
#endif
    return 0;
}

#endif
