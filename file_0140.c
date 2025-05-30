
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITsD4Bp

void file_0140_BWGof()
{
    wchar_t * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        printWLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}

#endif

#ifndef OMITUH0Tz

static void file_0140_cKARPB2G1()
{
    wchar_t * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(8)
    {
    case 7:
        printLine("Benign, fixed string");
        break;
    default:
        ;
        break;
    }
}

static void file_0140_ZU6cIB2G2()
{
    wchar_t * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        ;
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}

static void file_0140_pgtfAG2B1()
{
    wchar_t * data;
    data = NULL;
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        break;
    }
    switch(7)
    {
    case 7:
        printWLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}

static void file_0140_HTDGGG2B2()
{
    wchar_t * data;
    data = NULL;
    switch(6)
    {
    case 6:
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
    switch(7)
    {
    case 7:
        printWLine(data);
        break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}

void file_0140_ks0qV()
{
    file_0140_UPURLB2G1();
    file_0140_AjFnuB2G2();
    file_0140_fE5cDG2B1();
    file_0140_UXytHG2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT3F3Fo
    printLine("Calling dHcKQ()...");
    file_0140_g1DEr();
    printLine("Finished mFOb8()");
#endif
#ifndef OMITQonJ1
    printLine("Calling 4mxQH()...");
    file_0140_sFMwp();
    printLine("Finished FpShd()");
#endif
    return 0;
}

#endif
