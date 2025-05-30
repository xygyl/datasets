
#include "std_testcase.h"

#include <wchar.h>

static int staticFive = 5;

namespace file_0307
{

#ifndef OMITaGJq5

void file_0307_ggWqY()
{
    wchar_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
    }
    if(staticFive==5)
    {
        printWLine(data);
    }
}

#endif

#ifndef OMITEVDp6

static void file_0307_xRA0gB2G1()
{
    wchar_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
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

static void file_0307_EaMuOB2G2()
{
    wchar_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
    }
    if(staticFive==5)
    {
        ;
    }
}

static void file_0307_aSTjQG2B1()
{
    wchar_t * data;
    data = NULL;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(staticFive==5)
    {
        printWLine(data);
    }
}

static void file_0307_dpxfgG2B2()
{
    wchar_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(staticFive==5)
    {
        printWLine(data);
    }
}

void file_0307_kwyLW()
{
    file_0307_oXUnZB2G1();
    file_0307_UmAYPB2G2();
    file_0307_6U6XeG2B1();
    file_0307_yGMbWG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0307;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITvN1G2
    printLine("Calling PidLz()...");
    file_0307_WiN9P();
    printLine("Finished e5rpB()");
#endif
#ifndef OMITiVKvd
    printLine("Calling 6siy3()...");
    file_0307_mTL0r();
    printLine("Finished yi5jN()");
#endif
    return 0;
}

#endif
