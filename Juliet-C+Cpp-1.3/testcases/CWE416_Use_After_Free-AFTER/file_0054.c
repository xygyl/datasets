
#include "std_testcase.h"

#include <wchar.h>

static const int STATIC_CONST_TRUE = 1;
static const int STATIC_CONST_FALSE = 0;

#ifndef OMITB64Pm

void file_0054_9lRhH()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
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
    }
    if(STATIC_CONST_TRUE)
    {
        printIntLine(data[0]);
    }
}

#endif

#ifndef OMITaJpgh

static void file_0054_etDGBB2G1()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
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
    }
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0054_h9GDVB2G2()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
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
    }
    if(STATIC_CONST_TRUE)
    {
        ;
    }
}

static void file_0054_MksmUG2B1()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
    }
    if(STATIC_CONST_TRUE)
    {
        printIntLine(data[0]);
    }
}

static void file_0054_EbJqkG2B2()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
    }
    if(STATIC_CONST_TRUE)
    {
        printIntLine(data[0]);
    }
}

void file_0054_yGVVx()
{
    file_0054_vcVLEB2G1();
    file_0054_WwA32B2G2();
    file_0054_TKeCRG2B1();
    file_0054_YmEayG2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITKxRYW
    printLine("Calling dHbF0()...");
    file_0054_a8eJA();
    printLine("Finished lBx8Y()");
#endif
#ifndef OMITkKvRm
    printLine("Calling XEdmd()...");
    file_0054_63mb9();
    printLine("Finished AHaIc()");
#endif
    return 0;
}

#endif
