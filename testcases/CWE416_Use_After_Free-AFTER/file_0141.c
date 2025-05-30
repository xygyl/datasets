
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITGiLFu

void file_0141_CEJ3T()
{
    wchar_t * data;
    data = NULL;
    while(1)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
        break;
    }
    while(1)
    {
        printWLine(data);
        break;
    }
}

#endif

#ifndef OMIThHdQs

static void file_0141_HUpenB2G()
{
    wchar_t * data;
    data = NULL;
    while(1)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
        break;
    }
    while(1)
    {
        ;
        break;
    }
}

static void file_0141_dO6wYG2B()
{
    wchar_t * data;
    data = NULL;
    while(1)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        break;
    }
    while(1)
    {
        printWLine(data);
        break;
    }
}

void file_0141_YPEcA()
{
    file_0141_HgVSHB2G();
    file_0141_wfLssG2B();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIThcnXf
    printLine("Calling ENlVX()...");
    file_0141_HjILE();
    printLine("Finished 69ZlC()");
#endif
#ifndef OMITFt4Fd
    printLine("Calling I2KyT()...");
    file_0141_miTY4();
    printLine("Finished SWnxZ()");
#endif
    return 0;
}

#endif
