
#include "std_testcase.h"

#include <wchar.h>

static int staticReturnsTrue()
{
    return 1;
}

static int staticReturnsFalse()
{
    return 0;
}

#ifndef OMITUEofb

void file_0133_L8EUW()
{
    wchar_t * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(staticReturnsTrue())
    {
        printWLine(data);
    }
}

#endif

#ifndef OMITbr98f

static void file_0133_JL7UTB2G1()
{
    wchar_t * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(staticReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0133_vzA3MB2G2()
{
    wchar_t * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(staticReturnsTrue())
    {
        ;
    }
}

static void file_0133_T6qpsG2B1()
{
    wchar_t * data;
    data = NULL;
    if(staticReturnsFalse())
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
    if(staticReturnsTrue())
    {
        printWLine(data);
    }
}

static void file_0133_lFC9SG2B2()
{
    wchar_t * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(staticReturnsTrue())
    {
        printWLine(data);
    }
}

void file_0133_Epo33()
{
    file_0133_i7rquB2G1();
    file_0133_jLxZPB2G2();
    file_0133_CpqRiG2B1();
    file_0133_q9dlZG2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITMikkL
    printLine("Calling 2oRLQ()...");
    file_0133_cNMpY();
    printLine("Finished YuqMm()");
#endif
#ifndef OMITMVVxc
    printLine("Calling FxrqG()...");
    file_0133_OY2Ia();
    printLine("Finished 2CJrh()");
#endif
    return 0;
}

#endif
