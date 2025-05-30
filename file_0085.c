
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITS4fSM

void file_0085_UP6bk()
{
    long * data;
    data = NULL;
    if(globalTrue)
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
    if(globalTrue)
    {
        printLongLine(data[0]);
    }
}

#endif

#ifndef OMIT1qixm

static void file_0085_HuNU9B2G1()
{
    long * data;
    data = NULL;
    if(globalTrue)
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
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0085_FB7hXB2G2()
{
    long * data;
    data = NULL;
    if(globalTrue)
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
    if(globalTrue)
    {
        ;
    }
}

static void file_0085_idYcGG2B1()
{
    long * data;
    data = NULL;
    if(globalFalse)
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
    if(globalTrue)
    {
        printLongLine(data[0]);
    }
}

static void file_0085_lEurxG2B2()
{
    long * data;
    data = NULL;
    if(globalTrue)
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
    if(globalTrue)
    {
        printLongLine(data[0]);
    }
}

void file_0085_4U5xe()
{
    file_0085_DSjLfB2G1();
    file_0085_uPsIbB2G2();
    file_0085_xm02TG2B1();
    file_0085_0dfWFG2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITmrHw6
    printLine("Calling ZhZ9f()...");
    file_0085_96KIa();
    printLine("Finished LCsEp()");
#endif
#ifndef OMITYvkFZ
    printLine("Calling OWvJO()...");
    file_0085_BTIfx();
    printLine("Finished 5MgSw()");
#endif
    return 0;
}

#endif
