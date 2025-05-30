
#include "std_testcase.h"

#include <wchar.h>

namespace file_0309
{

#ifndef OMITgkKWd

void file_0309_6Pr5q()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
    }
    if(GLOBAL_CONST_TRUE)
    {
        printWLine(data);
    }
}

#endif

#ifndef OMITJkHBS

static void file_0309_dTekUB2G1()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
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

static void file_0309_o4MTxB2G2()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
    }
    if(GLOBAL_CONST_TRUE)
    {
        ;
    }
}

static void file_0309_qjnuuG2B1()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(GLOBAL_CONST_TRUE)
    {
        printWLine(data);
    }
}

static void file_0309_H3NxfG2B2()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(GLOBAL_CONST_TRUE)
    {
        printWLine(data);
    }
}

void file_0309_Ko9jJ()
{
    file_0309_ItheQB2G1();
    file_0309_LN1soB2G2();
    file_0309_c3uC9G2B1();
    file_0309_rOXKnG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0309;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITvDpbB
    printLine("Calling nmqWl()...");
    file_0309_f8Xb6();
    printLine("Finished BnHmV()");
#endif
#ifndef OMITNSSoV
    printLine("Calling XSMvA()...");
    file_0309_hbRz1();
    printLine("Finished Qlgd0()");
#endif
    return 0;
}

#endif
