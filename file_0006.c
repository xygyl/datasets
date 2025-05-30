
#include "std_testcase.h"

#include <wchar.h>

static const int STATIC_CONST_FIVE = 5;

#ifndef OMITgvCh6

void file_0006_f0Hj4()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        free(data);
    }
    if(STATIC_CONST_FIVE==5)
    {
        printLine(data);
    }
}

#endif

#ifndef OMITkXoBd

static void file_0006_0xVnQB2G1()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        free(data);
    }
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0006_e3nwyB2G2()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        free(data);
    }
    if(STATIC_CONST_FIVE==5)
    {
        ;
    }
}

static void file_0006_P7V7DG2B1()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FIVE!=5)
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
    if(STATIC_CONST_FIVE==5)
    {
        printLine(data);
    }
}

static void file_0006_vhLCUG2B2()
{
    char * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
    }
    if(STATIC_CONST_FIVE==5)
    {
        printLine(data);
    }
}

void file_0006_olx6G()
{
    file_0006_6WabEB2G1();
    file_0006_TTYVhB2G2();
    file_0006_8FVumG2B1();
    file_0006_khDqgG2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITXuoSU
    printLine("Calling 7ZMuY()...");
    file_0006_JPsBb();
    printLine("Finished nRGRZ()");
#endif
#ifndef OMITVSjYI
    printLine("Calling FryEj()...");
    file_0006_ZQLMx();
    printLine("Finished DQNxw()");
#endif
    return 0;
}

#endif
