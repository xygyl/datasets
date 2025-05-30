
#include "std_testcase.h"

#include <wchar.h>

namespace file_0464
{

#ifndef OMITDA1cS

void file_0464_5ECpF()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(globalFive==5)
    {
        printStructLine(data);
    }
}

#endif

#ifndef OMITCBnCL

static void file_0464_W91kVB2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0464_1uIz9B2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(globalFive==5)
    {
        ;
    }
}

static void file_0464_rc3XRG2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(globalFive==5)
    {
        printStructLine(data);
    }
}

static void file_0464_CWGT8G2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(globalFive==5)
    {
        printStructLine(data);
    }
}

void file_0464_RgyeE()
{
    file_0464_AlBwGB2G1();
    file_0464_3zK6nB2G2();
    file_0464_49EBGG2B1();
    file_0464_tJK5QG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0464;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITmEx9B
    printLine("Calling xOdSN()...");
    file_0464_r5zNy();
    printLine("Finished KqfUB()");
#endif
#ifndef OMITu8KTT
    printLine("Calling aMqVA()...");
    file_0464_fFPxZ();
    printLine("Finished V6JSh()");
#endif
    return 0;
}

#endif
