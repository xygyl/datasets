
#include "std_testcase.h"

#include <wchar.h>

static const int STATIC_CONST_TRUE = 1;
static const int STATIC_CONST_FALSE = 0;

namespace file_0279
{

#ifndef OMITtYL2h

void file_0279_JjbZg()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new twoIntsStruct[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        delete [] data;
    }
    if(STATIC_CONST_TRUE)
    {
        printStructLine(&data[0]);
    }
}

#endif

#ifndef OMIT2Fygo

static void file_0279_SQrfRB2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new twoIntsStruct[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        delete [] data;
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

static void file_0279_y3w88B2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new twoIntsStruct[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        delete [] data;
    }
    if(STATIC_CONST_TRUE)
    {
        ;
    }
}

static void file_0279_ET7WrG2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new twoIntsStruct[100];
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

static void file_0279_KsIdtG2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new twoIntsStruct[100];
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

void file_0279_mhuDc()
{
    file_0279_T5JqDB2G1();
    file_0279_Trgg8B2G2();
    file_0279_0rz5kG2B1();
    file_0279_EpeTmG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0279;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITnq7wt
    printLine("Calling CJu2E()...");
    file_0279_9r4Ru();
    printLine("Finished NCS47()");
#endif
#ifndef OMITrkwZT
    printLine("Calling HYyW2()...");
    file_0279_7fLtS();
    printLine("Finished ez6Wi()");
#endif
    return 0;
}

#endif
