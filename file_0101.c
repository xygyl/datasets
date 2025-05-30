
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITlud71

void file_0101_9HZvL()
{
    twoIntsStruct * data;
    data = NULL;
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
    printStructLine(&data[0]);
}

#endif

#ifndef OMIToHFWM

static void file_0101_0wDDTG2B()
{
    twoIntsStruct * data;
    data = NULL;
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
    printStructLine(&data[0]);
}

static void file_0101_3ytg3B2G()
{
    twoIntsStruct * data;
    data = NULL;
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
    ;
}

void file_0101_PVutd()
{
    file_0101_xFOnrG2B();
    file_0101_kdLCAB2G();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIThmaka
    printLine("Calling jC8I4()...");
    file_0101_VfAG2();
    printLine("Finished o1Owb()");
#endif
#ifndef OMITzWjM6
    printLine("Calling EPnii()...");
    file_0101_qmWyo();
    printLine("Finished Tnp1K()");
#endif
    return 0;
}

#endif
