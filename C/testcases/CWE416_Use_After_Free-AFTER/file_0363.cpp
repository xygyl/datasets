
#include "std_testcase.h"

#include <wchar.h>

namespace file_0363
{

#ifndef OMITau6Wl

void file_0363_DUhEm()
{
    TwoIntsClass * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        printIntLine(data->intOne);
    }
}

#endif

#ifndef OMITFQgmc

static void file_0363_zygEyB2G1()
{
    TwoIntsClass * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0363_EmH6AB2G2()
{
    TwoIntsClass * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        ;
    }
}

static void file_0363_ZI7iQG2B1()
{
    TwoIntsClass * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        printIntLine(data->intOne);
    }
}

static void file_0363_7dr3jG2B2()
{
    TwoIntsClass * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        printIntLine(data->intOne);
    }
}

void file_0363_As0TO()
{
    file_0363_I0FRVB2G1();
    file_0363_M7tdcB2G2();
    file_0363_FeZJmG2B1();
    file_0363_A7QVWG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0363;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITQxPzM
    printLine("Calling lT610()...");
    file_0363_wcZFU();
    printLine("Finished iyCPa()");
#endif
#ifndef OMITF7iPO
    printLine("Calling w2Dr5()...");
    file_0363_td4L9();
    printLine("Finished mRYgQ()");
#endif
    return 0;
}

#endif
