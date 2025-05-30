
#include "std_testcase.h"

#include <wchar.h>

namespace file_0435
{

#ifndef OMITfFyX1

void file_0435_rNq0C()
{
    long * data;
    data = NULL;
    if(globalTrue)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(globalTrue)
    {
        printLongLine(*data);
    }
}

#endif

#ifndef OMITBCxPG

static void file_0435_rY18dB2G1()
{
    long * data;
    data = NULL;
    if(globalTrue)
    {
        data = new long;
        *data = 5L;
        delete data;
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

static void file_0435_AiPZcB2G2()
{
    long * data;
    data = NULL;
    if(globalTrue)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(globalTrue)
    {
        ;
    }
}

static void file_0435_cM0NXG2B1()
{
    long * data;
    data = NULL;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new long;
        *data = 5L;
    }
    if(globalTrue)
    {
        printLongLine(*data);
    }
}

static void file_0435_iTVSdG2B2()
{
    long * data;
    data = NULL;
    if(globalTrue)
    {
        data = new long;
        *data = 5L;
    }
    if(globalTrue)
    {
        printLongLine(*data);
    }
}

void file_0435_or1ZD()
{
    file_0435_NgEkUB2G1();
    file_0435_h9eMGB2G2();
    file_0435_uAKjaG2B1();
    file_0435_ERSU4G2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0435;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITkGHhk
    printLine("Calling XEfuA()...");
    file_0435_ioSp5();
    printLine("Finished inZUd()");
#endif
#ifndef OMIT88ERY
    printLine("Calling pRUYr()...");
    file_0435_3BAfG();
    printLine("Finished Smujy()");
#endif
    return 0;
}

#endif
