
#include "std_testcase.h"

#include <wchar.h>

namespace file_0362
{

#ifndef OMIT1ig3V

void file_0362_d00w5()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    else
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(globalReturnsTrueOrFalse())
    {
        printIntLine(data->intOne);
    }
    else
    {
        ;
    }
}

#endif

#ifndef OMIT547zZ

static void file_0362_UsvklB2G()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    else
    {
        data = new TwoIntsClass;
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

static void file_0362_kHF15G2B()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
    }
    else
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(globalReturnsTrueOrFalse())
    {
        printIntLine(data->intOne);
    }
    else
    {
        printIntLine(data->intOne);
    }
}

void file_0362_K70lw()
{
    file_0362_pxuUyB2G();
    file_0362_roOEJG2B();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0362;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITr1VMB
    printLine("Calling oEHRD()...");
    file_0362_kMc1C();
    printLine("Finished qHHtW()");
#endif
#ifndef OMITA4ysB
    printLine("Calling FM7iT()...");
    file_0362_8lUs9();
    printLine("Finished rUVS1()");
#endif
    return 0;
}

#endif
