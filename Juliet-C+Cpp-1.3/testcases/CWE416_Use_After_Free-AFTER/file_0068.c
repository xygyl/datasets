
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITk2WQp

void file_0068_X0Ra9()
{
    int * data;
    data = NULL;
    goto source;
source:
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
    goto sink;
sink:
    printIntLine(data[0]);
}

#endif

#ifndef OMITV2Ubm

static void file_0068_Hvzg0B2G()
{
    int * data;
    data = NULL;
    goto source;
source:
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
    goto sink;
sink:
    ;
}

static void file_0068_avOgVG2B()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5;
        }
    }
    goto sink;
sink:
    printIntLine(data[0]);
}

void file_0068_5n1C4()
{
    file_0068_Lv5IRB2G();
    file_0068_sWyABG2B();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITVum8T
    printLine("Calling OY8Bl()...");
    file_0068_wTlgZ();
    printLine("Finished lJcVR()");
#endif
#ifndef OMITHr2Yz
    printLine("Calling Zjp6L()...");
    file_0068_gQ1M2();
    printLine("Finished cDMOd()");
#endif
    return 0;
}

#endif
