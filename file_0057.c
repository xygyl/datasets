
#include "std_testcase.h"

#include <wchar.h>

static int staticFive = 5;

#ifndef OMITfyary

void file_0057_qFCdD()
{
    int * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
        free(data);
    }
    if(staticFive==5)
    {
        printIntLine(data[0]);
    }
}

#endif

#ifndef OMIThgTf5

static void file_0057_tYOPgB2G1()
{
    int * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
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

static void file_0057_HX6IMB2G2()
{
    int * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
        free(data);
    }
    if(staticFive==5)
    {
        ;
    }
}

static void file_0057_nibouG2B1()
{
    int * data;
    data = NULL;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
    }
    if(staticFive==5)
    {
        printIntLine(data[0]);
    }
}

static void file_0057_rlVfUG2B2()
{
    int * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
    }
    if(staticFive==5)
    {
        printIntLine(data[0]);
    }
}

void file_0057_GuTjO()
{
    file_0057_FSa16B2G1();
    file_0057_qGuN6B2G2();
    file_0057_hWcxyG2B1();
    file_0057_ONzCvG2B2();
}

#endif

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT2Xu2p
    printLine("Calling 4X7id()...");
    file_0057_IvjRz();
    printLine("Finished GG0xu()");
#endif
#ifndef OMIToi5xW
    printLine("Calling HvqLD()...");
    file_0057_czWTu();
    printLine("Finished eaGbJ()");
#endif
    return 0;
}

#endif
