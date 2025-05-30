
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITRQ1Pw

void file_0061_jOKxY()
{
    int * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
        free(data);
    }
    if(globalReturnsTrue())
    {
        printIntLine(data[0]);
    }
}

#endif

#ifndef OMITLcXOY

static void file_0061_l9k7qB2G1()
{
    int * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
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

static void file_0061_sIXAnB2G2()
{
    int * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
        free(data);
    }
    if(globalReturnsTrue())
    {
        ;
    }
}

static void file_0061_w0wqWG2B1()
{
    int * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
    }
    if(globalReturnsTrue())
    {
        printIntLine(data[0]);
    }
}

static void file_0061_N1lLDG2B2()
{
    int * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
    }
    if(globalReturnsTrue())
    {
        printIntLine(data[0]);
    }
}

void file_0061_VtGyt()
{
    file_0061_AxHRCB2G1();
    file_0061_2OKz6B2G2();
    file_0061_GJBYsG2B1();
    file_0061_m9owPG2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITSAFnL
    printLine("Calling 3SCzA()...");
    file_0061_bxG2Y();
    printLine("Finished Q1OGI()");
#endif
#ifndef OMITjVVLa
    printLine("Calling mVAPC()...");
    file_0061_gAzir();
    printLine("Finished cmCGk()");
#endif
    return 0;
}

#endif
