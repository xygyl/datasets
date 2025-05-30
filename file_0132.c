
#include "std_testcase.h"

#include <wchar.h>

static int staticFive = 5;

#ifndef OMITrYJmt

void file_0132_qYqiw()
{
    wchar_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(staticFive==5)
    {
        printWLine(data);
    }
}

#endif

#ifndef OMITRrByS

static void file_0132_1qKlZB2G1()
{
    wchar_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0132_8DVmfB2G2()
{
    wchar_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(staticFive==5)
    {
        ;
    }
}

static void file_0132_Yul1KG2B1()
{
    wchar_t * data;
    data = NULL;
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        printWLine(data);
    }
}

static void file_0132_8qFViG2B2()
{
    wchar_t * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(staticFive==5)
    {
        printWLine(data);
    }
}

void file_0132_MwPFA()
{
    file_0132_zTQSsB2G1();
    file_0132_6PZP3B2G2();
    file_0132_A27SWG2B1();
    file_0132_BhuEwG2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITBjxkQ
    printLine("Calling NcxJ8()...");
    file_0132_mQuht();
    printLine("Finished wAblm()");
#endif
#ifndef OMIThEwA1
    printLine("Calling eNU5l()...");
    file_0132_LxvVx();
    printLine("Finished wsftT()");
#endif
    return 0;
}

#endif
