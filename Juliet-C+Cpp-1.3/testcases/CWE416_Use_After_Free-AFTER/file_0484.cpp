
#include "std_testcase.h"

#include <wchar.h>

namespace file_0484
{

#ifndef OMIT7B0UN

void file_0484_L5qNx()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(GLOBAL_CONST_TRUE)
    {
        printWcharLine(*data);
    }
}

#endif

#ifndef OMITUQ4fV

static void file_0484_UoYWiB2G1()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0484_E6o36B2G2()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(GLOBAL_CONST_TRUE)
    {
        ;
    }
}

static void file_0484_RJms8G2B1()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new wchar_t;
        *data = L'A';
    }
    if(GLOBAL_CONST_TRUE)
    {
        printWcharLine(*data);
    }
}

static void file_0484_P6YJ2G2B2()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new wchar_t;
        *data = L'A';
    }
    if(GLOBAL_CONST_TRUE)
    {
        printWcharLine(*data);
    }
}

void file_0484_cVaoI()
{
    file_0484_oXarnB2G1();
    file_0484_eWSiTB2G2();
    file_0484_oC0dFG2B1();
    file_0484_zdPbaG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0484;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITCTMA8
    printLine("Calling PHRao()...");
    file_0484_ObHGb();
    printLine("Finished x3NQ8()");
#endif
#ifndef OMIThCxuJ
    printLine("Calling SboFW()...");
    file_0484_vrEHP();
    printLine("Finished X2yEC()");
#endif
    return 0;
}

#endif
