
#include "std_testcase.h"

#include <wchar.h>

static int staticFive = 5;

namespace file_0257
{

#ifndef OMIT1lXBZ

void file_0257_oDQZ9()
{
    long * data;
    data = NULL;
    if(staticFive==5)
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
    if(staticFive==5)
    {
        printLongLine(data[0]);
    }
}

#endif

#ifndef OMIT6X5sD

static void file_0257_GD4y1B2G1()
{
    long * data;
    data = NULL;
    if(staticFive==5)
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
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0257_mUO7HB2G2()
{
    long * data;
    data = NULL;
    if(staticFive==5)
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
    if(staticFive==5)
    {
        ;
    }
}

static void file_0257_YKOtaG2B1()
{
    long * data;
    data = NULL;
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        printLongLine(data[0]);
    }
}

static void file_0257_gvZm8G2B2()
{
    long * data;
    data = NULL;
    if(staticFive==5)
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
    if(staticFive==5)
    {
        printLongLine(data[0]);
    }
}

void file_0257_DGTEE()
{
    file_0257_3CC2DB2G1();
    file_0257_6t0EFB2G2();
    file_0257_51ku5G2B1();
    file_0257_XUFLhG2B2();
}

#endif

}

#ifdef INCLUDEMAIN

using namespace file_0257;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT6AX7Z
    printLine("Calling WO7Pk()...");
    file_0257_3lcTK();
    printLine("Finished sDtU2()");
#endif
#ifndef OMITThxhO
    printLine("Calling gh3Ss()...");
    file_0257_ci4Xr();
    printLine("Finished ft85u()");
#endif
    return 0;
}

#endif
