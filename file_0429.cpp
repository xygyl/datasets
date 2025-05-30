
#include "std_testcase.h"

#include <wchar.h>

static const int STATIC_CONST_TRUE = 1;
static const int STATIC_CONST_FALSE = 0;

namespace file_0429
{

#ifndef OMITyLTci

void file_0429_aKmjT()
{
    long * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(STATIC_CONST_TRUE)
    {
        printLongLine(*data);
    }
}

#endif

#ifndef OMITzdIbH

static void file_0429_un8zKB2G1()
{
    long * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new long;
        *data = 5L;
        delete data;
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

static void file_0429_M3AFiB2G2()
{
    long * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(STATIC_CONST_TRUE)
    {
        ;
    }
}

static void file_0429_T5ukuG2B1()
{
    long * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new long;
        *data = 5L;
    }
    if(STATIC_CONST_TRUE)
    {
        printLongLine(*data);
    }
}

static void file_0429_MiFL2G2B2()
{
    long * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new long;
        *data = 5L;
    }
    if(STATIC_CONST_TRUE)
    {
        printLongLine(*data);
    }
}

void file_0429_ie1wx()
{
    file_0429_RX4ETB2G1();
    file_0429_psyxrB2G2();
    file_0429_L05OHG2B1();
    file_0429_aRSEBG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0429;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITgCz7Z
    printLine("Calling UTdRB()...");
    file_0429_Mctja();
    printLine("Finished B3f0h()");
#endif
#ifndef OMIT4PZ7t
    printLine("Calling PDYxm()...");
    file_0429_DWEpl();
    printLine("Finished mGrgW()");
#endif
    return 0;
}

#endif
