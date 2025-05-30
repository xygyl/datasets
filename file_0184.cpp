
#include "std_testcase.h"

#include <wchar.h>

namespace file_0184
{

#ifndef OMITvxerM

void file_0184_BilnJ()
{
    TwoIntsClass * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
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
    if(GLOBAL_CONST_TRUE)
    {
        printIntLine(data[0].intOne);
    }
}

#endif

#ifndef OMITN9eaJ

static void file_0184_QVoRoB2G1()
{
    TwoIntsClass * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
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
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0184_86UZrB2G2()
{
    TwoIntsClass * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
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
    if(GLOBAL_CONST_TRUE)
    {
        ;
    }
}

static void file_0184_OsmN2G2B1()
{
    TwoIntsClass * data;
    data = NULL;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
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
    if(GLOBAL_CONST_TRUE)
    {
        printIntLine(data[0].intOne);
    }
}

static void file_0184_WYBGPG2B2()
{
    TwoIntsClass * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
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
    if(GLOBAL_CONST_TRUE)
    {
        printIntLine(data[0].intOne);
    }
}

void file_0184_DsO0e()
{
    file_0184_mCm6gB2G1();
    file_0184_XRfpqB2G2();
    file_0184_wTzkQG2B1();
    file_0184_v0R4lG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0184;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITRN23b
    printLine("Calling VCCHP()...");
    file_0184_MOz0p();
    printLine("Finished WNiww()");
#endif
#ifndef OMIT2sCiz
    printLine("Calling gSk16()...");
    file_0184_llpdj();
    printLine("Finished Oqnkc()");
#endif
    return 0;
}

#endif
