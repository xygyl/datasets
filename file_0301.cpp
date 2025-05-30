
#include "std_testcase.h"

#include <wchar.h>

namespace file_0301
{

#ifndef OMITHCGxn

void file_0301_XdsMB()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    wmemset(data, L'A', 100-1);
    data[100-1] = L'\0';
    delete [] data;
    printWLine(data);
}

#endif

#ifndef OMITkv2zA

static void file_0301_GH77rG2B()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    wmemset(data, L'A', 100-1);
    data[100-1] = L'\0';
    printWLine(data);
}

static void file_0301_GVPfSB2G()
{
    wchar_t * data;
    data = NULL;
    data = new wchar_t[100];
    wmemset(data, L'A', 100-1);
    data[100-1] = L'\0';
    delete [] data;
    ;
}

void file_0301_UiDZd()
{
    file_0301_D9VqwG2B();
    file_0301_mTJXvB2G();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0301;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITbzhxa
    printLine("Calling Lgmtk()...");
    file_0301_v3QXL();
    printLine("Finished dzcep()");
#endif
#ifndef OMITnEHM7
    printLine("Calling bMPKz()...");
    file_0301_Uw6Ds();
    printLine("Finished 2ZhEH()");
#endif
    return 0;
}

#endif
