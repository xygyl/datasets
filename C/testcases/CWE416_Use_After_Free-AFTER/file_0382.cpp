
#include "std_testcase.h"

#include <wchar.h>

static int staticFive = 5;

namespace file_0382
{

#ifndef OMITN6qfd

void file_0382_iWHJ5()
{
    int64_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new int64_t;
        *data = 5LL;
        delete data;
    }
    if(staticFive==5)
    {
        printLongLongLine(*data);
    }
}

#endif

#ifndef OMITGEV8e

static void file_0382_ySSSxB2G1()
{
    int64_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new int64_t;
        *data = 5LL;
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

static void file_0382_umwaWB2G2()
{
    int64_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new int64_t;
        *data = 5LL;
        delete data;
    }
    if(staticFive==5)
    {
        ;
    }
}

static void file_0382_e82hmG2B1()
{
    int64_t * data;
    data = NULL;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int64_t;
        *data = 5LL;
    }
    if(staticFive==5)
    {
        printLongLongLine(*data);
    }
}

static void file_0382_HIUGjG2B2()
{
    int64_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new int64_t;
        *data = 5LL;
    }
    if(staticFive==5)
    {
        printLongLongLine(*data);
    }
}

void file_0382_y2WuA()
{
    file_0382_GUpWlB2G1();
    file_0382_OfehwB2G2();
    file_0382_oj5O7G2B1();
    file_0382_PND7nG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0382;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITJYKQY
    printLine("Calling hFHcF()...");
    file_0382_y85Mh();
    printLine("Finished Dsy9L()");
#endif
#ifndef OMITgoeXz
    printLine("Calling 1SLd8()...");
    file_0382_bO9r2();
    printLine("Finished Ae01Z()");
#endif
    return 0;
}

#endif
