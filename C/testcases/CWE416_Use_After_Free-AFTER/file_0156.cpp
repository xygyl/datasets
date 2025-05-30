
#include "std_testcase.h"

#include <wchar.h>

static const int STATIC_CONST_FIVE = 5;

namespace file_0156
{

#ifndef OMITouEEK

void file_0156_QUmJS()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        delete [] data;
    }
    if(STATIC_CONST_FIVE==5)
    {
        printLine(data);
    }
}

#endif

#ifndef OMIT1Xoon

static void file_0156_SZv2FB2G1()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        delete [] data;
    }
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0156_nziN0B2G2()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        delete [] data;
    }
    if(STATIC_CONST_FIVE==5)
    {
        ;
    }
}

static void file_0156_ZZBxkG2B1()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
    }
    if(STATIC_CONST_FIVE==5)
    {
        printLine(data);
    }
}

static void file_0156_N1O1UG2B2()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
    }
    if(STATIC_CONST_FIVE==5)
    {
        printLine(data);
    }
}

void file_0156_ri4AW()
{
    file_0156_92OHkB2G1();
    file_0156_CnfhRB2G2();
    file_0156_PVTJGG2B1();
    file_0156_yrlFfG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0156;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITObrTS
    printLine("Calling hC9Qv()...");
    file_0156_sms5u();
    printLine("Finished tf9FA()");
#endif
#ifndef OMITFcuAB
    printLine("Calling NpbVr()...");
    file_0156_IrPcW();
    printLine("Finished 9uWFe()");
#endif
    return 0;
}

#endif
