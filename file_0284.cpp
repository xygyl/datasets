
#include "std_testcase.h"

#include <wchar.h>

namespace file_0284
{

#ifndef OMITbtvZw

void file_0284_jNC03()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
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
    if(GLOBAL_CONST_TRUE)
    {
        printStructLine(&data[0]);
    }
}

#endif

#ifndef OMITR3De8

static void file_0284_HSsC7B2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
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
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0284_Q7rJUB2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
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
    if(GLOBAL_CONST_TRUE)
    {
        ;
    }
}

static void file_0284_Olrs8G2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
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
    if(GLOBAL_CONST_TRUE)
    {
        printStructLine(&data[0]);
    }
}

static void file_0284_JNefiG2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
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
    if(GLOBAL_CONST_TRUE)
    {
        printStructLine(&data[0]);
    }
}

void file_0284_iCFZy()
{
    file_0284_StYl8B2G1();
    file_0284_xMbdCB2G2();
    file_0284_zX0ukG2B1();
    file_0284_KV0DvG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0284;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITpNzOX
    printLine("Calling maKfI()...");
    file_0284_pNQlu();
    printLine("Finished ftgvd()");
#endif
#ifndef OMIT8VC5n
    printLine("Calling 3WHHN()...");
    file_0284_cKahH();
    printLine("Finished yB9F1()");
#endif
    return 0;
}

#endif
