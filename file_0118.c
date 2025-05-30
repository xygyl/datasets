
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITMt91C

void file_0118_JrJcf()
{
    twoIntsStruct * data;
    data = NULL;
    goto source;
source:
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i].intOne = 1;
            data[i].intTwo = 2;
        }
    }
    free(data);
    goto sink;
sink:
    printStructLine(&data[0]);
}

#endif

#ifndef OMITEW05T

static void file_0118_qR6NEB2G()
{
    twoIntsStruct * data;
    data = NULL;
    goto source;
source:
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i].intOne = 1;
            data[i].intTwo = 2;
        }
    }
    free(data);
    goto sink;
sink:
    ;
}

static void file_0118_evV6OG2B()
{
    twoIntsStruct * data;
    data = NULL;
    goto source;
source:
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i].intOne = 1;
            data[i].intTwo = 2;
        }
    }
    goto sink;
sink:
    printStructLine(&data[0]);
}

void file_0118_vAYMd()
{
    file_0118_N5BNFB2G();
    file_0118_DU1XJG2B();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITTwe4U
    printLine("Calling 3Z6Nu()...");
    file_0118_nmwO1();
    printLine("Finished wYY7D()");
#endif
#ifndef OMITeCOkD
    printLine("Calling oA3a5()...");
    file_0118_tcyMr();
    printLine("Finished 7fRwt()");
#endif
    return 0;
}

#endif
