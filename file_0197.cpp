
#include "std_testcase.h"

#include <wchar.h>

namespace file_0197
{

#ifndef OMITnWlHt

void file_0197_ZZ6EKSink(TwoIntsClass * * dataPtr);

void file_0197_QE9Lj()
{
    TwoIntsClass * data;
    data = NULL;
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
    file_0197_mcLTASink(&data);
}

#endif

#ifndef OMITT8oMo

void file_0197_eFKaFG2BSink(TwoIntsClass * * data);

static void file_0197_3eqV3G2B()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i].intOne = 1;
            data[i].intTwo = 2;
        }
    }
    file_0197_xCBPvG2BSink(&data);
}

void file_0197_4IW2bB2GSink(TwoIntsClass * * data);

static void file_0197_XHtM5B2G()
{
    TwoIntsClass * data;
    data = NULL;
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
    file_0197_GHpYqB2GSink(&data);
}

void file_0197_NZzGe()
{
    file_0197_bJilzG2B();
    file_0197_vX1XeB2G();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0197;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITabUG8
    printLine("Calling OsUos()...");
    file_0197_wscQu();
    printLine("Finished p7t3J()");
#endif
#ifndef OMITUfOow
    printLine("Calling 9EZH1()...");
    file_0197_5PwZJ();
    printLine("Finished 8m3Rg()");
#endif
    return 0;
}

#endif
