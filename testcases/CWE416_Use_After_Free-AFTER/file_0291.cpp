
#include "std_testcase.h"

#include <wchar.h>

namespace file_0291
{

#ifndef OMITwNFz3

void file_0291_IUAXj()
{
    twoIntsStruct * data;
    data = NULL;
    while(1)
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
        break;
    }
    while(1)
    {
        printStructLine(&data[0]);
        break;
    }
}

#endif

#ifndef OMITr4q5S

static void file_0291_IaxBnB2G()
{
    twoIntsStruct * data;
    data = NULL;
    while(1)
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
        break;
    }
    while(1)
    {
        ;
        break;
    }
}

static void file_0291_LBLzYG2B()
{
    twoIntsStruct * data;
    data = NULL;
    while(1)
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
        break;
    }
    while(1)
    {
        printStructLine(&data[0]);
        break;
    }
}

void file_0291_Rhfb4()
{
    file_0291_bUbIDB2G();
    file_0291_J0FRmG2B();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0291;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT7Rwlo
    printLine("Calling eXWuW()...");
    file_0291_DAuQD();
    printLine("Finished JuazU()");
#endif
#ifndef OMITmDEV7
    printLine("Calling 6UIkr()...");
    file_0291_B32gp();
    printLine("Finished 4mFuS()");
#endif
    return 0;
}

#endif
