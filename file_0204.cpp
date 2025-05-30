
#include "std_testcase.h"

#include <wchar.h>

static const int STATIC_CONST_TRUE = 1;
static const int STATIC_CONST_FALSE = 0;

namespace file_0204
{

#ifndef OMIT0bre0

void file_0204_sEyWP()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new int64_t[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
        delete [] data;
    }
    if(STATIC_CONST_TRUE)
    {
        printLongLongLine(data[0]);
    }
}

#endif

#ifndef OMIT0XDxm

static void file_0204_BJfjsB2G1()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new int64_t[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
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

static void file_0204_TVeiqB2G2()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new int64_t[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
        delete [] data;
    }
    if(STATIC_CONST_TRUE)
    {
        ;
    }
}

static void file_0204_eGI2YG2B1()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int64_t[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
    }
    if(STATIC_CONST_TRUE)
    {
        printLongLongLine(data[0]);
    }
}

static void file_0204_vvcHTG2B2()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new int64_t[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
    }
    if(STATIC_CONST_TRUE)
    {
        printLongLongLine(data[0]);
    }
}

void file_0204_8WeMK()
{
    file_0204_411rIB2G1();
    file_0204_psOhIB2G2();
    file_0204_NllVXG2B1();
    file_0204_U7SfQG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0204;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITYjPyI
    printLine("Calling 8ecEo()...");
    file_0204_R5jn0();
    printLine("Finished 3sVna()");
#endif
#ifndef OMITgSsIT
    printLine("Calling CWky5()...");
    file_0204_VGwy0();
    printLine("Finished jh9zI()");
#endif
    return 0;
}

#endif
