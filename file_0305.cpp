
#include "std_testcase.h"

#include <wchar.h>

static int staticTrue = 1;
static int staticFalse = 0;

namespace file_0305
{

#ifndef OMITwEu7g

void file_0305_e9AsV()
{
    wchar_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
    }
    if(staticTrue)
    {
        printWLine(data);
    }
}

#endif

#ifndef OMIT60ybh

static void file_0305_BkVPlB2G1()
{
    wchar_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
    }
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0305_d07D1B2G2()
{
    wchar_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
    }
    if(staticTrue)
    {
        ;
    }
}

static void file_0305_3GkZfG2B1()
{
    wchar_t * data;
    data = NULL;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(staticTrue)
    {
        printWLine(data);
    }
}

static void file_0305_Kg5tfG2B2()
{
    wchar_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(staticTrue)
    {
        printWLine(data);
    }
}

void file_0305_XEMsj()
{
    file_0305_g7vnJB2G1();
    file_0305_kVttOB2G2();
    file_0305_GZb1jG2B1();
    file_0305_bdlYxG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0305;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITJshyY
    printLine("Calling tbyLi()...");
    file_0305_bAqb0();
    printLine("Finished nBmsH()");
#endif
#ifndef OMIT85lgy
    printLine("Calling 33if4()...");
    file_0305_e8CoY();
    printLine("Finished oq2kF()");
#endif
    return 0;
}

#endif
