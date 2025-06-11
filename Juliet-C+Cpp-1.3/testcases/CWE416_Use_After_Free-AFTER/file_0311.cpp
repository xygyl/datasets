
#include "std_testcase.h"

#include <wchar.h>

namespace file_0311
{

#ifndef OMITtKCCj

void file_0311_YyZL0()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
    }
    if(globalReturnsTrue())
    {
        printWLine(data);
    }
}

#endif

#ifndef OMITczevt

static void file_0311_BSgcoB2G1()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
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

static void file_0311_B4HI8B2G2()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
    }
    if(globalReturnsTrue())
    {
        ;
    }
}

static void file_0311_OoaXjG2B1()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(globalReturnsTrue())
    {
        printWLine(data);
    }
}

static void file_0311_D5EmHG2B2()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(globalReturnsTrue())
    {
        printWLine(data);
    }
}

void file_0311_q3uuK()
{
    file_0311_y19kBB2G1();
    file_0311_sXxF0B2G2();
    file_0311_rPrGkG2B1();
    file_0311_LC4zmG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0311;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITZ1Edd
    printLine("Calling pu2hk()...");
    file_0311_EPMgw();
    printLine("Finished tvLhO()");
#endif
#ifndef OMITGEyHd
    printLine("Calling prpX5()...");
    file_0311_zlaQT();
    printLine("Finished TfTBk()");
#endif
    return 0;
}

#endif
