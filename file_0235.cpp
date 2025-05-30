
#include "std_testcase.h"

#include <wchar.h>

namespace file_0235
{

#ifndef OMITp1gRW

void file_0235_mUdX6()
{
    int * data;
    data = NULL;
    if(globalTrue)
    {
        data = new int[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
        delete [] data;
    }
    if(globalTrue)
    {
        printIntLine(data[0]);
    }
}

#endif

#ifndef OMIT4OGDx

static void file_0235_IsNuGB2G1()
{
    int * data;
    data = NULL;
    if(globalTrue)
    {
        data = new int[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
        delete [] data;
    }
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0235_5NZpMB2G2()
{
    int * data;
    data = NULL;
    if(globalTrue)
    {
        data = new int[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
        delete [] data;
    }
    if(globalTrue)
    {
        ;
    }
}

static void file_0235_MsdoIG2B1()
{
    int * data;
    data = NULL;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
    }
    if(globalTrue)
    {
        printIntLine(data[0]);
    }
}

static void file_0235_NdWg3G2B2()
{
    int * data;
    data = NULL;
    if(globalTrue)
    {
        data = new int[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
    }
    if(globalTrue)
    {
        printIntLine(data[0]);
    }
}

void file_0235_uD4Re()
{
    file_0235_1q6NjB2G1();
    file_0235_JDut6B2G2();
    file_0235_O3HnmG2B1();
    file_0235_qrWxGG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0235;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITJFf4S
    printLine("Calling ev1NB()...");
    file_0235_YsOEp();
    printLine("Finished r7tz9()");
#endif
#ifndef OMITWhnOX
    printLine("Calling 1WoAx()...");
    file_0235_UoLnJ();
    printLine("Finished jYA6N()");
#endif
    return 0;
}

#endif
