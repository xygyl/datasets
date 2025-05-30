
#include "std_testcase.h"

#include <wchar.h>

namespace file_0211
{

#ifndef OMITk2hBp

void file_0211_3HWRu()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsTrue())
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
    if(globalReturnsTrue())
    {
        printLongLongLine(data[0]);
    }
}

#endif

#ifndef OMITsqlvk

static void file_0211_8gyvLB2G1()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsTrue())
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
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0211_rztsQB2G2()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsTrue())
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
    if(globalReturnsTrue())
    {
        ;
    }
}

static void file_0211_o8f50G2B1()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        printLongLongLine(data[0]);
    }
}

static void file_0211_W1l0oG2B2()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsTrue())
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
    if(globalReturnsTrue())
    {
        printLongLongLine(data[0]);
    }
}

void file_0211_3AbwE()
{
    file_0211_yE0uIB2G1();
    file_0211_ctEsFB2G2();
    file_0211_hW08WG2B1();
    file_0211_3RiGdG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0211;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITi6Ed8
    printLine("Calling 25Hc7()...");
    file_0211_j2ZQW();
    printLine("Finished 0asS1()");
#endif
#ifndef OMITHBdn4
    printLine("Calling sk6FY()...");
    file_0211_2FHhS();
    printLine("Finished uE1MA()");
#endif
    return 0;
}

#endif
