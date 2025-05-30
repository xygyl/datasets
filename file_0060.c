
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITs62JS

void file_0060_xF88s()
{
    int * data;
    data = NULL;
    if(globalTrue)
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
    if(globalTrue)
    {
        printIntLine(data[0]);
    }
}

#endif

#ifndef OMIT9hTHw

static void file_0060_NsZnSB2G1()
{
    int * data;
    data = NULL;
    if(globalTrue)
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
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0060_fSyXeB2G2()
{
    int * data;
    data = NULL;
    if(globalTrue)
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
    if(globalTrue)
    {
        ;
    }
}

static void file_0060_UiMbhG2B1()
{
    int * data;
    data = NULL;
    if(globalFalse)
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
    if(globalTrue)
    {
        printIntLine(data[0]);
    }
}

static void file_0060_kQnhGG2B2()
{
    int * data;
    data = NULL;
    if(globalTrue)
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
    if(globalTrue)
    {
        printIntLine(data[0]);
    }
}

void file_0060_0J0aj()
{
    file_0060_LEcuaB2G1();
    file_0060_ElDBjB2G2();
    file_0060_K2JjMG2B1();
    file_0060_z3NBTG2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITCOKjw
    printLine("Calling OOpl3()...");
    file_0060_muRg8();
    printLine("Finished jCcfg()");
#endif
#ifndef OMITHdz3I
    printLine("Calling aNExr()...");
    file_0060_hSzdo();
    printLine("Finished cfrvl()");
#endif
    return 0;
}

#endif
