
#include "std_testcase.h"

#include <wchar.h>

static int staticFive = 5;

namespace file_0332
{

#ifndef OMITO8yce

void file_0332_cG6JG()
{
    char * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new char;
        *data = 'A';
        delete data;
    }
    if(staticFive==5)
    {
        printHexCharLine(*data);
    }
}

#endif

#ifndef OMITwudTh

static void file_0332_LJMVKB2G1()
{
    char * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new char;
        *data = 'A';
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

static void file_0332_9WCUeB2G2()
{
    char * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new char;
        *data = 'A';
        delete data;
    }
    if(staticFive==5)
    {
        ;
    }
}

static void file_0332_bFXgUG2B1()
{
    char * data;
    data = NULL;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char;
        *data = 'A';
    }
    if(staticFive==5)
    {
        printHexCharLine(*data);
    }
}

static void file_0332_LtUCWG2B2()
{
    char * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new char;
        *data = 'A';
    }
    if(staticFive==5)
    {
        printHexCharLine(*data);
    }
}

void file_0332_JASsO()
{
    file_0332_c9J5UB2G1();
    file_0332_I2oPiB2G2();
    file_0332_CTvf2G2B1();
    file_0332_Xhq5UG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0332;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITbzLID
    printLine("Calling 4XLfS()...");
    file_0332_BCGp2();
    printLine("Finished aqUCg()");
#endif
#ifndef OMITCWrMo
    printLine("Calling 7kbAo()...");
    file_0332_h0BcP();
    printLine("Finished 1mdlF()");
#endif
    return 0;
}

#endif
