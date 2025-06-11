
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITZM3ri

void file_0114_Aath5()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalFive==5)
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
    if(globalFive==5)
    {
        printStructLine(&data[0]);
    }
}

#endif

#ifndef OMITKoV8A

static void file_0114_TZng6B2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalFive==5)
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
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0114_zbvULB2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalFive==5)
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
    if(globalFive==5)
    {
        ;
    }
}

static void file_0114_ZnnkgG2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalFive!=5)
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
    if(globalFive==5)
    {
        printStructLine(&data[0]);
    }
}

static void file_0114_GI213G2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalFive==5)
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
    if(globalFive==5)
    {
        printStructLine(&data[0]);
    }
}

void file_0114_07CRH()
{
    file_0114_ARMtPB2G1();
    file_0114_lsGQ4B2G2();
    file_0114_KvWAmG2B1();
    file_0114_opH4QG2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITFH98a
    printLine("Calling mpFGP()...");
    file_0114_I98kL();
    printLine("Finished EYlVw()");
#endif
#ifndef OMITRVkcA
    printLine("Calling 1kaUE()...");
    file_0114_fTqFB();
    printLine("Finished E2PmY()");
#endif
    return 0;
}

#endif
