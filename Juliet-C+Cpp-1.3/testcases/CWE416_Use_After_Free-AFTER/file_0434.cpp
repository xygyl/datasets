
#include "std_testcase.h"

#include <wchar.h>

namespace file_0434
{

#ifndef OMITd4TjQ

void file_0434_LPY5j()
{
    long * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(GLOBAL_CONST_TRUE)
    {
        printLongLine(*data);
    }
}

#endif

#ifndef OMIT0Tb2T

static void file_0434_iLeCCB2G1()
{
    long * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0434_Pwy9IB2G2()
{
    long * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(GLOBAL_CONST_TRUE)
    {
        ;
    }
}

static void file_0434_HUB7rG2B1()
{
    long * data;
    data = NULL;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new long;
        *data = 5L;
    }
    if(GLOBAL_CONST_TRUE)
    {
        printLongLine(*data);
    }
}

static void file_0434_rClU9G2B2()
{
    long * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new long;
        *data = 5L;
    }
    if(GLOBAL_CONST_TRUE)
    {
        printLongLine(*data);
    }
}

void file_0434_tOfHn()
{
    file_0434_UT2SiB2G1();
    file_0434_HtkCeB2G2();
    file_0434_adB4QG2B1();
    file_0434_rTu4JG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0434;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITfqzIh
    printLine("Calling FVdw7()...");
    file_0434_JIEeD();
    printLine("Finished BKyAD()");
#endif
#ifndef OMITkNV1W
    printLine("Calling mIhmz()...");
    file_0434_W8SDu();
    printLine("Finished pR2qd()");
#endif
    return 0;
}

#endif
