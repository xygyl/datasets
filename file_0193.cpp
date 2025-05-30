
#include "std_testcase.h"

#include <wchar.h>

namespace file_0193
{

#ifndef OMITKWGrC

void file_0193_bD6Jm()
{
    TwoIntsClass * data;
    data = NULL;
    goto source;
source:
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
    goto sink;
sink:
    printIntLine(data[0].intOne);
}

#endif

#ifndef OMIT1NLtA

static void file_0193_A9ygPB2G()
{
    TwoIntsClass * data;
    data = NULL;
    goto source;
source:
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
    goto sink;
sink:
    ;
}

static void file_0193_U27hlG2B()
{
    TwoIntsClass * data;
    data = NULL;
    goto source;
source:
    data = new TwoIntsClass[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i].intOne = 1;
            data[i].intTwo = 2;
        }
    }
    goto sink;
sink:
    printIntLine(data[0].intOne);
}

void file_0193_ZsGBf()
{
    file_0193_TW3aPB2G();
    file_0193_JZZTuG2B();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0193;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITs1STm
    printLine("Calling eLJkS()...");
    file_0193_WHd9Z();
    printLine("Finished XC6hu()");
#endif
#ifndef OMITcJajZ
    printLine("Calling oiBkC()...");
    file_0193_0qppw();
    printLine("Finished 73kgY()");
#endif
    return 0;
}

#endif
