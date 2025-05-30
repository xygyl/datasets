
#include "std_testcase.h"

#include <wchar.h>

static int staticTrue = 1;
static int staticFalse = 0;

namespace file_0230
{

#ifndef OMITqjgTq

void file_0230_Tiiij()
{
    int * data;
    data = NULL;
    if(staticTrue)
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
    if(staticTrue)
    {
        printIntLine(data[0]);
    }
}

#endif

#ifndef OMITLWBm9

static void file_0230_FdYu8B2G1()
{
    int * data;
    data = NULL;
    if(staticTrue)
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
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0230_LhcSQB2G2()
{
    int * data;
    data = NULL;
    if(staticTrue)
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
    if(staticTrue)
    {
        ;
    }
}

static void file_0230_mwGcNG2B1()
{
    int * data;
    data = NULL;
    if(staticFalse)
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
    if(staticTrue)
    {
        printIntLine(data[0]);
    }
}

static void file_0230_AWdoRG2B2()
{
    int * data;
    data = NULL;
    if(staticTrue)
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
    if(staticTrue)
    {
        printIntLine(data[0]);
    }
}

void file_0230_7iuvG()
{
    file_0230_enKxgB2G1();
    file_0230_IQCOsB2G2();
    file_0230_148MwG2B1();
    file_0230_6nG9KG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0230;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT8Irmm
    printLine("Calling xDy3F()...");
    file_0230_AD6DR();
    printLine("Finished osh6d()");
#endif
#ifndef OMITlopzX
    printLine("Calling 8krVC()...");
    file_0230_v60Uw();
    printLine("Finished b4IBi()");
#endif
    return 0;
}

#endif
