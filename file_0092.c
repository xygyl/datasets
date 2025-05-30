
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITomFZU

void file_0092_dvgXS()
{
    int i,j;
    long * data;
    data = NULL;
    for(i = 0; i < 1; i++)
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
    for(j = 0; j < 1; j++)
    {
        printLongLine(data[0]);
    }
}

#endif

#ifndef OMITuua8j

static void file_0092_sTbs5B2G()
{
    int i,k;
    long * data;
    data = NULL;
    for(i = 0; i < 1; i++)
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
    for(k = 0; k < 1; k++)
    {
        ;
    }
}

static void file_0092_bls99G2B()
{
    int h,j;
    long * data;
    data = NULL;
    for(h = 0; h < 1; h++)
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
    for(j = 0; j < 1; j++)
    {
        printLongLine(data[0]);
    }
}

void file_0092_e6nPi()
{
    file_0092_3WA9EB2G();
    file_0092_P3U04G2B();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITbOBFp
    printLine("Calling X8qEh()...");
    file_0092_ajVMe();
    printLine("Finished PA4br()");
#endif
#ifndef OMITjoJZF
    printLine("Calling 9ZMpS()...");
    file_0092_csTrs();
    printLine("Finished twd4q()");
#endif
    return 0;
}

#endif
