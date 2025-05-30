
#include "std_testcase.h"

#include <wchar.h>

static int staticTrue = 1;
static int staticFalse = 0;

#ifndef OMITBnyb2

void file_0130_0Gzbd()
{
    wchar_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(staticTrue)
    {
        printWLine(data);
    }
}

#endif

#ifndef OMITKKfBi

static void file_0130_oWXteB2G1()
{
    wchar_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0130_dgdK2B2G2()
{
    wchar_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(staticTrue)
    {
        ;
    }
}

static void file_0130_dea8MG2B1()
{
    wchar_t * data;
    data = NULL;
    if(staticFalse)
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
    if(staticTrue)
    {
        printWLine(data);
    }
}

static void file_0130_T4fVKG2B2()
{
    wchar_t * data;
    data = NULL;
    if(staticTrue)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(staticTrue)
    {
        printWLine(data);
    }
}

void file_0130_qAyxE()
{
    file_0130_F3n7jB2G1();
    file_0130_jHc5NB2G2();
    file_0130_60OcOG2B1();
    file_0130_ngzc6G2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT9CieL
    printLine("Calling 6x5eg()...");
    file_0130_gpj3Q();
    printLine("Finished Ps1h8()");
#endif
#ifndef OMITUDieI
    printLine("Calling FOKkp()...");
    file_0130_ytSqB();
    printLine("Finished 3K8jH()");
#endif
    return 0;
}

#endif
