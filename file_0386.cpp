
#include "std_testcase.h"

#include <wchar.h>

namespace file_0386
{

#ifndef OMITUVGBS

void file_0386_holvm()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new int64_t;
        *data = 5LL;
        delete data;
    }
    if(globalReturnsTrue())
    {
        printLongLongLine(*data);
    }
}

#endif

#ifndef OMITkki2y

static void file_0386_T50MCB2G1()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new int64_t;
        *data = 5LL;
        delete data;
    }
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0386_MwTCrB2G2()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new int64_t;
        *data = 5LL;
        delete data;
    }
    if(globalReturnsTrue())
    {
        ;
    }
}

static void file_0386_G91hPG2B1()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int64_t;
        *data = 5LL;
    }
    if(globalReturnsTrue())
    {
        printLongLongLine(*data);
    }
}

static void file_0386_VAYwvG2B2()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new int64_t;
        *data = 5LL;
    }
    if(globalReturnsTrue())
    {
        printLongLongLine(*data);
    }
}

void file_0386_Ja8u8()
{
    file_0386_4vcduB2G1();
    file_0386_9Kne5B2G2();
    file_0386_sLyexG2B1();
    file_0386_gGkNXG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0386;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITl2Hgu
    printLine("Calling OyUzo()...");
    file_0386_vz6sS();
    printLine("Finished r8DZ5()");
#endif
#ifndef OMITGwSPK
    printLine("Calling yQVdM()...");
    file_0386_p6NcH();
    printLine("Finished 1zIGB()");
#endif
    return 0;
}

#endif
