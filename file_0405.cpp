
#include "std_testcase.h"

#include <wchar.h>

static int staticTrue = 1;
static int staticFalse = 0;

namespace file_0405
{

#ifndef OMITBIOXP

void file_0405_balKz()
{
    int * data;
    data = NULL;
    if(staticTrue)
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(staticTrue)
    {
        printIntLine(*data);
    }
}

#endif

#ifndef OMIT5ZaZt

static void file_0405_ofDtOB2G1()
{
    int * data;
    data = NULL;
    if(staticTrue)
    {
        data = new int;
        *data = 5;
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

static void file_0405_5SdUeB2G2()
{
    int * data;
    data = NULL;
    if(staticTrue)
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(staticTrue)
    {
        ;
    }
}

static void file_0405_RaU6OG2B1()
{
    int * data;
    data = NULL;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int;
        *data = 5;
    }
    if(staticTrue)
    {
        printIntLine(*data);
    }
}

static void file_0405_48lo0G2B2()
{
    int * data;
    data = NULL;
    if(staticTrue)
    {
        data = new int;
        *data = 5;
    }
    if(staticTrue)
    {
        printIntLine(*data);
    }
}

void file_0405_JFn1B()
{
    file_0405_GhNEOB2G1();
    file_0405_qfbdYB2G2();
    file_0405_LbIBdG2B1();
    file_0405_cBX7HG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0405;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITCqrtd
    printLine("Calling fMTYa()...");
    file_0405_Sx1rW();
    printLine("Finished ZgyHm()");
#endif
#ifndef OMIT9WjpQ
    printLine("Calling OxfP3()...");
    file_0405_2x8Gh();
    printLine("Finished Y2VgT()");
#endif
    return 0;
}

#endif
