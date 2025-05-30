
#include "std_testcase.h"

#include <wchar.h>

static const int STATIC_CONST_TRUE = 1;
static const int STATIC_CONST_FALSE = 0;

namespace file_0354
{

#ifndef OMITr6lEE

void file_0354_JJfuC()
{
    TwoIntsClass * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(STATIC_CONST_TRUE)
    {
        printIntLine(data->intOne);
    }
}

#endif

#ifndef OMIT6Digr

static void file_0354_w5E6EB2G1()
{
    TwoIntsClass * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0354_OHz76B2G2()
{
    TwoIntsClass * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(STATIC_CONST_TRUE)
    {
        ;
    }
}

static void file_0354_9kOFzG2B1()
{
    TwoIntsClass * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(STATIC_CONST_TRUE)
    {
        printIntLine(data->intOne);
    }
}

static void file_0354_XeHScG2B2()
{
    TwoIntsClass * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(STATIC_CONST_TRUE)
    {
        printIntLine(data->intOne);
    }
}

void file_0354_zEJNj()
{
    file_0354_nkw48B2G1();
    file_0354_Lo7V5B2G2();
    file_0354_1qEQ8G2B1();
    file_0354_kcpRZG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0354;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITXOm0t
    printLine("Calling IEk7D()...");
    file_0354_1h1th();
    printLine("Finished 9SZ2W()");
#endif
#ifndef OMITNmIuI
    printLine("Calling m6OQU()...");
    file_0354_E4r1N();
    printLine("Finished b72kP()");
#endif
    return 0;
}

#endif
