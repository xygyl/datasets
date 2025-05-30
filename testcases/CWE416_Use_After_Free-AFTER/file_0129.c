
#include "std_testcase.h"

#include <wchar.h>

static const int STATIC_CONST_TRUE = 1;
static const int STATIC_CONST_FALSE = 0;

#ifndef OMIT2CGc5

void file_0129_9niZv()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(STATIC_CONST_TRUE)
    {
        printWLine(data);
    }
}

#endif

#ifndef OMIT93iZ5

static void file_0129_v2078B2G1()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0129_illwyB2G2()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(STATIC_CONST_TRUE)
    {
        ;
    }
}

static void file_0129_YzBJqG2B1()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
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
    if(STATIC_CONST_TRUE)
    {
        printWLine(data);
    }
}

static void file_0129_cp1bwG2B2()
{
    wchar_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(STATIC_CONST_TRUE)
    {
        printWLine(data);
    }
}

void file_0129_aeBMG()
{
    file_0129_uph6oB2G1();
    file_0129_DcoZqB2G2();
    file_0129_geE7GG2B1();
    file_0129_RhFgjG2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITsEN29
    printLine("Calling xrg4N()...");
    file_0129_11Fo8();
    printLine("Finished il1Ux()");
#endif
#ifndef OMIT4zfwq
    printLine("Calling 0RfIK()...");
    file_0129_7BeeE();
    printLine("Finished X1W1O()");
#endif
    return 0;
}

#endif
