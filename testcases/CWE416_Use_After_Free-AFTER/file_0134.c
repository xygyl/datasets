
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITBR4RQ

void file_0134_d1i0M()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(GLOBAL_CONST_TRUE)
    {
        printWLine(data);
    }
}

#endif

#ifndef OMITxmK4R

static void file_0134_86ioFB2G1()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
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

static void file_0134_RwleDB2G2()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(GLOBAL_CONST_TRUE)
    {
        ;
    }
}

static void file_0134_U0fWZG2B1()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        printWLine(data);
    }
}

static void file_0134_k8aWEG2B2()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(GLOBAL_CONST_TRUE)
    {
        printWLine(data);
    }
}

void file_0134_6Do7o()
{
    file_0134_V1IFSB2G1();
    file_0134_ux6LpB2G2();
    file_0134_cIaUWG2B1();
    file_0134_XgWVqG2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITHVxnB
    printLine("Calling qH2Wg()...");
    file_0134_oaZDA();
    printLine("Finished gEDmb()");
#endif
#ifndef OMIT3wRSl
    printLine("Calling i5eES()...");
    file_0134_H115p();
    printLine("Finished FClPi()");
#endif
    return 0;
}

#endif
