
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMIT8sAm2

void file_0011_S8f9a()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        free(data);
    }
    if(globalReturnsTrue())
    {
        printLine(data);
    }
}

#endif

#ifndef OMITpg4SD

static void file_0011_7PHl7B2G1()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
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

static void file_0011_3oz4aB2G2()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        free(data);
    }
    if(globalReturnsTrue())
    {
        ;
    }
}

static void file_0011_TrLmaG2B1()
{
    char * data;
    data = NULL;
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        printLine(data);
    }
}

static void file_0011_CC3c9G2B2()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
    }
    if(globalReturnsTrue())
    {
        printLine(data);
    }
}

void file_0011_3QgyK()
{
    file_0011_7oPBmB2G1();
    file_0011_RieylB2G2();
    file_0011_VrbQ8G2B1();
    file_0011_FnpqvG2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITh2aad
    printLine("Calling wm7Sv()...");
    file_0011_zlXoK();
    printLine("Finished RTiQ6()");
#endif
#ifndef OMITdTED7
    printLine("Calling p2TPz()...");
    file_0011_o7i6D();
    printLine("Finished jpvkg()");
#endif
    return 0;
}

#endif
