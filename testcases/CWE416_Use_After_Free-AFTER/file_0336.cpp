
#include "std_testcase.h"

#include <wchar.h>

namespace file_0336
{

#ifndef OMITJS2PR

void file_0336_wH0sn()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new char;
        *data = 'A';
        delete data;
    }
    if(globalReturnsTrue())
    {
        printHexCharLine(*data);
    }
}

#endif

#ifndef OMITtdRbV

static void file_0336_dPAjXB2G1()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new char;
        *data = 'A';
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

static void file_0336_q8uJmB2G2()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new char;
        *data = 'A';
        delete data;
    }
    if(globalReturnsTrue())
    {
        ;
    }
}

static void file_0336_pxKQuG2B1()
{
    char * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char;
        *data = 'A';
    }
    if(globalReturnsTrue())
    {
        printHexCharLine(*data);
    }
}

static void file_0336_HMUBnG2B2()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new char;
        *data = 'A';
    }
    if(globalReturnsTrue())
    {
        printHexCharLine(*data);
    }
}

void file_0336_ov6m4()
{
    file_0336_an8lNB2G1();
    file_0336_uM7JRB2G2();
    file_0336_V5llEG2B1();
    file_0336_OuDhJG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0336;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITvgict
    printLine("Calling Bea6X()...");
    file_0336_a1dSd();
    printLine("Finished 3gMOR()");
#endif
#ifndef OMITpYwhz
    printLine("Calling TjgZN()...");
    file_0336_0qPwR();
    printLine("Finished B0cFK()");
#endif
    return 0;
}

#endif
