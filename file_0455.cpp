
#include "std_testcase.h"

#include <wchar.h>

static int staticTrue = 1;
static int staticFalse = 0;

namespace file_0455
{

#ifndef OMITTrnM7

void file_0455_6n2Cq()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticTrue)
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(staticTrue)
    {
        printStructLine(data);
    }
}

#endif

#ifndef OMITnFvsi

static void file_0455_NU1kpB2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticTrue)
    {
        data = new twoIntsStruct;
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

static void file_0455_nK3nMB2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticTrue)
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(staticTrue)
    {
        ;
    }
}

static void file_0455_qMLXmG2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(staticTrue)
    {
        printStructLine(data);
    }
}

static void file_0455_fWQ2WG2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticTrue)
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(staticTrue)
    {
        printStructLine(data);
    }
}

void file_0455_ycpkf()
{
    file_0455_fs3yiB2G1();
    file_0455_R0ROkB2G2();
    file_0455_rztk1G2B1();
    file_0455_TtCjIG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0455;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITXxDXG
    printLine("Calling 4OVW9()...");
    file_0455_4oKql();
    printLine("Finished PCDdO()");
#endif
#ifndef OMITimoui
    printLine("Calling EZWPT()...");
    file_0455_Qf2YG();
    printLine("Finished zR7PB()");
#endif
    return 0;
}

#endif
