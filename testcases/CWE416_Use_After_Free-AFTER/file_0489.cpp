
#include "std_testcase.h"

#include <wchar.h>

namespace file_0489
{

#ifndef OMITDI4tn

void file_0489_B8deG()
{
    wchar_t * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(globalFive==5)
    {
        printWcharLine(*data);
    }
}

#endif

#ifndef OMITmZ8KR

static void file_0489_y9pwgB2G1()
{
    wchar_t * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0489_5J4JtB2G2()
{
    wchar_t * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(globalFive==5)
    {
        ;
    }
}

static void file_0489_2oylrG2B1()
{
    wchar_t * data;
    data = NULL;
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new wchar_t;
        *data = L'A';
    }
    if(globalFive==5)
    {
        printWcharLine(*data);
    }
}

static void file_0489_gIuvHG2B2()
{
    wchar_t * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new wchar_t;
        *data = L'A';
    }
    if(globalFive==5)
    {
        printWcharLine(*data);
    }
}

void file_0489_RGDnm()
{
    file_0489_0fkW7B2G1();
    file_0489_BTwh2B2G2();
    file_0489_CoaKyG2B1();
    file_0489_xdgG4G2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0489;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITTEiSo
    printLine("Calling kpFFD()...");
    file_0489_kO39r();
    printLine("Finished wxIIo()");
#endif
#ifndef OMITuqlGS
    printLine("Calling 9abhm()...");
    file_0489_Xiu1T();
    printLine("Finished GtU2M()");
#endif
    return 0;
}

#endif
