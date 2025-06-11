
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITio48f

void file_0093_sf2Ss()
{
    long * data;
    data = NULL;
    goto source;
source:
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
    goto sink;
sink:
    printLongLine(data[0]);
}

#endif

#ifndef OMITxXiPB

static void file_0093_GncdGB2G()
{
    long * data;
    data = NULL;
    goto source;
source:
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
    goto sink;
sink:
    ;
}

static void file_0093_3WSHKG2B()
{
    long * data;
    data = NULL;
    goto source;
source:
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5L;
        }
    }
    goto sink;
sink:
    printLongLine(data[0]);
}

void file_0093_DTnIH()
{
    file_0093_b8bDIB2G();
    file_0093_KgljpG2B();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITCXlgz
    printLine("Calling KJr4t()...");
    file_0093_6y8Wf();
    printLine("Finished EqxbR()");
#endif
#ifndef OMITaS7QX
    printLine("Calling UjA2w()...");
    file_0093_6ntvW();
    printLine("Finished zbR2j()");
#endif
    return 0;
}

#endif
