
#include "std_testcase.h"

#include <wchar.h>

namespace file_0294
{

#ifndef OMITjNo9W

void sourcekSQqn(intStruct * &data)
{
    data = new intStruct[100];
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

void functionUsJOV()
{
    intStruct * data;
    data = NULL;
    sourceRWK6u(data);
    printStructLine(&data[0]);
}

#endif

#ifndef OMITu1GcK

static void sourceOcqJGG2B(intStruct * &data)
{
    data = new intStruct[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i].intOne = 1;
            data[i].intTwo = 2;
        }
    }
}

static void functionMi9t0G2B()
{
    intStruct * data;
    data = NULL;
    sourceOUWY8G2B(data);
    printStructLine(&data[0]);
}

static void sourcemEDZmB2G(intStruct * &data)
{
    data = new intStruct[100];
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

static void functionz3HHgB2G()
{
    intStruct * data;
    data = NULL;
    sourceCAb1VB2G(data);
    ;
}

void functionBQWz4()
{
    functionwKEG4G2B();
    functionG5lYWB2G();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0294;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITnOWJZ
    printLine("Calling functionlwa46()...");
    functionPgP8B();
    printLine("Finished function7RWvl()");
#endif
#ifndef OMITqEjQj
    printLine("Calling functionTYNpN()...");
    functionz0OVY();
    printLine("Finished functionzHVQG()");
#endif
    return 0;
}

#endif
