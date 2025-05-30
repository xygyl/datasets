
#include "std_testcase.h"

#include <wchar.h>

static int staticTrue = 1;
static int staticFalse = 0;

namespace file_0430
{

#ifndef OMITXBsSk

void file_0430_9dNTh()
{
    long * data;
    data = NULL;
    if(staticTrue)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(staticTrue)
    {
        printLongLine(*data);
    }
}

#endif

#ifndef OMITeNYj0

static void file_0430_CXrnoB2G1()
{
    long * data;
    data = NULL;
    if(staticTrue)
    {
        data = new long;
        *data = 5L;
        delete data;
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

static void file_0430_kV8vsB2G2()
{
    long * data;
    data = NULL;
    if(staticTrue)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(staticTrue)
    {
        ;
    }
}

static void file_0430_aX0aTG2B1()
{
    long * data;
    data = NULL;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new long;
        *data = 5L;
    }
    if(staticTrue)
    {
        printLongLine(*data);
    }
}

static void file_0430_KnvEGG2B2()
{
    long * data;
    data = NULL;
    if(staticTrue)
    {
        data = new long;
        *data = 5L;
    }
    if(staticTrue)
    {
        printLongLine(*data);
    }
}

void file_0430_aP4ZX()
{
    file_0430_e3wOxB2G1();
    file_0430_k6PapB2G2();
    file_0430_YAjerG2B1();
    file_0430_cvmBvG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0430;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITB09ZM
    printLine("Calling cCXei()...");
    file_0430_nC4ZO();
    printLine("Finished 7t6QK()");
#endif
#ifndef OMIT2AaD6
    printLine("Calling YWLSO()...");
    file_0430_6XtXn();
    printLine("Finished c3p4c()");
#endif
    return 0;
}

#endif
