
#include "std_testcase.h"

#include <wchar.h>

namespace file_0310
{

#ifndef OMITaS6sr

void file_0310_YoQ3u()
{
    wchar_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
    }
    if(globalTrue)
    {
        printWLine(data);
    }
}

#endif

#ifndef OMITOcugP

static void file_0310_d7HrcB2G1()
{
    wchar_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
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

static void file_0310_SFG1xB2G2()
{
    wchar_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
    }
    if(globalTrue)
    {
        ;
    }
}

static void file_0310_UuXlXG2B1()
{
    wchar_t * data;
    data = NULL;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(globalTrue)
    {
        printWLine(data);
    }
}

static void file_0310_th6WhG2B2()
{
    wchar_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(globalTrue)
    {
        printWLine(data);
    }
}

void file_0310_IXwIg()
{
    file_0310_DRy3WB2G1();
    file_0310_aeGPBB2G2();
    file_0310_3r87YG2B1();
    file_0310_YDExcG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0310;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITSmqUd
    printLine("Calling IxHYV()...");
    file_0310_AT1m2();
    printLine("Finished J4Tp6()");
#endif
#ifndef OMIT47ifV
    printLine("Calling Kdkmh()...");
    file_0310_3OU8A();
    printLine("Finished VYmg5()");
#endif
    return 0;
}

#endif
