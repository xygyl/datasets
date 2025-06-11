
#include "std_testcase.h"

#include <wchar.h>

namespace file_0486
{

#ifndef OMITgAOzG

void file_0486_tL5fa()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(globalReturnsTrue())
    {
        printWcharLine(*data);
    }
}

#endif

#ifndef OMITPk9xt

static void file_0486_Q0uisB2G1()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new wchar_t;
        *data = L'A';
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

static void file_0486_OfDAxB2G2()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(globalReturnsTrue())
    {
        ;
    }
}

static void file_0486_dAYrXG2B1()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new wchar_t;
        *data = L'A';
    }
    if(globalReturnsTrue())
    {
        printWcharLine(*data);
    }
}

static void file_0486_9yStDG2B2()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new wchar_t;
        *data = L'A';
    }
    if(globalReturnsTrue())
    {
        printWcharLine(*data);
    }
}

void file_0486_HTRBP()
{
    file_0486_uBXeJB2G1();
    file_0486_hDyFtB2G2();
    file_0486_MsaMZG2B1();
    file_0486_z2vroG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0486;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITsOiOC
    printLine("Calling X8RQT()...");
    file_0486_Xx3FV();
    printLine("Finished 08Jk6()");
#endif
#ifndef OMITnyPtB
    printLine("Calling dFjuy()...");
    file_0486_GXxGh();
    printLine("Finished O2Wip()");
#endif
    return 0;
}

#endif
