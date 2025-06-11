
#include "std_testcase.h"

#include <wchar.h>

static int staticFive = 5;

namespace file_0482
{

#ifndef OMITQ8S4H

void file_0482_EkjuX()
{
    wchar_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(staticFive==5)
    {
        printWcharLine(*data);
    }
}

#endif

#ifndef OMITBLch6

static void file_0482_nI9SJB2G1()
{
    wchar_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0482_OzEomB2G2()
{
    wchar_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(staticFive==5)
    {
        ;
    }
}

static void file_0482_2tTAVG2B1()
{
    wchar_t * data;
    data = NULL;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new wchar_t;
        *data = L'A';
    }
    if(staticFive==5)
    {
        printWcharLine(*data);
    }
}

static void file_0482_orCM2G2B2()
{
    wchar_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new wchar_t;
        *data = L'A';
    }
    if(staticFive==5)
    {
        printWcharLine(*data);
    }
}

void file_0482_KYY1R()
{
    file_0482_20MiAB2G1();
    file_0482_knzBAB2G2();
    file_0482_6dRV2G2B1();
    file_0482_jvSokG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0482;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITjuMy7
    printLine("Calling p0zsv()...");
    file_0482_YrorW();
    printLine("Finished Unpw7()");
#endif
#ifndef OMITD3kjG
    printLine("Calling eOyDp()...");
    file_0482_waGa8();
    printLine("Finished WeCV7()");
#endif
    return 0;
}

#endif
