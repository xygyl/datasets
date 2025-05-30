
#include "std_testcase.h"

#include <wchar.h>

static int staticFive = 5;

namespace file_0232
{

#ifndef OMIT55Ldo

void file_0232_XLvQq()
{
    int * data;
    data = NULL;
    if(staticFive==5)
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
    if(staticFive==5)
    {
        printIntLine(data[0]);
    }
}

#endif

#ifndef OMITPMHy0

static void file_0232_ZM2omB2G1()
{
    int * data;
    data = NULL;
    if(staticFive==5)
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
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0232_nLEtSB2G2()
{
    int * data;
    data = NULL;
    if(staticFive==5)
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
    if(staticFive==5)
    {
        ;
    }
}

static void file_0232_CxvSBG2B1()
{
    int * data;
    data = NULL;
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        printIntLine(data[0]);
    }
}

static void file_0232_B6AtzG2B2()
{
    int * data;
    data = NULL;
    if(staticFive==5)
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
    if(staticFive==5)
    {
        printIntLine(data[0]);
    }
}

void file_0232_DsT8V()
{
    file_0232_CS0kyB2G1();
    file_0232_Atvo8B2G2();
    file_0232_MHFZVG2B1();
    file_0232_TrwVBG2B2();
}

#endif

}

#ifdef INCLUDEMAIN

using namespace file_0232;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITgtpcc
    printLine("Calling qbHp6()...");
    file_0232_5usN2();
    printLine("Finished Ox0I0()");
#endif
#ifndef OMITcyMOY
    printLine("Calling biwg8()...");
    file_0232_iaLrT();
    printLine("Finished 0iTNK()");
#endif
    return 0;
}

#endif
