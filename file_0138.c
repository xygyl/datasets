
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITCjwVO

void file_0138_1cnTy()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        printWLine(data);
    }
}

#endif

#ifndef OMITmavHJ

static void file_0138_HcMigB2G1()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0138_xABBuB2G2()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        ;
    }
}

static void file_0138_U1e3oG2B1()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE!=5)
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
    if(GLOBAL_CONST_FIVE==5)
    {
        printWLine(data);
    }
}

static void file_0138_lLls8G2B2()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        printWLine(data);
    }
}

void file_0138_ZloLa()
{
    file_0138_sJgEZB2G1();
    file_0138_TIUVZB2G2();
    file_0138_o5lNfG2B1();
    file_0138_cy0oeG2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITTUVmm
    printLine("Calling 6pT8S()...");
    file_0138_FEHJh();
    printLine("Finished ZNNli()");
#endif
#ifndef OMITNPm1V
    printLine("Calling QWFFc()...");
    file_0138_q3upw();
    printLine("Finished VHRtI()");
#endif
    return 0;
}

#endif
