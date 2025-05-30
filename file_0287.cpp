
#include "std_testcase.h"

#include <wchar.h>

namespace file_0287
{

#ifndef OMITLOvkB

void file_0287_8fqtN()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
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
    else
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
    if(globalReturnsTrueOrFalse())
    {
        printStructLine(&data[0]);
    }
    else
    {
        ;
    }
}

#endif

#ifndef OMITOntlx

static void file_0287_dnnfOB2G()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
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
    else
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
    if(globalReturnsTrueOrFalse())
    {
        ;
    }
    else
    {
        ;
    }
}

static void file_0287_FhGIcG2B()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
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
    else
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
    if(globalReturnsTrueOrFalse())
    {
        printStructLine(&data[0]);
    }
    else
    {
        printStructLine(&data[0]);
    }
}

void file_0287_sWvr7()
{
    file_0287_BZFjGB2G();
    file_0287_6neVqG2B();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0287;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITdduoL
    printLine("Calling c8JFV()...");
    file_0287_TVhq8();
    printLine("Finished MRd29()");
#endif
#ifndef OMIT1EYkq
    printLine("Calling lAhQb()...");
    file_0287_AWJ5i();
    printLine("Finished B6FaK()");
#endif
    return 0;
}

#endif
