
#include "std_testcase.h"

#include <wchar.h>

static int staticTrue = 1;
static int staticFalse = 0;

namespace file_0355
{

#ifndef OMITETefc

void file_0355_kX8xX()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticTrue)
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(staticTrue)
    {
        printIntLine(data->intOne);
    }
}

#endif

#ifndef OMITlX3Wl

static void file_0355_WFGjfB2G1()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticTrue)
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
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

static void file_0355_mhgH8B2G2()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticTrue)
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(staticTrue)
    {
        ;
    }
}

static void file_0355_uut28G2B1()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(staticTrue)
    {
        printIntLine(data->intOne);
    }
}

static void file_0355_CYyFGG2B2()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticTrue)
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(staticTrue)
    {
        printIntLine(data->intOne);
    }
}

void file_0355_bms4E()
{
    file_0355_GQJCeB2G1();
    file_0355_0dausB2G2();
    file_0355_1Ax5RG2B1();
    file_0355_PKYkQG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0355;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITj8XBw
    printLine("Calling v2t7B()...");
    file_0355_g05Wl();
    printLine("Finished AGJob()");
#endif
#ifndef OMITJSXTW
    printLine("Calling B1QcC()...");
    file_0355_129KJ();
    printLine("Finished H7gIU()");
#endif
    return 0;
}

#endif
