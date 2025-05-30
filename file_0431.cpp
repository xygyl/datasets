
#include "std_testcase.h"

#include <wchar.h>

static const int STATIC_CONST_FIVE = 5;

namespace file_0431
{

#ifndef OMIT8BJ6m

void file_0431_Ui7hR()
{
    long * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(STATIC_CONST_FIVE==5)
    {
        printLongLine(*data);
    }
}

#endif

#ifndef OMITwiJ7X

static void file_0431_CfYrBB2G1()
{
    long * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new long;
        *data = 5L;
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

static void file_0431_X7gWdB2G2()
{
    long * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new long;
        *data = 5L;
        delete data;
    }
    if(STATIC_CONST_FIVE==5)
    {
        ;
    }
}

static void file_0431_y3TtAG2B1()
{
    long * data;
    data = NULL;
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new long;
        *data = 5L;
    }
    if(STATIC_CONST_FIVE==5)
    {
        printLongLine(*data);
    }
}

static void file_0431_QEba6G2B2()
{
    long * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new long;
        *data = 5L;
    }
    if(STATIC_CONST_FIVE==5)
    {
        printLongLine(*data);
    }
}

void file_0431_TpwMU()
{
    file_0431_oMHFVB2G1();
    file_0431_utwjRB2G2();
    file_0431_1mu7pG2B1();
    file_0431_fDR9iG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0431;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITU2OdY
    printLine("Calling 6panO()...");
    file_0431_8XFkT();
    printLine("Finished 7a1Qu()");
#endif
#ifndef OMITfkxZ3
    printLine("Calling FxUac()...");
    file_0431_hj1AE();
    printLine("Finished EeJhs()");
#endif
    return 0;
}

#endif
