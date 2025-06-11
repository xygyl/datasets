
#include "std_testcase.h"

#include <wchar.h>

static const int STATIC_CONST_TRUE = 1;
static const int STATIC_CONST_FALSE = 0;

namespace file_0229
{

#ifndef OMITMkFbO

void file_0229_D1lu9()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new int[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
        delete [] data;
    }
    if(STATIC_CONST_TRUE)
    {
        printIntLine(data[0]);
    }
}

#endif

#ifndef OMITWasKB

static void file_0229_h4PGgB2G1()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new int[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
        delete [] data;
    }
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0229_bTpc1B2G2()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new int[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
        delete [] data;
    }
    if(STATIC_CONST_TRUE)
    {
        ;
    }
}

static void file_0229_zJrmDG2B1()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
    }
    if(STATIC_CONST_TRUE)
    {
        printIntLine(data[0]);
    }
}

static void file_0229_xUONlG2B2()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new int[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
    }
    if(STATIC_CONST_TRUE)
    {
        printIntLine(data[0]);
    }
}

void file_0229_qStNT()
{
    file_0229_u7LRWB2G1();
    file_0229_KfAOZB2G2();
    file_0229_FIDBVG2B1();
    file_0229_V5rEcG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0229;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITRfF4G
    printLine("Calling GgR8T()...");
    file_0229_rp9YW();
    printLine("Finished 74lXs()");
#endif
#ifndef OMIT6dIGF
    printLine("Calling BcWOC()...");
    file_0229_su7qb();
    printLine("Finished jjfQS()");
#endif
    return 0;
}

#endif
