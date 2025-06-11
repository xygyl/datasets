
#include "std_testcase.h"

#include <wchar.h>

namespace file_0236
{

#ifndef OMITBdvHc

void file_0236_PJK5l()
{
    int * data;
    data = NULL;
    if(globalReturnsTrue())
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
    if(globalReturnsTrue())
    {
        printIntLine(data[0]);
    }
}

#endif

#ifndef OMIT7fEWc

static void file_0236_XQX4sB2G1()
{
    int * data;
    data = NULL;
    if(globalReturnsTrue())
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
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0236_JWngyB2G2()
{
    int * data;
    data = NULL;
    if(globalReturnsTrue())
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
    if(globalReturnsTrue())
    {
        ;
    }
}

static void file_0236_BClykG2B1()
{
    int * data;
    data = NULL;
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        printIntLine(data[0]);
    }
}

static void file_0236_JgmqrG2B2()
{
    int * data;
    data = NULL;
    if(globalReturnsTrue())
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
    if(globalReturnsTrue())
    {
        printIntLine(data[0]);
    }
}

void file_0236_YuplZ()
{
    file_0236_rVHkrB2G1();
    file_0236_rtkkDB2G2();
    file_0236_nQcFTG2B1();
    file_0236_BdweqG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0236;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITDrEdk
    printLine("Calling m2UEL()...");
    file_0236_sIa0K();
    printLine("Finished n3v09()");
#endif
#ifndef OMITiITJC
    printLine("Calling bs5zB()...");
    file_0236_vBiRZ();
    printLine("Finished UZFrZ()");
#endif
    return 0;
}

#endif
