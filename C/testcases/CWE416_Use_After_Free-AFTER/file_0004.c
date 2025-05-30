
#include "std_testcase.h"

#include <wchar.h>

static const int STATIC_CONST_TRUE = 1;
static const int STATIC_CONST_FALSE = 0;

#ifndef OMITitels

void file_0004_3xUsU()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        free(data);
    }
    if(STATIC_CONST_TRUE)
    {
        printLine(data);
    }
}

#endif

#ifndef OMITjAMUw

static void file_0004_z8HkTB2G1()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
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

static void file_0004_m6o46B2G2()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        free(data);
    }
    if(STATIC_CONST_TRUE)
    {
        ;
    }
}

static void file_0004_O9gzVG2B1()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
    }
    if(STATIC_CONST_TRUE)
    {
        printLine(data);
    }
}

static void file_0004_iNGBjG2B2()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
    }
    if(STATIC_CONST_TRUE)
    {
        printLine(data);
    }
}

void file_0004_d04dF()
{
    file_0004_CwfLVB2G1();
    file_0004_86RS2B2G2();
    file_0004_puywVG2B1();
    file_0004_d9K8hG2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITZdNlm
    printLine("Calling CDJ0H()...");
    file_0004_eEtcU();
    printLine("Finished u8Xda()");
#endif
#ifndef OMIT5Un4l
    printLine("Calling CWSrI()...");
    file_0004_jVyCu();
    printLine("Finished jSjzU()");
#endif
    return 0;
}

#endif
