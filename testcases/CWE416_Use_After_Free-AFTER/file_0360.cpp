
#include "std_testcase.h"

#include <wchar.h>

namespace file_0360
{

#ifndef OMITlUysD

void file_0360_y9cQJ()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalTrue)
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(globalTrue)
    {
        printIntLine(data->intOne);
    }
}

#endif

#ifndef OMITvR3ak

static void file_0360_71tNuB2G1()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalTrue)
    {
        data = new TwoIntsClass;
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

static void file_0360_IXQPxB2G2()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalTrue)
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(globalTrue)
    {
        ;
    }
}

static void file_0360_ey8haG2B1()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(globalTrue)
    {
        printIntLine(data->intOne);
    }
}

static void file_0360_mCib3G2B2()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalTrue)
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(globalTrue)
    {
        printIntLine(data->intOne);
    }
}

void file_0360_7ZKvz()
{
    file_0360_Oz9DOB2G1();
    file_0360_hNG4uB2G2();
    file_0360_s8WAIG2B1();
    file_0360_kxcnvG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0360;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITenu9M
    printLine("Calling dde7b()...");
    file_0360_WAPxw();
    printLine("Finished 7cCGd()");
#endif
#ifndef OMITUEyga
    printLine("Calling FiOZB()...");
    file_0360_nreJE();
    printLine("Finished ihRek()");
#endif
    return 0;
}

#endif
