
#include "std_testcase.h"

#include <wchar.h>

namespace file_0409
{

#ifndef OMITEpjaN

void file_0409_3zzVe()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(GLOBAL_CONST_TRUE)
    {
        printIntLine(*data);
    }
}

#endif

#ifndef OMITfZ4BH

static void file_0409_Plf9xB2G1()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0409_5sKtuB2G2()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(GLOBAL_CONST_TRUE)
    {
        ;
    }
}

static void file_0409_fg0yOG2B1()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int;
        *data = 5;
    }
    if(GLOBAL_CONST_TRUE)
    {
        printIntLine(*data);
    }
}

static void file_0409_1ktb4G2B2()
{
    int * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new int;
        *data = 5;
    }
    if(GLOBAL_CONST_TRUE)
    {
        printIntLine(*data);
    }
}

void file_0409_CFbeM()
{
    file_0409_2G4P3B2G1();
    file_0409_pE8JOB2G2();
    file_0409_IIsLFG2B1();
    file_0409_3h2NUG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0409;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITSMZX3
    printLine("Calling 8wDfK()...");
    file_0409_TqfZS();
    printLine("Finished mStkY()");
#endif
#ifndef OMITYVL4G
    printLine("Calling PdaEO()...");
    file_0409_IHTxw();
    printLine("Finished Bu8ZA()");
#endif
    return 0;
}

#endif
