
#include "std_testcase.h"

#include <wchar.h>

namespace file_0293
{

#ifndef OMITVkL56

void file_0293_nz86L()
{
    twoIntsStruct * data;
    data = NULL;
    goto source;
source:
    data = new twoIntsStruct[100];
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
    printStructLine(&data[0]);
}

#endif

#ifndef OMITPShzT

static void file_0293_8qQvlB2G()
{
    twoIntsStruct * data;
    data = NULL;
    goto source;
source:
    data = new twoIntsStruct[100];
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

static void file_0293_8Eo5eG2B()
{
    twoIntsStruct * data;
    data = NULL;
    goto source;
source:
    data = new twoIntsStruct[100];
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
    printStructLine(&data[0]);
}

void file_0293_jzJhX()
{
    file_0293_rOKaEB2G();
    file_0293_jIdUAG2B();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0293;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITOlxwY
    printLine("Calling pywOl()...");
    file_0293_KQ1Wq();
    printLine("Finished adPYo()");
#endif
#ifndef OMITG6S9Q
    printLine("Calling emR1K()...");
    file_0293_YwLIH();
    printLine("Finished IR9oN()");
#endif
    return 0;
}

#endif
