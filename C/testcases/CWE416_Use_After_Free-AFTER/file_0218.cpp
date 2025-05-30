
#include "std_testcase.h"

#include <wchar.h>

namespace file_0218
{

#ifndef OMITyYnei

void file_0218_kFR06()
{
    int64_t * data;
    data = NULL;
    goto source;
source:
    data = new int64_t[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5LL;
        }
    }
    delete [] data;
    goto sink;
sink:
    printLongLongLine(data[0]);
}

#endif

#ifndef OMITsvYjO

static void file_0218_qGFtlB2G()
{
    int64_t * data;
    data = NULL;
    goto source;
source:
    data = new int64_t[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5LL;
        }
    }
    delete [] data;
    goto sink;
sink:
    ;
}

static void file_0218_2xTrDG2B()
{
    int64_t * data;
    data = NULL;
    goto source;
source:
    data = new int64_t[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5LL;
        }
    }
    goto sink;
sink:
    printLongLongLine(data[0]);
}

void file_0218_DCmb7()
{
    file_0218_lHTz6B2G();
    file_0218_O2DSJG2B();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0218;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT0364V
    printLine("Calling fjHNn()...");
    file_0218_nwtK9();
    printLine("Finished pDnRC()");
#endif
#ifndef OMITsuqj6
    printLine("Calling gjQBt()...");
    file_0218_91LKU();
    printLine("Finished IktHL()");
#endif
    return 0;
}

#endif
