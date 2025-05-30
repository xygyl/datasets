
#include "std_testcase.h"

#include <wchar.h>

namespace file_0436
{

#ifndef OMITqjDvr

void file_0436_5RXyW()
{
    long * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(globalReturnsTrue())
    {
        printLongLine(*data);
    }
}

#endif

#ifndef OMITcGFou

static void file_0436_ACHdpB2G1()
{
    long * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new long;
        *data = 5L;
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

static void file_0436_w6yqPB2G2()
{
    long * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(globalReturnsTrue())
    {
        ;
    }
}

static void file_0436_0m6itG2B1()
{
    long * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new long;
        *data = 5L;
    }
    if(globalReturnsTrue())
    {
        printLongLine(*data);
    }
}

static void file_0436_6RbAoG2B2()
{
    long * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new long;
        *data = 5L;
    }
    if(globalReturnsTrue())
    {
        printLongLine(*data);
    }
}

void file_0436_PGbxW()
{
    file_0436_K8vaWB2G1();
    file_0436_u7qp5B2G2();
    file_0436_ZNWlrG2B1();
    file_0436_SbcsdG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0436;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITnSxG3
    printLine("Calling L2Drk()...");
    file_0436_h5uO0();
    printLine("Finished hdSiv()");
#endif
#ifndef OMITsxFtz
    printLine("Calling SMUn1()...");
    file_0436_4fZHu();
    printLine("Finished pNhyf()");
#endif
    return 0;
}

#endif
