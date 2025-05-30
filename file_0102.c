
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITcqXCF

void file_0102_TS3uE()
{
    twoIntsStruct * data;
    data = NULL;
    if(1)
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
    }
    if(1)
    {
        printStructLine(&data[0]);
    }
}

#endif

#ifndef OMITMzgsU

static void file_0102_9Iwk1B2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(1)
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
    }
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0102_85E3kB2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(1)
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
    }
    if(1)
    {
        ;
    }
}

static void file_0102_lHr6VG2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
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
    }
    if(1)
    {
        printStructLine(&data[0]);
    }
}

static void file_0102_tzEVkG2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(1)
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
    }
    if(1)
    {
        printStructLine(&data[0]);
    }
}

void file_0102_KRyIO()
{
    file_0102_62poYB2G1();
    file_0102_5ZlDAB2G2();
    file_0102_pWtegG2B1();
    file_0102_3FUTeG2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITQt5q6
    printLine("Calling yJ3KY()...");
    file_0102_UYyDj();
    printLine("Finished eWboR()");
#endif
#ifndef OMITywmpT
    printLine("Calling hZUqN()...");
    file_0102_EShZm();
    printLine("Finished 3irz0()");
#endif
    return 0;
}

#endif
