
#include "std_testcase.h"

#include <wchar.h>

namespace file_0411
{

#ifndef OMITA2vQ6

void file_0411_s7Vym()
{
    int * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(globalReturnsTrue())
    {
        printIntLine(*data);
    }
}

#endif

#ifndef OMIT6DjzO

static void file_0411_xSuI6B2G1()
{
    int * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new int;
        *data = 5;
        delete data;
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

static void file_0411_iVSinB2G2()
{
    int * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(globalReturnsTrue())
    {
        ;
    }
}

static void file_0411_vMtAxG2B1()
{
    int * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int;
        *data = 5;
    }
    if(globalReturnsTrue())
    {
        printIntLine(*data);
    }
}

static void file_0411_HGfQHG2B2()
{
    int * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new int;
        *data = 5;
    }
    if(globalReturnsTrue())
    {
        printIntLine(*data);
    }
}

void file_0411_8NykG()
{
    file_0411_MXptPB2G1();
    file_0411_zfyudB2G2();
    file_0411_99N6EG2B1();
    file_0411_GkXZFG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0411;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITbB6gn
    printLine("Calling VRSPL()...");
    file_0411_WACDv();
    printLine("Finished dER6U()");
#endif
#ifndef OMITDYs3R
    printLine("Calling rCLpQ()...");
    file_0411_TaXzq();
    printLine("Finished K6vFC()");
#endif
    return 0;
}

#endif
