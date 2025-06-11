
#include "std_testcase.h"

#include <wchar.h>

namespace file_0485
{

#ifndef OMITR8fUS

void file_0485_Kwq1M()
{
    wchar_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(globalTrue)
    {
        printWcharLine(*data);
    }
}

#endif

#ifndef OMITccw2Z

static void file_0485_BFiGVB2G1()
{
    wchar_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0485_AQUo1B2G2()
{
    wchar_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(globalTrue)
    {
        ;
    }
}

static void file_0485_hpsFAG2B1()
{
    wchar_t * data;
    data = NULL;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new wchar_t;
        *data = L'A';
    }
    if(globalTrue)
    {
        printWcharLine(*data);
    }
}

static void file_0485_4hM4xG2B2()
{
    wchar_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = new wchar_t;
        *data = L'A';
    }
    if(globalTrue)
    {
        printWcharLine(*data);
    }
}

void file_0485_h59wM()
{
    file_0485_9mKF3B2G1();
    file_0485_vdCUwB2G2();
    file_0485_wCB7RG2B1();
    file_0485_TzzrjG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0485;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITFWM67
    printLine("Calling ZDCh0()...");
    file_0485_VhGyK();
    printLine("Finished yWM1P()");
#endif
#ifndef OMITHAyxu
    printLine("Calling vQG8V()...");
    file_0485_2GcFz();
    printLine("Finished HfEK2()");
#endif
    return 0;
}

#endif
