
#include "std_testcase.h"

#include <wchar.h>

static const int STATIC_CONST_FIVE = 5;

namespace file_0381
{

#ifndef OMIT0ElTV

void file_0381_tJ5j3()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new int64_t;
        *data = 5LL;
        delete data;
    }
    if(STATIC_CONST_FIVE==5)
    {
        printLongLongLine(*data);
    }
}

#endif

#ifndef OMITrxsBt

static void file_0381_C6XPFB2G1()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new int64_t;
        *data = 5LL;
        delete data;
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

static void file_0381_Cg67iB2G2()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new int64_t;
        *data = 5LL;
        delete data;
    }
    if(STATIC_CONST_FIVE==5)
    {
        ;
    }
}

static void file_0381_Y7Q25G2B1()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int64_t;
        *data = 5LL;
    }
    if(STATIC_CONST_FIVE==5)
    {
        printLongLongLine(*data);
    }
}

static void file_0381_ZgYQ6G2B2()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new int64_t;
        *data = 5LL;
    }
    if(STATIC_CONST_FIVE==5)
    {
        printLongLongLine(*data);
    }
}

void file_0381_47vzV()
{
    file_0381_VTr44B2G1();
    file_0381_tWlVaB2G2();
    file_0381_EWr98G2B1();
    file_0381_G35QfG2B2();
}

#endif

}

#ifdef INCLUDEMAIN

using namespace file_0381;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITtsSDm
    printLine("Calling 2e3d6()...");
    file_0381_w30a1();
    printLine("Finished pJGcI()");
#endif
#ifndef OMIT2ebVs
    printLine("Calling Hpi9b()...");
    file_0381_eYqss();
    printLine("Finished 1xLlS()");
#endif
    return 0;
}

#endif
