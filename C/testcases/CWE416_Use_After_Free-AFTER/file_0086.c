
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMIT0TXdz

void file_0086_4u2oo()
{
    long * data;
    data = NULL;
    if(globalReturnsTrue())
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
    if(globalReturnsTrue())
    {
        printLongLine(data[0]);
    }
}

#endif

#ifndef OMITjncde

static void file_0086_UNLwuB2G1()
{
    long * data;
    data = NULL;
    if(globalReturnsTrue())
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
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0086_dt13FB2G2()
{
    long * data;
    data = NULL;
    if(globalReturnsTrue())
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
    if(globalReturnsTrue())
    {
        ;
    }
}

static void file_0086_fmmqkG2B1()
{
    long * data;
    data = NULL;
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        printLongLine(data[0]);
    }
}

static void file_0086_NKh4OG2B2()
{
    long * data;
    data = NULL;
    if(globalReturnsTrue())
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
    if(globalReturnsTrue())
    {
        printLongLine(data[0]);
    }
}

void file_0086_8l0S1()
{
    file_0086_7QuKhB2G1();
    file_0086_xiPkRB2G2();
    file_0086_abMkTG2B1();
    file_0086_3cXQ6G2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT7cjy2
    printLine("Calling RPvli()...");
    file_0086_AA5rY();
    printLine("Finished qhOm5()");
#endif
#ifndef OMITAASA5
    printLine("Calling YOdkE()...");
    file_0086_Yg0ml();
    printLine("Finished UC362()");
#endif
    return 0;
}

#endif
