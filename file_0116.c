
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITZ9vdl

void file_0116_TWw4P()
{
    twoIntsStruct * data;
    data = NULL;
    while(1)
    {
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
        break;
    }
    while(1)
    {
        printStructLine(&data[0]);
        break;
    }
}

#endif

#ifndef OMITg1j03

static void file_0116_shcXSB2G()
{
    twoIntsStruct * data;
    data = NULL;
    while(1)
    {
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
        break;
    }
    while(1)
    {
        ;
        break;
    }
}

static void file_0116_KZhYqG2B()
{
    twoIntsStruct * data;
    data = NULL;
    while(1)
    {
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
        break;
    }
    while(1)
    {
        printStructLine(&data[0]);
        break;
    }
}

void file_0116_oxamB()
{
    file_0116_zCo9jB2G();
    file_0116_VwoEXG2B();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITZQtRv
    printLine("Calling RprK6()...");
    file_0116_QJTDR();
    printLine("Finished NJsfJ()");
#endif
#ifndef OMITvp8JM
    printLine("Calling suUXt()...");
    file_0116_VZgPG();
    printLine("Finished iZK95()");
#endif
    return 0;
}

#endif
