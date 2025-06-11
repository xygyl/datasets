
#include "std_testcase.h"

#include <wchar.h>

static const int STATIC_CONST_FIVE = 5;

namespace file_0306
{

#ifndef OMIT4VqGO

void file_0306_p6Lgw()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
    }
    if(STATIC_CONST_FIVE==5)
    {
        printWLine(data);
    }
}

#endif

#ifndef OMITauTog

static void file_0306_o4eFAB2G1()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
    }
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0306_8S8YZB2G2()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
    }
    if(STATIC_CONST_FIVE==5)
    {
        ;
    }
}

static void file_0306_xiI8VG2B1()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(STATIC_CONST_FIVE==5)
    {
        printWLine(data);
    }
}

static void file_0306_7SiMtG2B2()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(STATIC_CONST_FIVE==5)
    {
        printWLine(data);
    }
}

void file_0306_dMdaA()
{
    file_0306_3m8UgB2G1();
    file_0306_A1RorB2G2();
    file_0306_bbWuhG2B1();
    file_0306_yzwSLG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0306;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT63OWD
    printLine("Calling XMDzL()...");
    file_0306_KTIPG();
    printLine("Finished wZOdd()");
#endif
#ifndef OMITh7UYz
    printLine("Calling 1JGuP()...");
    file_0306_I1ojI();
    printLine("Finished mugUT()");
#endif
    return 0;
}

#endif
