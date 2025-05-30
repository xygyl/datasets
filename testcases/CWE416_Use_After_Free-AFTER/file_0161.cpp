
#include "std_testcase.h"

#include <wchar.h>

namespace file_0161
{

#ifndef OMITOxT4s

void file_0161_iEEwP()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        delete [] data;
    }
    if(globalReturnsTrue())
    {
        printLine(data);
    }
}

#endif

#ifndef OMIT9lq2I

static void file_0161_mZRs3B2G1()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        delete [] data;
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

static void file_0161_wsnufB2G2()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        delete [] data;
    }
    if(globalReturnsTrue())
    {
        ;
    }
}

static void file_0161_xg7RTG2B1()
{
    char * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
    }
    if(globalReturnsTrue())
    {
        printLine(data);
    }
}

static void file_0161_6VYc6G2B2()
{
    char * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
    }
    if(globalReturnsTrue())
    {
        printLine(data);
    }
}

void file_0161_TqtQR()
{
    file_0161_ht2LcB2G1();
    file_0161_dm8kvB2G2();
    file_0161_j3Nw6G2B1();
    file_0161_xx3CuG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0161;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITxivMO
    printLine("Calling P29U2()...");
    file_0161_BRVGA();
    printLine("Finished LKLYC()");
#endif
#ifndef OMITxpJq2
    printLine("Calling M60ck()...");
    file_0161_pcOe2();
    printLine("Finished AITml()");
#endif
    return 0;
}

#endif
