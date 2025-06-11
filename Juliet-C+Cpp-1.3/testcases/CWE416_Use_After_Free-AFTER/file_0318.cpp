
#include "std_testcase.h"

#include <wchar.h>

namespace file_0318
{

#ifndef OMITQFEb3

void file_0318_yv04n()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    data = new wchar_t[100];
    wmemset(data, L'A', 100-1);
    data[100-1] = L'\0';
    delete [] data;
    goto sink;
sink:
    printWLine(data);
}

#endif

#ifndef OMIT0Ij9T

static void file_0318_QINurB2G()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    data = new wchar_t[100];
    wmemset(data, L'A', 100-1);
    data[100-1] = L'\0';
    delete [] data;
    goto sink;
sink:
    ;
}

static void file_0318_nIzf9G2B()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    data = new wchar_t[100];
    wmemset(data, L'A', 100-1);
    data[100-1] = L'\0';
    goto sink;
sink:
    printWLine(data);
}

void file_0318_bu31w()
{
    file_0318_FFUXnB2G();
    file_0318_Oj2bVG2B();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0318;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITcVU0w
    printLine("Calling G3GXw()...");
    file_0318_gGI7M();
    printLine("Finished VOrzf()");
#endif
#ifndef OMITGQPs4
    printLine("Calling RvwbT()...");
    file_0318_J3OWW();
    printLine("Finished Ah20O()");
#endif
    return 0;
}

#endif
