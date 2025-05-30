
#include "std_testcase.h"

#include <wchar.h>

namespace file_0243
{

#ifndef OMITKxXu5

void file_0243_TyKGJ()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = new int[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5;
        }
    }
    delete [] data;
    goto sink;
sink:
    printIntLine(data[0]);
}

#endif

#ifndef OMITsVUHp

static void file_0243_RjZAiB2G()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = new int[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5;
        }
    }
    delete [] data;
    goto sink;
sink:
    ;
}

static void file_0243_qYsEYG2B()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = new int[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5;
        }
    }
    goto sink;
sink:
    printIntLine(data[0]);
}

void file_0243_pyTNV()
{
    file_0243_jZdFeB2G();
    file_0243_PaPjvG2B();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0243;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITNseKm
    printLine("Calling ExIn4()...");
    file_0243_Vdy2o();
    printLine("Finished ptypd()");
#endif
#ifndef OMITRVBjK
    printLine("Calling b172y()...");
    file_0243_SWeSU();
    printLine("Finished bKj3I()");
#endif
    return 0;
}

#endif
