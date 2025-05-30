
#include "std_testcase.h"

#include <wchar.h>

static int staticReturnsTrue()
{
    return 1;
}

static int staticReturnsFalse()
{
    return 0;
}

#ifndef OMITFIUCQ

void file_0108_9P0hp()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticReturnsTrue())
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
    if(staticReturnsTrue())
    {
        printStructLine(&data[0]);
    }
}

#endif

#ifndef OMITfmp1u

static void file_0108_2go7AB2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticReturnsTrue())
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
    if(staticReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0108_vapsFB2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticReturnsTrue())
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
    if(staticReturnsTrue())
    {
        ;
    }
}

static void file_0108_HzCloG2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticReturnsFalse())
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
    if(staticReturnsTrue())
    {
        printStructLine(&data[0]);
    }
}

static void file_0108_xXWQZG2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticReturnsTrue())
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
    if(staticReturnsTrue())
    {
        printStructLine(&data[0]);
    }
}

void file_0108_Mctvh()
{
    file_0108_uPOEhB2G1();
    file_0108_FCUUVB2G2();
    file_0108_xiiz2G2B1();
    file_0108_GgzRAG2B2();
}

#endif

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITMsvYl
    printLine("Calling almZO()...");
    file_0108_9p9IX();
    printLine("Finished kjsj3()");
#endif
#ifndef OMITWmldq
    printLine("Calling 6PhMS()...");
    file_0108_unexr();
    printLine("Finished Cc2FF()");
#endif
    return 0;
}

#endif
