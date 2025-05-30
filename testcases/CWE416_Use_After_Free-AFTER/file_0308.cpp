
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

namespace file_0308
{

#ifndef OMITd6QFR

void file_0308_kRbnK()
{
    wchar_t * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
    }
    if(staticReturnsTrue())
    {
        printWLine(data);
    }
}

#endif

#ifndef OMITBi90w

static void file_0308_mK0YLB2G1()
{
    wchar_t * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
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

static void file_0308_ZKeKhB2G2()
{
    wchar_t * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
    }
    if(staticReturnsTrue())
    {
        ;
    }
}

static void file_0308_feIvvG2B1()
{
    wchar_t * data;
    data = NULL;
    if(staticReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(staticReturnsTrue())
    {
        printWLine(data);
    }
}

static void file_0308_uwlQiG2B2()
{
    wchar_t * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(staticReturnsTrue())
    {
        printWLine(data);
    }
}

void file_0308_E4NDg()
{
    file_0308_nq6IzB2G1();
    file_0308_4ASKpB2G2();
    file_0308_D4noPG2B1();
    file_0308_hugGqG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0308;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT9oCj9
    printLine("Calling 94SZA()...");
    file_0308_bHnUX();
    printLine("Finished BnLzY()");
#endif
#ifndef OMITnk5kq
    printLine("Calling Kqcsc()...");
    file_0308_uKfp9();
    printLine("Finished D0OKA()");
#endif
    return 0;
}

#endif
