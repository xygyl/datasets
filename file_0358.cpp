
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

namespace file_0358
{

#ifndef OMITZT0px

void file_0358_f3Au9()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(staticReturnsTrue())
    {
        printIntLine(data->intOne);
    }
}

#endif

#ifndef OMITNsjFI

static void file_0358_63hi8B2G1()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new TwoIntsClass;
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

static void file_0358_vxC6hB2G2()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(staticReturnsTrue())
    {
        ;
    }
}

static void file_0358_eoauUG2B1()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(staticReturnsTrue())
    {
        printIntLine(data->intOne);
    }
}

static void file_0358_VugIRG2B2()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new TwoIntsClass;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(staticReturnsTrue())
    {
        printIntLine(data->intOne);
    }
}

void file_0358_GULO5()
{
    file_0358_lC7BUB2G1();
    file_0358_4P1UVB2G2();
    file_0358_d1CyQG2B1();
    file_0358_utY6uG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0358;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITrcxhB
    printLine("Calling Aoxkm()...");
    file_0358_3sL61();
    printLine("Finished jmKyQ()");
#endif
#ifndef OMITkPhRK
    printLine("Calling Vnx0q()...");
    file_0358_NdXlo();
    printLine("Finished UADNU()");
#endif
    return 0;
}

#endif
