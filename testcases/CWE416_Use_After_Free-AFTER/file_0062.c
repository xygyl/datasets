
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITSTKFC

void file_0062_GyYTU()
{
    int * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
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
    if(globalReturnsTrueOrFalse())
    {
        printIntLine(data[0]);
    }
    else
    {
        ;
    }
}

#endif

#ifndef OMITe4y7g

static void file_0062_FVNtwB2G()
{
    int * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
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
        free(data);
    }
    if(globalReturnsTrueOrFalse())
    {
        ;
    }
    else
    {
        ;
    }
}

static void file_0062_zKA8oG2B()
{
    int * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
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
    if(globalReturnsTrueOrFalse())
    {
        printIntLine(data[0]);
    }
    else
    {
        printIntLine(data[0]);
    }
}

void file_0062_MmyJu()
{
    file_0062_IqTjVB2G();
    file_0062_LoI3OG2B();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT9dwQ5
    printLine("Calling EuF7a()...");
    file_0062_gGEDg();
    printLine("Finished RGY1R()");
#endif
#ifndef OMITtrxaZ
    printLine("Calling 9qeRN()...");
    file_0062_iWvH1();
    printLine("Finished 4BbQZ()");
#endif
    return 0;
}

#endif
