
#include "std_testcase.h"

#include <wchar.h>

namespace file_0163
{

#ifndef OMITbaLXM

void file_0163_8zHY8()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        delete [] data;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        printLine(data);
    }
}

#endif

#ifndef OMITgCq6x

static void file_0163_PecCsB2G1()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        delete [] data;
    }
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0163_NEle5B2G2()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        delete [] data;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        ;
    }
}

static void file_0163_Zt7frG2B1()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        printLine(data);
    }
}

static void file_0163_twMBjG2B2()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        printLine(data);
    }
}

void file_0163_diSyf()
{
    file_0163_TxGv5B2G1();
    file_0163_zLqbaB2G2();
    file_0163_4uyhfG2B1();
    file_0163_XltnjG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0163;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITrw0bL
    printLine("Calling Mcj7r()...");
    file_0163_37Bif();
    printLine("Finished EO7tf()");
#endif
#ifndef OMIT4aLGU
    printLine("Calling WXNE4()...");
    file_0163_JWGPZ();
    printLine("Finished lcTKw()");
#endif
    return 0;
}

#endif
