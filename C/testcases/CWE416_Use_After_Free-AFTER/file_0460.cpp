
#include "std_testcase.h"

#include <wchar.h>

namespace file_0460
{

#ifndef OMIToWbIT

void file_0460_68xNp()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalTrue)
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(globalTrue)
    {
        printStructLine(data);
    }
}

#endif

#ifndef OMIT6kPic

static void file_0460_7uXt0B2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalTrue)
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
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

static void file_0460_RPuILB2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalTrue)
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(globalTrue)
    {
        ;
    }
}

static void file_0460_2Ed8AG2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(globalTrue)
    {
        printStructLine(data);
    }
}

static void file_0460_7gKShG2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalTrue)
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(globalTrue)
    {
        printStructLine(data);
    }
}

void file_0460_31hA7()
{
    file_0460_eztdkB2G1();
    file_0460_lm7k0B2G2();
    file_0460_QOGgFG2B1();
    file_0460_2BRQhG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0460;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITATaSb
    printLine("Calling BggXS()...");
    file_0460_BcUTL();
    printLine("Finished tBGld()");
#endif
#ifndef OMITrhLFz
    printLine("Calling cgCH0()...");
    file_0460_pyPEh();
    printLine("Finished iqS9e()");
#endif
    return 0;
}

#endif
