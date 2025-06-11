
#include "std_testcase.h"

#include <wchar.h>

static int staticTrue = 1;
static int staticFalse = 0;

namespace file_0480
{

#ifndef OMIT7aSUd

void file_0480_sqKXv()
{
    wchar_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(staticTrue)
    {
        printWcharLine(*data);
    }
}

#endif

#ifndef OMITV3pMH

static void file_0480_xmcFuB2G1()
{
    wchar_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0480_R31zrB2G2()
{
    wchar_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(staticTrue)
    {
        ;
    }
}

static void file_0480_p0qtjG2B1()
{
    wchar_t * data;
    data = NULL;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new wchar_t;
        *data = L'A';
    }
    if(staticTrue)
    {
        printWcharLine(*data);
    }
}

static void file_0480_8irz8G2B2()
{
    wchar_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = new wchar_t;
        *data = L'A';
    }
    if(staticTrue)
    {
        printWcharLine(*data);
    }
}

void file_0480_AIYkG()
{
    file_0480_fe0CFB2G1();
    file_0480_9HbjSB2G2();
    file_0480_qxZfpG2B1();
    file_0480_N3lvQG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0480;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITPDrvX
    printLine("Calling j6xx2()...");
    file_0480_7pbtq();
    printLine("Finished RqLNY()");
#endif
#ifndef OMITvigSb
    printLine("Calling S0gfK()...");
    file_0480_TIogs();
    printLine("Finished 9CiLO()");
#endif
    return 0;
}

#endif
