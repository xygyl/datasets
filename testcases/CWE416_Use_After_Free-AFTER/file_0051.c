
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITL4IVE

void file_0051_PCOGb()
{
    int * data;
    data = NULL;
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
    printIntLine(data[0]);
}

#endif

#ifndef OMITqFgk2

static void file_0051_7CUA7G2B()
{
    int * data;
    data = NULL;
    data = (int *)malloc(100*sizeof(int));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5;
        }
    }
    printIntLine(data[0]);
}

static void file_0051_L75uOB2G()
{
    int * data;
    data = NULL;
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
    ;
}

void file_0051_onNbl()
{
    file_0051_eGCyfG2B();
    file_0051_4aOkIB2G();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITXrFK4
    printLine("Calling xDdWS()...");
    file_0051_YXT5v();
    printLine("Finished KGyof()");
#endif
#ifndef OMITNCLGr
    printLine("Calling uuAyE()...");
    file_0051_uxiqt();
    printLine("Finished 1jED9()");
#endif
    return 0;
}

#endif
