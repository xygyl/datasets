
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITQa4Vh

void file_0036_gVIc0()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
        free(data);
    }
    if(globalReturnsTrue())
    {
        printLongLongLine(data[0]);
    }
}

#endif

#ifndef OMITHMZsp

static void file_0036_b0MpHB2G1()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
        free(data);
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

static void file_0036_EqRIKB2G2()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
        free(data);
    }
    if(globalReturnsTrue())
    {
        ;
    }
}

static void file_0036_S7iohG2B1()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
    }
    if(globalReturnsTrue())
    {
        printLongLongLine(data[0]);
    }
}

static void file_0036_h0et5G2B2()
{
    int64_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
    }
    if(globalReturnsTrue())
    {
        printLongLongLine(data[0]);
    }
}

void file_0036_r8UPe()
{
    file_0036_brHgGB2G1();
    file_0036_vlJV8B2G2();
    file_0036_InMLiG2B1();
    file_0036_irFQFG2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITHWjHo
    printLine("Calling eoZxR()...");
    file_0036_A6kCo();
    printLine("Finished C0r2h()");
#endif
#ifndef OMITK160D
    printLine("Calling 7mycs()...");
    file_0036_bFqE9();
    printLine("Finished 1g66V()");
#endif
    return 0;
}

#endif
