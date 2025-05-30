
#include "std_testcase.h"

#include <wchar.h>

static const int STATIC_CONST_TRUE = 1;
static const int STATIC_CONST_FALSE = 0;

#ifndef OMITJk9tb

void file_0104_AcEo3()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
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
    if(STATIC_CONST_TRUE)
    {
        printStructLine(&data[0]);
    }
}

#endif

#ifndef OMIT2rhj6

static void file_0104_i5AhLB2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
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
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0104_rlJTRB2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
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
    if(STATIC_CONST_TRUE)
    {
        ;
    }
}

static void file_0104_QHh0sG2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
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
    if(STATIC_CONST_TRUE)
    {
        printStructLine(&data[0]);
    }
}

static void file_0104_eqhRkG2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
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
    if(STATIC_CONST_TRUE)
    {
        printStructLine(&data[0]);
    }
}

void file_0104_sKkoW()
{
    file_0104_kl76zB2G1();
    file_0104_TFjMxB2G2();
    file_0104_NxVopG2B1();
    file_0104_BMAqkG2B2();
}

#endif

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITnSrjy
    printLine("Calling WIOrU()...");
    file_0104_H5GQH();
    printLine("Finished NICRD()");
#endif
#ifndef OMITNr7u3
    printLine("Calling DCy4t()...");
    file_0104_kn9bC();
    printLine("Finished PmpjS()");
#endif
    return 0;
}

#endif
