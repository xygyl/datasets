
#include "std_testcase.h"

#include <wchar.h>

namespace file_0160
{

#ifndef OMITfCjVP

void file_0160_OkXcG()
{
    char * data;
    data = NULL;
    if(globalTrue)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        delete [] data;
    }
    if(globalTrue)
    {
        printLine(data);
    }
}

#endif

#ifndef OMIT3sShh

static void file_0160_ECpvYB2G1()
{
    char * data;
    data = NULL;
    if(globalTrue)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
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

static void file_0160_uRSjNB2G2()
{
    char * data;
    data = NULL;
    if(globalTrue)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        delete [] data;
    }
    if(globalTrue)
    {
        ;
    }
}

static void file_0160_EdGehG2B1()
{
    char * data;
    data = NULL;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
    }
    if(globalTrue)
    {
        printLine(data);
    }
}

static void file_0160_fiE3gG2B2()
{
    char * data;
    data = NULL;
    if(globalTrue)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
    }
    if(globalTrue)
    {
        printLine(data);
    }
}

void file_0160_xN9SR()
{
    file_0160_8Qnw7B2G1();
    file_0160_F9P6XB2G2();
    file_0160_NRozlG2B1();
    file_0160_Od6ooG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0160;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITTcxPx
    printLine("Calling APyts()...");
    file_0160_2TsyM();
    printLine("Finished AsKVA()");
#endif
#ifndef OMITPX7Rx
    printLine("Calling yfJKv()...");
    file_0160_Qj6rb();
    printLine("Finished 594zb()");
#endif
    return 0;
}

#endif
