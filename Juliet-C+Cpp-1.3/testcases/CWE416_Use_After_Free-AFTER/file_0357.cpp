
#include "std_testcase.h"

#include <wchar.h>

static int staticFive = 5;

namespace file_0357
{

#ifndef OMITX8cri

void file_0357_nps01()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(staticFive==5)
    {
        printIntLine(data->intOne);
    }
}

#endif

#ifndef OMITwy1Pk

static void file_0357_XXPuQB2G1()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
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

static void file_0357_zuW4ZB2G2()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(staticFive==5)
    {
        ;
    }
}

static void file_0357_D9I46G2B1()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(staticFive==5)
    {
        printIntLine(data->intOne);
    }
}

static void file_0357_8XD6xG2B2()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(staticFive==5)
    {
        printIntLine(data->intOne);
    }
}

void file_0357_TQwij()
{
    file_0357_9dUWXB2G1();
    file_0357_G9du0B2G2();
    file_0357_XGuhXG2B1();
    file_0357_4qhulG2B2();
}

#endif

}

#ifdef INCLUDEMAIN

using namespace file_0357;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT8L7jU
    printLine("Calling fLL2x()...");
    file_0357_VVsN0();
    printLine("Finished zRJ2U()");
#endif
#ifndef OMITfvy3T
    printLine("Calling wQnXR()...");
    file_0357_fJV2M();
    printLine("Finished Pl0OR()");
#endif
    return 0;
}

#endif
