
#include "std_testcase.h"

#include <wchar.h>

static const int STATIC_CONST_TRUE = 1;
static const int STATIC_CONST_FALSE = 0;

namespace file_0154
{

#ifndef OMITZjPEq

void file_0154_QcktQ()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        delete [] data;
    }
    if(STATIC_CONST_TRUE)
    {
        printLine(data);
    }
}

#endif

#ifndef OMIT1Atra

static void file_0154_pnLApB2G1()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
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

static void file_0154_5PKEGB2G2()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        delete [] data;
    }
    if(STATIC_CONST_TRUE)
    {
        ;
    }
}

static void file_0154_HwX6tG2B1()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
    }
    if(STATIC_CONST_TRUE)
    {
        printLine(data);
    }
}

static void file_0154_9ZSRSG2B2()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
    }
    if(STATIC_CONST_TRUE)
    {
        printLine(data);
    }
}

void file_0154_7QEw8()
{
    file_0154_h1dmhB2G1();
    file_0154_3ezseB2G2();
    file_0154_PrP2zG2B1();
    file_0154_cOEiyG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0154;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITtKWEG
    printLine("Calling IDRBT()...");
    file_0154_gUHtZ();
    printLine("Finished 1L6Cv()");
#endif
#ifndef OMIToDCbc
    printLine("Calling weIt7()...");
    file_0154_kK3Gp();
    printLine("Finished Rz29e()");
#endif
    return 0;
}

#endif
