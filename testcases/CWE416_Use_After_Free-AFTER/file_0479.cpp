
#include "std_testcase.h"

#include <wchar.h>

static const int STATIC_CONST_TRUE = 1;
static const int STATIC_CONST_FALSE = 0;

namespace file_0479
{

#ifndef OMIT4Ta8F

void file_0479_MkOMS()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(STATIC_CONST_TRUE)
    {
        printWcharLine(*data);
    }
}

#endif

#ifndef OMITw6W49

static void file_0479_oHiMlB2G1()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0479_xHEn3B2G2()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(STATIC_CONST_TRUE)
    {
        ;
    }
}

static void file_0479_Tx0zKG2B1()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new wchar_t;
        *data = L'A';
    }
    if(STATIC_CONST_TRUE)
    {
        printWcharLine(*data);
    }
}

static void file_0479_hEzR9G2B2()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new wchar_t;
        *data = L'A';
    }
    if(STATIC_CONST_TRUE)
    {
        printWcharLine(*data);
    }
}

void file_0479_p7rYH()
{
    file_0479_4dRefB2G1();
    file_0479_alaNAB2G2();
    file_0479_QrYMpG2B1();
    file_0479_mdE2lG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0479;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITJPYoc
    printLine("Calling wk5z6()...");
    file_0479_lffz6();
    printLine("Finished gBKoj()");
#endif
#ifndef OMIT30Dt8
    printLine("Calling qdyWm()...");
    file_0479_IlEyJ();
    printLine("Finished rbvP3()");
#endif
    return 0;
}

#endif
