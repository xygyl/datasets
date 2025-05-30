
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

#ifndef OMITE0dgG

void file_0008_6dGr6()
{
    char * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        free(data);
    }
    if(staticReturnsTrue())
    {
        printLine(data);
    }
}

#endif

#ifndef OMIT3ICDD

static void file_0008_V7vblB2G1()
{
    char * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
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

static void file_0008_JLlyqB2G2()
{
    char * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        free(data);
    }
    if(staticReturnsTrue())
    {
        ;
    }
}

static void file_0008_5hHl0G2B1()
{
    char * data;
    data = NULL;
    if(staticReturnsFalse())
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
    if(staticReturnsTrue())
    {
        printLine(data);
    }
}

static void file_0008_2nEuLG2B2()
{
    char * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
    }
    if(staticReturnsTrue())
    {
        printLine(data);
    }
}

void file_0008_BvrKJ()
{
    file_0008_VKEGHB2G1();
    file_0008_jqx6oB2G2();
    file_0008_W9QbJG2B1();
    file_0008_uuiYbG2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT1WBae
    printLine("Calling xcaem()...");
    file_0008_hBN4n();
    printLine("Finished CGnJa()");
#endif
#ifndef OMITIdXPj
    printLine("Calling VZW6o()...");
    file_0008_XUd3p();
    printLine("Finished mG4a4()");
#endif
    return 0;
}

#endif
