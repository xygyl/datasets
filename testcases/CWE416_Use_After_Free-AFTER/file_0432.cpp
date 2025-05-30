
#include "std_testcase.h"

#include <wchar.h>

static int staticFive = 5;

namespace file_0432
{

#ifndef OMITG8ROE

void file_0432_TgpHx()
{
    long * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(staticFive==5)
    {
        printLongLine(*data);
    }
}

#endif

#ifndef OMITtd3Nj

static void file_0432_tdoPlB2G1()
{
    long * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new long;
        *data = 5L;
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

static void file_0432_H95IDB2G2()
{
    long * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(staticFive==5)
    {
        ;
    }
}

static void file_0432_sOcOqG2B1()
{
    long * data;
    data = NULL;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new long;
        *data = 5L;
    }
    if(staticFive==5)
    {
        printLongLine(*data);
    }
}

static void file_0432_DbABjG2B2()
{
    long * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new long;
        *data = 5L;
    }
    if(staticFive==5)
    {
        printLongLine(*data);
    }
}

void file_0432_EHK7h()
{
    file_0432_JVgNEB2G1();
    file_0432_i6FjlB2G2();
    file_0432_KTrocG2B1();
    file_0432_kNiXJG2B2();
}

#endif

}

#ifdef INCLUDEMAIN

using namespace file_0432;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITRWiWI
    printLine("Calling xTvUe()...");
    file_0432_PQPuY();
    printLine("Finished 4rVCS()");
#endif
#ifndef OMITSqKFB
    printLine("Calling LfSry()...");
    file_0432_53Bqz();
    printLine("Finished S12bq()");
#endif
    return 0;
}

#endif
