
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITOjANf

void file_0142_Sd9TZ()
{
    int i,j;
    wchar_t * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    for(j = 0; j < 1; j++)
    {
        printWLine(data);
    }
}

#endif

#ifndef OMITZ7hXX

static void file_0142_7CdUsB2G()
{
    int i,k;
    wchar_t * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    for(k = 0; k < 1; k++)
    {
        ;
    }
}

static void file_0142_NWwJ0G2B()
{
    int h,j;
    wchar_t * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    for(j = 0; j < 1; j++)
    {
        printWLine(data);
    }
}

void file_0142_q633y()
{
    file_0142_qCv51B2G();
    file_0142_TLg1uG2B();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITqLacY
    printLine("Calling 9fxq4()...");
    file_0142_g3exG();
    printLine("Finished 1mMXU()");
#endif
#ifndef OMITiCDr6
    printLine("Calling L0dnL()...");
    file_0142_l2cyV();
    printLine("Finished AGukB()");
#endif
    return 0;
}

#endif
