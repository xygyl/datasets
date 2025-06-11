
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

namespace file_0433
{

#ifndef OMITaePSR

void file_0433_y3RHf()
{
    long * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(staticReturnsTrue())
    {
        printLongLine(*data);
    }
}

#endif

#ifndef OMITltQ44

static void file_0433_BuwIfB2G1()
{
    long * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new long;
        *data = 5L;
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

static void file_0433_i4uZHB2G2()
{
    long * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(staticReturnsTrue())
    {
        ;
    }
}

static void file_0433_dzojeG2B1()
{
    long * data;
    data = NULL;
    if(staticReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new long;
        *data = 5L;
    }
    if(staticReturnsTrue())
    {
        printLongLine(*data);
    }
}

static void file_0433_MxqVvG2B2()
{
    long * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new long;
        *data = 5L;
    }
    if(staticReturnsTrue())
    {
        printLongLine(*data);
    }
}

void file_0433_a1fMr()
{
    file_0433_DAiNHB2G1();
    file_0433_WdHhnB2G2();
    file_0433_RN3KCG2B1();
    file_0433_Q92cvG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0433;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT9shVA
    printLine("Calling YaNcc()...");
    file_0433_M3CTZ();
    printLine("Finished 5wceA()");
#endif
#ifndef OMITPIWxO
    printLine("Calling nQ6NP()...");
    file_0433_fPLGX();
    printLine("Finished 5pFLP()");
#endif
    return 0;
}

#endif
