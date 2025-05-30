
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

namespace file_0333
{

#ifndef OMITKrPbJ

void file_0333_MsVUy()
{
    char * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new char;
        *data = 'A';
        delete data;
    }
    if(staticReturnsTrue())
    {
        printHexCharLine(*data);
    }
}

#endif

#ifndef OMITRqmI9

static void file_0333_wda8lB2G1()
{
    char * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new char;
        *data = 'A';
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

static void file_0333_dMJRVB2G2()
{
    char * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new char;
        *data = 'A';
        delete data;
    }
    if(staticReturnsTrue())
    {
        ;
    }
}

static void file_0333_MHjsgG2B1()
{
    char * data;
    data = NULL;
    if(staticReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char;
        *data = 'A';
    }
    if(staticReturnsTrue())
    {
        printHexCharLine(*data);
    }
}

static void file_0333_mavSNG2B2()
{
    char * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new char;
        *data = 'A';
    }
    if(staticReturnsTrue())
    {
        printHexCharLine(*data);
    }
}

void file_0333_pZjtL()
{
    file_0333_WFrLOB2G1();
    file_0333_gQSKqB2G2();
    file_0333_J0eAoG2B1();
    file_0333_SMaJeG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0333;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITWcBS2
    printLine("Calling oJkPL()...");
    file_0333_Jz23w();
    printLine("Finished Dy4i4()");
#endif
#ifndef OMITokxYd
    printLine("Calling tecu3()...");
    file_0333_gWZon();
    printLine("Finished ZnkPq()");
#endif
    return 0;
}

#endif
