
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITkKV9S

void file_0126_tTm0W()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wmemset(data, L'A', 100-1);
    data[100-1] = L'\0';
    free(data);
    printWLine(data);
}

#endif

#ifndef OMITWZQkb

static void file_0126_7NltTG2B()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wmemset(data, L'A', 100-1);
    data[100-1] = L'\0';
    printWLine(data);
}

static void file_0126_1yGlqB2G()
{
    wchar_t * data;
    data = NULL;
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wmemset(data, L'A', 100-1);
    data[100-1] = L'\0';
    free(data);
    ;
}

void file_0126_2cEOD()
{
    file_0126_Mm7osG2B();
    file_0126_FBViHB2G();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITH97xq
    printLine("Calling cXZF9()...");
    file_0126_Q6kWK();
    printLine("Finished NvW4S()");
#endif
#ifndef OMITOgiyx
    printLine("Calling scG6T()...");
    file_0126_7f5Ff();
    printLine("Finished RbAg3()");
#endif
    return 0;
}

#endif
