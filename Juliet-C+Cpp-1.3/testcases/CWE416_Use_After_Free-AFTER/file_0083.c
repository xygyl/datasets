
#include "std_testcase.h"

#include <wchar.h>

static int staticReturnsTrue()
{
    return 1;
}

static int staticReturnsFalse()
{
    return 0;
}

#ifndef OMIT2vgbp

void file_0083_8tqwS()
{
    long * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
        free(data);
    }
    if(staticReturnsTrue())
    {
        printLongLine(data[0]);
    }
}

#endif

#ifndef OMITPMocd

static void file_0083_v011hB2G1()
{
    long * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
        free(data);
    }
    if(staticReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0083_TDYqcB2G2()
{
    long * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
        free(data);
    }
    if(staticReturnsTrue())
    {
        ;
    }
}

static void file_0083_ufQdpG2B1()
{
    long * data;
    data = NULL;
    if(staticReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
    }
    if(staticReturnsTrue())
    {
        printLongLine(data[0]);
    }
}

static void file_0083_xDQypG2B2()
{
    long * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
    }
    if(staticReturnsTrue())
    {
        printLongLine(data[0]);
    }
}

void file_0083_2FXPL()
{
    file_0083_JejeyB2G1();
    file_0083_DltpPB2G2();
    file_0083_BJ6yCG2B1();
    file_0083_NTrLtG2B2();
}

#endif

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITZHTFp
    printLine("Calling ZMliA()...");
    file_0083_sqqNp();
    printLine("Finished SyohK()");
#endif
#ifndef OMIT2k8We
    printLine("Calling TzVJE()...");
    file_0083_ONCrt();
    printLine("Finished L4IXM()");
#endif
    return 0;
}

#endif
