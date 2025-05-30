
#include "std_testcase.h"

#include <wchar.h>

namespace file_0247
{

#ifndef OMITL0ISE

void file_0247_h8nSVSink(int * * dataPtr);

void file_0247_67Oyl()
{
    int * data;
    data = NULL;
    data = new int[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5;
        }
    }
    delete [] data;
    file_0247_fb23hSink(&data);
}

#endif

#ifndef OMIToabJE

void file_0247_WjoaJG2BSink(int * * data);

static void file_0247_6hkCiG2B()
{
    int * data;
    data = NULL;
    data = new int[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5;
        }
    }
    file_0247_lh5b5G2BSink(&data);
}

void file_0247_pfzF0B2GSink(int * * data);

static void file_0247_BSYabB2G()
{
    int * data;
    data = NULL;
    data = new int[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5;
        }
    }
    delete [] data;
    file_0247_tto31B2GSink(&data);
}

void file_0247_NRgAk()
{
    file_0247_VBxJCG2B();
    file_0247_BJk7kB2G();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0247;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT65Vjg
    printLine("Calling pHmR5()...");
    file_0247_luKbA();
    printLine("Finished mtDj2()");
#endif
#ifndef OMIT2iKFn
    printLine("Calling QSpfR()...");
    file_0247_veUjq();
    printLine("Finished Ucw0N()");
#endif
    return 0;
}

#endif
