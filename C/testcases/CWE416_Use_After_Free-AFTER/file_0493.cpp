
#include "std_testcase.h"

#include <wchar.h>

namespace file_0493
{

#ifndef OMIT3PUBl

void file_0493_oAr63()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    data = new wchar_t;
    *data = L'A';
    delete data;
    goto sink;
sink:
    printWcharLine(*data);
}

#endif

#ifndef OMITXAju6

static void file_0493_58I5XB2G()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    data = new wchar_t;
    *data = L'A';
    delete data;
    goto sink;
sink:
    ;
}

static void file_0493_i9M2cG2B()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    data = new wchar_t;
    *data = L'A';
    goto sink;
sink:
    printWcharLine(*data);
}

void file_0493_hdM5N()
{
    file_0493_QQE6cB2G();
    file_0493_zdSuBG2B();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0493;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITDfVud
    printLine("Calling V7aEZ()...");
    file_0493_Z6Hg3();
    printLine("Finished nRdfY()");
#endif
#ifndef OMITSPvQv
    printLine("Calling oEl4A()...");
    file_0493_TxjdK();
    printLine("Finished qCwgF()");
#endif
    return 0;
}

#endif
