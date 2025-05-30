
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

namespace file_0233
{

#ifndef OMITf0Snx

void file_0233_O4LtE()
{
    int * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new int[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
        delete [] data;
    }
    if(staticReturnsTrue())
    {
        printIntLine(data[0]);
    }
}

#endif

#ifndef OMIT2WtCl

static void file_0233_yW5VqB2G1()
{
    int * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new int[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
        delete [] data;
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

static void file_0233_WR2v4B2G2()
{
    int * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new int[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
        delete [] data;
    }
    if(staticReturnsTrue())
    {
        ;
    }
}

static void file_0233_f6m62G2B1()
{
    int * data;
    data = NULL;
    if(staticReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
    }
    if(staticReturnsTrue())
    {
        printIntLine(data[0]);
    }
}

static void file_0233_2Fgh7G2B2()
{
    int * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new int[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
    }
    if(staticReturnsTrue())
    {
        printIntLine(data[0]);
    }
}

void file_0233_z1ufQ()
{
    file_0233_caDIVB2G1();
    file_0233_TUgF6B2G2();
    file_0233_LHwVdG2B1();
    file_0233_o20RhG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0233;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITjbnke
    printLine("Calling rDkbj()...");
    file_0233_lcAcn();
    printLine("Finished 0DEGK()");
#endif
#ifndef OMITOCyTk
    printLine("Calling 9rquT()...");
    file_0233_McfRN();
    printLine("Finished Y59hd()");
#endif
    return 0;
}

#endif
