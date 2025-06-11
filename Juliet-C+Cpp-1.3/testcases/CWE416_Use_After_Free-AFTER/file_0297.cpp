
#include "std_testcase.h"

#include <wchar.h>

namespace file_0297
{

#ifndef OMITZvinC

void file_0297_9wtXaSink(twoIntsStruct * * dataPtr);

void file_0297_VcMhj()
{
    twoIntsStruct * data;
    data = NULL;
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
    file_0297_IuKN8Sink(&data);
}

#endif

#ifndef OMITkk3zh

void file_0297_k4955G2BSink(twoIntsStruct * * data);

static void file_0297_qmYKfG2B()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i].intOne = 1;
            data[i].intTwo = 2;
        }
    }
    file_0297_91B5bG2BSink(&data);
}

void file_0297_R9uKzB2GSink(twoIntsStruct * * data);

static void file_0297_wFXMQB2G()
{
    twoIntsStruct * data;
    data = NULL;
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
    file_0297_rkHUCB2GSink(&data);
}

void file_0297_9eSxI()
{
    file_0297_GfkwKG2B();
    file_0297_hIBA5B2G();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0297;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITcbKwN
    printLine("Calling qst4W()...");
    file_0297_HCUjA();
    printLine("Finished u07u8()");
#endif
#ifndef OMITDbFkS
    printLine("Calling miiL4()...");
    file_0297_EkLmm();
    printLine("Finished Xmc3G()");
#endif
    return 0;
}

#endif
