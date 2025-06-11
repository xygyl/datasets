
#include "std_testcase.h"

#include <wchar.h>

static int staticReturnsTrue()
{
    return 1;
}

static int staticReturnsFalse()
{
    return 0;
}

namespace file_0458
{

#ifndef OMITUKvw2

void file_0458_tK1Wh()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(staticReturnsTrue())
    {
        printStructLine(data);
    }
}

#endif

#ifndef OMITDOyjz

static void file_0458_7dpjFB2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(staticReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0458_p2ERqB2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(staticReturnsTrue())
    {
        ;
    }
}

static void file_0458_c6546G2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(staticReturnsTrue())
    {
        printStructLine(data);
    }
}

static void file_0458_B12OQG2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(staticReturnsTrue())
    {
        printStructLine(data);
    }
}

void file_0458_lwGkB()
{
    file_0458_4zCOOB2G1();
    file_0458_tIAR0B2G2();
    file_0458_xTNrgG2B1();
    file_0458_szuS7G2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0458;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITdQnSW
    printLine("Calling LTSoZ()...");
    file_0458_rQRYm();
    printLine("Finished WpuYn()");
#endif
#ifndef OMITFAPJp
    printLine("Calling bliMh()...");
    file_0458_5wgxS();
    printLine("Finished 4JXci()");
#endif
    return 0;
}

#endif
