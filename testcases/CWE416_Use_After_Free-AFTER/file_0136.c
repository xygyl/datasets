
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITnTl9h

void file_0136_s3mHX()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(globalReturnsTrue())
    {
        printWLine(data);
    }
}

#endif

#ifndef OMITNESrv

static void file_0136_2S3jrB2G1()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0136_RjzIzB2G2()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        free(data);
    }
    if(globalReturnsTrue())
    {
        ;
    }
}

static void file_0136_1WacDG2B1()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        printWLine(data);
    }
}

static void file_0136_vnpz6G2B2()
{
    wchar_t * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (wchar_t *)malloc(100*sizeof(wchar_t));
        if (data == NULL) {exit(-1);}
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    if(globalReturnsTrue())
    {
        printWLine(data);
    }
}

void file_0136_gmvxR()
{
    file_0136_3DPMJB2G1();
    file_0136_vtFOaB2G2();
    file_0136_4r5ntG2B1();
    file_0136_mAaC8G2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITDIdCH
    printLine("Calling kYPak()...");
    file_0136_rM2hG();
    printLine("Finished nZGpK()");
#endif
#ifndef OMIT2DcAB
    printLine("Calling WjDrg()...");
    file_0136_qQgSs();
    printLine("Finished kBQr1()");
#endif
    return 0;
}

#endif
