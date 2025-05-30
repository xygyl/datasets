
#include "std_testcase.h"

#include <wchar.h>

static const int STATIC_CONST_TRUE = 1;
static const int STATIC_CONST_FALSE = 0;

namespace file_0304
{

#ifndef OMITwVoTF

void file_0304_TRcMT()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
    }
    if(STATIC_CONST_TRUE)
    {
        printWLine(data);
    }
}

#endif

#ifndef OMITkReS6

static void file_0304_EEI4KB2G1()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
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

static void file_0304_6UFbWB2G2()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
    }
    if(STATIC_CONST_TRUE)
    {
        ;
    }
}

static void file_0304_6Zi1dG2B1()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(STATIC_CONST_TRUE)
    {
        printWLine(data);
    }
}

static void file_0304_y3MjUG2B2()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(STATIC_CONST_TRUE)
    {
        printWLine(data);
    }
}

void file_0304_QOAGl()
{
    file_0304_ON2deB2G1();
    file_0304_ZPtsFB2G2();
    file_0304_gjOHGG2B1();
    file_0304_TfRZ3G2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0304;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITSqAVT
    printLine("Calling BiL1V()...");
    file_0304_0Qfwc();
    printLine("Finished zsLmQ()");
#endif
#ifndef OMITHkFjk
    printLine("Calling pv22G()...");
    file_0304_F4E41();
    printLine("Finished pn4WI()");
#endif
    return 0;
}

#endif
