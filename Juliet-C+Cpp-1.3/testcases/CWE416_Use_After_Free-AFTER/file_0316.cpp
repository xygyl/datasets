
#include "std_testcase.h"

#include <wchar.h>

namespace file_0316
{

#ifndef OMIT8bXWP

void file_0316_VFoZA()
{
    wchar_t * data;
    data = NULL;
    while(1)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
        break;
    }
    while(1)
    {
        printWLine(data);
        break;
    }
}

#endif

#ifndef OMITePEvV

static void file_0316_2wmXSB2G()
{
    wchar_t * data;
    data = NULL;
    while(1)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
        break;
    }
    while(1)
    {
        ;
        break;
    }
}

static void file_0316_0a0DUG2B()
{
    wchar_t * data;
    data = NULL;
    while(1)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        break;
    }
    while(1)
    {
        printWLine(data);
        break;
    }
}

void file_0316_F4Zip()
{
    file_0316_PVsNAB2G();
    file_0316_bn9RPG2B();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0316;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT3aUfP
    printLine("Calling ZHgKp()...");
    file_0316_iH1gm();
    printLine("Finished stlSs()");
#endif
#ifndef OMIT1hV8E
    printLine("Calling FZU7M()...");
    file_0316_iGa1E();
    printLine("Finished 9cMr6()");
#endif
    return 0;
}

#endif
