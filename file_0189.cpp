
#include "std_testcase.h"

#include <wchar.h>

namespace file_0189
{

#ifndef OMITQLU9z

void file_0189_BExkC()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new TwoIntsClass[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        delete [] data;
    }
    if(globalFive==5)
    {
        printIntLine(data[0].intOne);
    }
}

#endif

#ifndef OMITYYgDU

static void file_0189_j5ePKB2G1()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new TwoIntsClass[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        delete [] data;
    }
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0189_DI58UB2G2()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new TwoIntsClass[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        delete [] data;
    }
    if(globalFive==5)
    {
        ;
    }
}

static void file_0189_7E42oG2B1()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new TwoIntsClass[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
    }
    if(globalFive==5)
    {
        printIntLine(data[0].intOne);
    }
}

static void file_0189_PEWg5G2B2()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new TwoIntsClass[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
    }
    if(globalFive==5)
    {
        printIntLine(data[0].intOne);
    }
}

void file_0189_0XXgd()
{
    file_0189_Qc5TwB2G1();
    file_0189_HShNkB2G2();
    file_0189_1FnUxG2B1();
    file_0189_WUWqOG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0189;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITKaU4n
    printLine("Calling ymfPS()...");
    file_0189_nONFa();
    printLine("Finished LY7bb()");
#endif
#ifndef OMITh8yED
    printLine("Calling fJID5()...");
    file_0189_sdI6r();
    printLine("Finished 7nXZr()");
#endif
    return 0;
}

#endif
