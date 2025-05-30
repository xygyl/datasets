
#include "std_testcase.h"

#include <wchar.h>

namespace file_0164
{

#ifndef OMITcZsr4

void file_0164_6FXKu()
{
    char * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        delete [] data;
    }
    if(globalFive==5)
    {
        printLine(data);
    }
}

#endif

#ifndef OMITrJdE7

static void file_0164_JculNB2G1()
{
    char * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        delete [] data;
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

static void file_0164_gyc8oB2G2()
{
    char * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        delete [] data;
    }
    if(globalFive==5)
    {
        ;
    }
}

static void file_0164_XT1FQG2B1()
{
    char * data;
    data = NULL;
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
    }
    if(globalFive==5)
    {
        printLine(data);
    }
}

static void file_0164_aLYSFG2B2()
{
    char * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
    }
    if(globalFive==5)
    {
        printLine(data);
    }
}

void file_0164_JwA0Z()
{
    file_0164_yzoNRB2G1();
    file_0164_eb72MB2G2();
    file_0164_OPuAVG2B1();
    file_0164_dcAi8G2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0164;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITVc6f4
    printLine("Calling wd00E()...");
    file_0164_D10OG();
    printLine("Finished InaDu()");
#endif
#ifndef OMITLGLRG
    printLine("Calling UMES0()...");
    file_0164_NJTN4();
    printLine("Finished UvJDQ()");
#endif
    return 0;
}

#endif
