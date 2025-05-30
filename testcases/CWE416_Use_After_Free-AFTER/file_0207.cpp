
#include "std_testcase.h"

#include <wchar.h>

static int staticFive = 5;

namespace file_0207
{

#ifndef OMITRd7YR

void file_0207_Qcpa6()
{
    int64_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new int64_t[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
        delete [] data;
    }
    if(staticFive==5)
    {
        printLongLongLine(data[0]);
    }
}

#endif

#ifndef OMITRHdcS

static void file_0207_szPo5B2G1()
{
    int64_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new int64_t[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
        delete [] data;
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

static void file_0207_OKMDoB2G2()
{
    int64_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new int64_t[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
        delete [] data;
    }
    if(staticFive==5)
    {
        ;
    }
}

static void file_0207_qbDTLG2B1()
{
    int64_t * data;
    data = NULL;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int64_t[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
    }
    if(staticFive==5)
    {
        printLongLongLine(data[0]);
    }
}

static void file_0207_YG4mJG2B2()
{
    int64_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new int64_t[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
    }
    if(staticFive==5)
    {
        printLongLongLine(data[0]);
    }
}

void file_0207_DCNww()
{
    file_0207_CIQ7gB2G1();
    file_0207_ZOaNIB2G2();
    file_0207_YKrNmG2B1();
    file_0207_gHkNKG2B2();
}

#endif

}

#ifdef INCLUDEMAIN

using namespace file_0207;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITCYqj7
    printLine("Calling P67NL()...");
    file_0207_IXoA8();
    printLine("Finished FhPgI()");
#endif
#ifndef OMITpjagy
    printLine("Calling uHMR8()...");
    file_0207_owFdH();
    printLine("Finished qxZLp()");
#endif
    return 0;
}

#endif
