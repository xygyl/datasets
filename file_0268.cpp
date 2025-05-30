
#include "std_testcase.h"

#include <wchar.h>

namespace file_0268
{

#ifndef OMITuVNWQ

void file_0268_webX2()
{
    long * data;
    data = NULL;
    goto source;
source:
    data = new long[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5L;
        }
    }
    delete [] data;
    goto sink;
sink:
    printLongLine(data[0]);
}

#endif

#ifndef OMITNcvQU

static void file_0268_gS5lCB2G()
{
    long * data;
    data = NULL;
    goto source;
source:
    data = new long[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5L;
        }
    }
    delete [] data;
    goto sink;
sink:
    ;
}

static void file_0268_HPtLxG2B()
{
    long * data;
    data = NULL;
    goto source;
source:
    data = new long[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5L;
        }
    }
    goto sink;
sink:
    printLongLine(data[0]);
}

void file_0268_Ami73()
{
    file_0268_Wx1SlB2G();
    file_0268_eaOLaG2B();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0268;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITrzCJF
    printLine("Calling 0To5E()...");
    file_0268_g0txx();
    printLine("Finished SHjpJ()");
#endif
#ifndef OMITxdN93
    printLine("Calling CPths()...");
    file_0268_atVYL();
    printLine("Finished Z62Q3()");
#endif
    return 0;
}

#endif
