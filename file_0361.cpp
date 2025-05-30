
#include "std_testcase.h"

#include <wchar.h>

namespace file_0361
{

#ifndef OMITh2Qx0

void file_0361_4tvQ6()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(globalReturnsTrue())
    {
        printIntLine(data->intOne);
    }
}

#endif

#ifndef OMITok76p

static void file_0361_n7uUAB2G1()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0361_16u7oB2G2()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(globalReturnsTrue())
    {
        ;
    }
}

static void file_0361_JuDwMG2B1()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(globalReturnsTrue())
    {
        printIntLine(data->intOne);
    }
}

static void file_0361_CVPXqG2B2()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(globalReturnsTrue())
    {
        printIntLine(data->intOne);
    }
}

void file_0361_lXf7z()
{
    file_0361_wW0P9B2G1();
    file_0361_J5mPaB2G2();
    file_0361_S0BKAG2B1();
    file_0361_zIzYMG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0361;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITCwqw4
    printLine("Calling kaCJN()...");
    file_0361_PgUrA();
    printLine("Finished eKAFd()");
#endif
#ifndef OMITgIHyd
    printLine("Calling Net9R()...");
    file_0361_aIuRE();
    printLine("Finished Dr3pH()");
#endif
    return 0;
}

#endif
