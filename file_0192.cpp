
#include "std_testcase.h"

#include <wchar.h>

namespace file_0192
{

#ifndef OMITJ0Ihf

void file_0192_yz1Ep()
{
    int i,j;
    TwoIntsClass * data;
    data = NULL;
    for(i = 0; i < 1; i++)
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
    for(j = 0; j < 1; j++)
    {
        printIntLine(data[0].intOne);
    }
}

#endif

#ifndef OMIT1p5C1

static void file_0192_tJRCIB2G()
{
    int i,k;
    TwoIntsClass * data;
    data = NULL;
    for(i = 0; i < 1; i++)
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
    for(k = 0; k < 1; k++)
    {
        ;
    }
}

static void file_0192_Q1gLwG2B()
{
    int h,j;
    TwoIntsClass * data;
    data = NULL;
    for(h = 0; h < 1; h++)
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
    for(j = 0; j < 1; j++)
    {
        printIntLine(data[0].intOne);
    }
}

void file_0192_tZ0JU()
{
    file_0192_NvBUlB2G();
    file_0192_mdiJhG2B();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0192;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT5oH7G
    printLine("Calling jCbsf()...");
    file_0192_FUrmt();
    printLine("Finished BaATk()");
#endif
#ifndef OMITQxYnN
    printLine("Calling NnXLA()...");
    file_0192_xqfMI();
    printLine("Finished vmgbt()");
#endif
    return 0;
}

#endif
