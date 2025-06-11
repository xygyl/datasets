
#include "std_testcase.h"

#include <wchar.h>

static int staticFive = 5;

#ifndef OMIThlVOo

void file_0007_d6UoS()
{
    char * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        free(data);
    }
    if(staticFive==5)
    {
        printLine(data);
    }
}

#endif

#ifndef OMITR0cc1

static void file_0007_tpOYPB2G1()
{
    char * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
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

static void file_0007_5FmrFB2G2()
{
    char * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        free(data);
    }
    if(staticFive==5)
    {
        ;
    }
}

static void file_0007_ShEEdG2B1()
{
    char * data;
    data = NULL;
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        printLine(data);
    }
}

static void file_0007_edaGXG2B2()
{
    char * data;
    data = NULL;
    if(staticFive==5)
    {
        data = (char *)malloc(100*sizeof(char));
        if (data == NULL) {exit(-1);}
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
    }
    if(staticFive==5)
    {
        printLine(data);
    }
}

void file_0007_Y88zz()
{
    file_0007_s1ybBB2G1();
    file_0007_Cee9CB2G2();
    file_0007_jpkk7G2B1();
    file_0007_L1UoMG2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITXKA9Y
    printLine("Calling VxkcH()...");
    file_0007_UEUPU();
    printLine("Finished Viv5p()");
#endif
#ifndef OMITaHX71
    printLine("Calling ZLrmM()...");
    file_0007_KAoLJ();
    printLine("Finished aThkL()");
#endif
    return 0;
}

#endif
