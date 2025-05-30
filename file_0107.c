
#include "std_testcase.h"

#include <wchar.h>

static int staticFive = 5;

#ifndef OMITutkqL

void file_0107_Bz9nV()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticFive==5)
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
    if(staticFive==5)
    {
        printStructLine(&data[0]);
    }
}

#endif

#ifndef OMIT6rSuf

static void file_0107_4zzUGB2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticFive==5)
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
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0107_qHoN7B2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticFive==5)
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
    if(staticFive==5)
    {
        ;
    }
}

static void file_0107_0e8S7G2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        printStructLine(&data[0]);
    }
}

static void file_0107_ZOozMG2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticFive==5)
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
    if(staticFive==5)
    {
        printStructLine(&data[0]);
    }
}

void file_0107_cNUQ5()
{
    file_0107_ShwrCB2G1();
    file_0107_y39ZqB2G2();
    file_0107_bPjhJG2B1();
    file_0107_xaSMGG2B2();
}

#endif

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITTuWsC
    printLine("Calling n1Q1N()...");
    file_0107_KD5RZ();
    printLine("Finished gVVgV()");
#endif
#ifndef OMITOxGFM
    printLine("Calling J3SSr()...");
    file_0107_vm2Xi();
    printLine("Finished SgkqU()");
#endif
    return 0;
}

#endif
