
#include "std_testcase.h"

#include <wchar.h>

static int staticTrue = 1;
static int staticFalse = 0;

namespace file_0255
{

#ifndef OMITcIgnT

void file_0255_Svhg7()
{
    long * data;
    data = NULL;
    if(staticTrue)
    {
        data = new long[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
        delete [] data;
    }
    if(staticTrue)
    {
        printLongLine(data[0]);
    }
}

#endif

#ifndef OMITdUOE0

static void file_0255_3XKkcB2G1()
{
    long * data;
    data = NULL;
    if(staticTrue)
    {
        data = new long[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
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

static void file_0255_I8KEIB2G2()
{
    long * data;
    data = NULL;
    if(staticTrue)
    {
        data = new long[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
        delete [] data;
    }
    if(staticTrue)
    {
        ;
    }
}

static void file_0255_WFBMTG2B1()
{
    long * data;
    data = NULL;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new long[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
    }
    if(staticTrue)
    {
        printLongLine(data[0]);
    }
}

static void file_0255_cZPiBG2B2()
{
    long * data;
    data = NULL;
    if(staticTrue)
    {
        data = new long[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
    }
    if(staticTrue)
    {
        printLongLine(data[0]);
    }
}

void file_0255_MiCfp()
{
    file_0255_f7qXHB2G1();
    file_0255_loztXB2G2();
    file_0255_oXutfG2B1();
    file_0255_0YqHXG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0255;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITTIeOE
    printLine("Calling YgGwH()...");
    file_0255_G8wwD();
    printLine("Finished Qb8Pz()");
#endif
#ifndef OMITy4ZJK
    printLine("Calling gekr0()...");
    file_0255_wyB6s();
    printLine("Finished LRYRu()");
#endif
    return 0;
}

#endif
