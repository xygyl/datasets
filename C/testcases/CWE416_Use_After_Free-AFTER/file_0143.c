
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITgI7QK

void file_0143_nfj1q()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wmemset(data, L'A', 100-1);
    data[100-1] = L'\0';
    free(data);
    goto sink;
sink:
    printWLine(data);
}

#endif

#ifndef OMIT7MDDD

static void file_0143_jRWKjB2G()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wmemset(data, L'A', 100-1);
    data[100-1] = L'\0';
    free(data);
    goto sink;
sink:
    ;
}

static void file_0143_7v8AkG2B()
{
    wchar_t * data;
    data = NULL;
    goto source;
source:
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wmemset(data, L'A', 100-1);
    data[100-1] = L'\0';
    goto sink;
sink:
    printWLine(data);
}

void file_0143_L2mDG()
{
    file_0143_7DcnMB2G();
    file_0143_hFqiAG2B();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITdIZST
    printLine("Calling ZBjRk()...");
    file_0143_KZYd2();
    printLine("Finished 3lSQr()");
#endif
#ifndef OMITO5XiX
    printLine("Calling HZmS7()...");
    file_0143_QWBEq();
    printLine("Finished aOF0t()");
#endif
    return 0;
}

#endif
