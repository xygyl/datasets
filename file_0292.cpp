
#include "std_testcase.h"

#include <wchar.h>

namespace file_0292
{

#ifndef OMITkIbgY

void file_0292_fF2Ax()
{
    int i,j;
    twoIntsStruct * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
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
    }
    for(j = 0; j < 1; j++)
    {
        printStructLine(&data[0]);
    }
}

#endif

#ifndef OMIT17Bx3

static void file_0292_IiK86B2G()
{
    int i,k;
    twoIntsStruct * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
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
    }
    for(k = 0; k < 1; k++)
    {
        ;
    }
}

static void file_0292_2U0CsG2B()
{
    int h,j;
    twoIntsStruct * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = new twoIntsStruct[100];
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
        printStructLine(&data[0]);
    }
}

void file_0292_4PexF()
{
    file_0292_kgJjuB2G();
    file_0292_eNjdtG2B();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0292;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITzKiP4
    printLine("Calling 7DeK5()...");
    file_0292_xXgvO();
    printLine("Finished qNYrL()");
#endif
#ifndef OMITVE8Nd
    printLine("Calling ipHQD()...");
    file_0292_X3xaS();
    printLine("Finished KZr5n()");
#endif
    return 0;
}

#endif
