
#include "std_testcase.h"

#include <wchar.h>

namespace file_0410
{

#ifndef OMITujKiC

void file_0410_gw4lm()
{
    int * data;
    data = NULL;
    if(globalTrue)
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(globalTrue)
    {
        printIntLine(*data);
    }
}

#endif

#ifndef OMITWvMnN

static void file_0410_Ut6mEB2G1()
{
    int * data;
    data = NULL;
    if(globalTrue)
    {
        data = new int;
        *data = 5;
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

static void file_0410_7xN3LB2G2()
{
    int * data;
    data = NULL;
    if(globalTrue)
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(globalTrue)
    {
        ;
    }
}

static void file_0410_o1XtlG2B1()
{
    int * data;
    data = NULL;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int;
        *data = 5;
    }
    if(globalTrue)
    {
        printIntLine(*data);
    }
}

static void file_0410_64tvCG2B2()
{
    int * data;
    data = NULL;
    if(globalTrue)
    {
        data = new int;
        *data = 5;
    }
    if(globalTrue)
    {
        printIntLine(*data);
    }
}

void file_0410_qEOL8()
{
    file_0410_7LyuvB2G1();
    file_0410_nyriHB2G2();
    file_0410_hXjlJG2B1();
    file_0410_0FAXQG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0410;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT6KiEU
    printLine("Calling y7M5f()...");
    file_0410_a2PuC();
    printLine("Finished NAJwF()");
#endif
#ifndef OMITJy87C
    printLine("Calling 2fHGu()...");
    file_0410_Uc27r();
    printLine("Finished OMiZK()");
#endif
    return 0;
}

#endif
