
#include "std_testcase.h"

#include <wchar.h>

static const int STATIC_CONST_TRUE = 1;
static const int STATIC_CONST_FALSE = 0;

namespace file_0404
{

#ifndef OMITIT2nZ

void file_0404_8mX82()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(STATIC_CONST_TRUE)
    {
        printIntLine(*data);
    }
}

#endif

#ifndef OMIT6DVHG

static void file_0404_zIkdwB2G1()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new int;
        *data = 5;
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

static void file_0404_cJ8KzB2G2()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(STATIC_CONST_TRUE)
    {
        ;
    }
}

static void file_0404_Zw2N3G2B1()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int;
        *data = 5;
    }
    if(STATIC_CONST_TRUE)
    {
        printIntLine(*data);
    }
}

static void file_0404_zGCGGG2B2()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new int;
        *data = 5;
    }
    if(STATIC_CONST_TRUE)
    {
        printIntLine(*data);
    }
}

void file_0404_DQBWu()
{
    file_0404_nrKkGB2G1();
    file_0404_VbVR6B2G2();
    file_0404_BH8KbG2B1();
    file_0404_M9OUnG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0404;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITLhGPQ
    printLine("Calling HcLlT()...");
    file_0404_2jCgT();
    printLine("Finished 1CrEe()");
#endif
#ifndef OMITxGVDa
    printLine("Calling HrDNB()...");
    file_0404_YCQlR();
    printLine("Finished mgvx8()");
#endif
    return 0;
}

#endif
