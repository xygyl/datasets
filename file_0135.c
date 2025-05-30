
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITeEtey

void file_0135_LmIG3()
{
    wchar_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(globalTrue)
    {
        printWLine(data);
    }
}

#endif

#ifndef OMITYzoQi

static void file_0135_7WXqiB2G1()
{
    wchar_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0135_i2vewB2G2()
{
    wchar_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(globalTrue)
    {
        ;
    }
}

static void file_0135_c4Gq9G2B1()
{
    wchar_t * data;
    data = NULL;
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(globalTrue)
    {
        printWLine(data);
    }
}

static void file_0135_mTJYPG2B2()
{
    wchar_t * data;
    data = NULL;
    if(globalTrue)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(globalTrue)
    {
        printWLine(data);
    }
}

void file_0135_09EBz()
{
    file_0135_HCgrNB2G1();
    file_0135_o8knfB2G2();
    file_0135_ByFX6G2B1();
    file_0135_YXX7oG2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITvuT6R
    printLine("Calling AZ3LU()...");
    file_0135_PKOvX();
    printLine("Finished 3LTYT()");
#endif
#ifndef OMITIoav9
    printLine("Calling YnaXa()...");
    file_0135_gI2ya();
    printLine("Finished 9AdXI()");
#endif
    return 0;
}

#endif
