
#include "std_testcase.h"

#include <wchar.h>

static int staticFive = 5;

#ifndef OMITCHUjf

void file_0082_uP8ku()
{
    long * data;
    data = NULL;
    if(staticFive==5)
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
    if(staticFive==5)
    {
        printLongLine(data[0]);
    }
}

#endif

#ifndef OMITn19kB

static void file_0082_w8uoBB2G1()
{
    long * data;
    data = NULL;
    if(staticFive==5)
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
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0082_83AFSB2G2()
{
    long * data;
    data = NULL;
    if(staticFive==5)
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
    if(staticFive==5)
    {
        ;
    }
}

static void file_0082_0aZf4G2B1()
{
    long * data;
    data = NULL;
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        printLongLine(data[0]);
    }
}

static void file_0082_HyxD4G2B2()
{
    long * data;
    data = NULL;
    if(staticFive==5)
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
    if(staticFive==5)
    {
        printLongLine(data[0]);
    }
}

void file_0082_UMwe6()
{
    file_0082_jHRBmB2G1();
    file_0082_8J1jGB2G2();
    file_0082_XQG6AG2B1();
    file_0082_rbFlDG2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITToKBu
    printLine("Calling dmaWA()...");
    file_0082_TF4nt();
    printLine("Finished AuaET()");
#endif
#ifndef OMIT28nL7
    printLine("Calling o5KVR()...");
    file_0082_uwPed();
    printLine("Finished 4EdAA()");
#endif
    return 0;
}

#endif
