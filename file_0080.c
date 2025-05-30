
#include "std_testcase.h"

#include <wchar.h>

static int staticTrue = 1;
static int staticFalse = 0;

#ifndef OMITtIbNu

void file_0080_6gh8L()
{
    long * data;
    data = NULL;
    if(staticTrue)
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
    if(staticTrue)
    {
        printLongLine(data[0]);
    }
}

#endif

#ifndef OMITcszl0

static void file_0080_JNmfVB2G1()
{
    long * data;
    data = NULL;
    if(staticTrue)
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
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0080_WbtzmB2G2()
{
    long * data;
    data = NULL;
    if(staticTrue)
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
    if(staticTrue)
    {
        ;
    }
}

static void file_0080_T3anGG2B1()
{
    long * data;
    data = NULL;
    if(staticFalse)
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
    if(staticTrue)
    {
        printLongLine(data[0]);
    }
}

static void file_0080_glLSOG2B2()
{
    long * data;
    data = NULL;
    if(staticTrue)
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
    if(staticTrue)
    {
        printLongLine(data[0]);
    }
}

void file_0080_iJ8xb()
{
    file_0080_CedyLB2G1();
    file_0080_aEwRfB2G2();
    file_0080_NUFGhG2B1();
    file_0080_Sx6M8G2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITDvhQM
    printLine("Calling NONE7()...");
    file_0080_mKgXp();
    printLine("Finished 6tR2i()");
#endif
#ifndef OMITtzjCI
    printLine("Calling qIs8O()...");
    file_0080_aDTLM();
    printLine("Finished xRPHY()");
#endif
    return 0;
}

#endif
