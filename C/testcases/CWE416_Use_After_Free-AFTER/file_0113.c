
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITWA2Zc

void file_0113_bJSEB()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
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
    if(GLOBAL_CONST_FIVE==5)
    {
        printStructLine(&data[0]);
    }
}

#endif

#ifndef OMIToRgwu

static void file_0113_eehW5B2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
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
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0113_twOmUB2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
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
    if(GLOBAL_CONST_FIVE==5)
    {
        ;
    }
}

static void file_0113_TJa3cG2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE!=5)
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
    if(GLOBAL_CONST_FIVE==5)
    {
        printStructLine(&data[0]);
    }
}

static void file_0113_qiG6qG2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
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
    if(GLOBAL_CONST_FIVE==5)
    {
        printStructLine(&data[0]);
    }
}

void file_0113_AGbyX()
{
    file_0113_UHxDrB2G1();
    file_0113_OtNI9B2G2();
    file_0113_B4LsVG2B1();
    file_0113_FwmJgG2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITwW8D5
    printLine("Calling 3et3Z()...");
    file_0113_svieq();
    printLine("Finished Cjp2y()");
#endif
#ifndef OMITPeRbf
    printLine("Calling VqqY0()...");
    file_0113_h2DRy();
    printLine("Finished bYJ6x()");
#endif
    return 0;
}

#endif
