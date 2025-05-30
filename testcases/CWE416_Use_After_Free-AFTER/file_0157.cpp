
#include "std_testcase.h"

#include <wchar.h>

static int staticFive = 5;

namespace file_0157
{

#ifndef OMITbMVbD

void file_0157_H9Smt()
{
    char * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        delete [] data;
    }
    if(staticFive==5)
    {
        printLine(data);
    }
}

#endif

#ifndef OMITFF9wZ

static void file_0157_NKJRfB2G1()
{
    char * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
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

static void file_0157_vlg0RB2G2()
{
    char * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        delete [] data;
    }
    if(staticFive==5)
    {
        ;
    }
}

static void file_0157_zNvw2G2B1()
{
    char * data;
    data = NULL;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
    }
    if(staticFive==5)
    {
        printLine(data);
    }
}

static void file_0157_qGvgYG2B2()
{
    char * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
    }
    if(staticFive==5)
    {
        printLine(data);
    }
}

void file_0157_q0qAo()
{
    file_0157_GOY8rB2G1();
    file_0157_nZrjGB2G2();
    file_0157_r63htG2B1();
    file_0157_9fNHoG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0157;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITwVzcL
    printLine("Calling 3sDiR()...");
    file_0157_yhSYk();
    printLine("Finished p9c1G()");
#endif
#ifndef OMITVykW1
    printLine("Calling hhIDh()...");
    file_0157_GiBKa();
    printLine("Finished m5vRK()");
#endif
    return 0;
}

#endif
