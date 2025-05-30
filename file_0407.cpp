
#include "std_testcase.h"

#include <wchar.h>

static int staticFive = 5;

namespace file_0407
{

#ifndef OMITmlrFS

void file_0407_U4lMl()
{
    int * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(staticFive==5)
    {
        printIntLine(*data);
    }
}

#endif

#ifndef OMITCZZRr

static void file_0407_aq0EzB2G1()
{
    int * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new int;
        *data = 5;
        delete data;
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

static void file_0407_VajwnB2G2()
{
    int * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(staticFive==5)
    {
        ;
    }
}

static void file_0407_wVJHOG2B1()
{
    int * data;
    data = NULL;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int;
        *data = 5;
    }
    if(staticFive==5)
    {
        printIntLine(*data);
    }
}

static void file_0407_YAXDEG2B2()
{
    int * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new int;
        *data = 5;
    }
    if(staticFive==5)
    {
        printIntLine(*data);
    }
}

void file_0407_QS6O3()
{
    file_0407_jv6xZB2G1();
    file_0407_UL2AsB2G2();
    file_0407_8YngAG2B1();
    file_0407_ngKapG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0407;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT4vqAr
    printLine("Calling WhuC0()...");
    file_0407_ouuFM();
    printLine("Finished N0ztn()");
#endif
#ifndef OMITu1OAj
    printLine("Calling S8H8b()...");
    file_0407_DoZpL();
    printLine("Finished vmoPH()");
#endif
    return 0;
}

#endif
