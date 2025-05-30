
#include "std_testcase.h"

#include <wchar.h>

namespace file_0462
{

#ifndef OMITLsyWI

void file_0462_R1QLc()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    else
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(globalReturnsTrueOrFalse())
    {
        printStructLine(data);
    }
    else
    {
        ;
    }
}

#endif

#ifndef OMITWehns

static void file_0462_HOoXsB2G()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    else
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(globalReturnsTrueOrFalse())
    {
        ;
    }
    else
    {
        ;
    }
}

static void file_0462_hOsuvG2B()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
    }
    else
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(globalReturnsTrueOrFalse())
    {
        printStructLine(data);
    }
    else
    {
        printStructLine(data);
    }
}

void file_0462_F8hz5()
{
    file_0462_IKWNuB2G();
    file_0462_ih9diG2B();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0462;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIThtqCK
    printLine("Calling P0e7P()...");
    file_0462_QDbDt();
    printLine("Finished 3BWJr()");
#endif
#ifndef OMITN4LO1
    printLine("Calling T1tEB()...");
    file_0462_zZ63I();
    printLine("Finished orciu()");
#endif
    return 0;
}

#endif
