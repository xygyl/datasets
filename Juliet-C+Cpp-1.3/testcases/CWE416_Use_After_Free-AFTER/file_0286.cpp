
#include "std_testcase.h"

#include <wchar.h>

namespace file_0286
{

#ifndef OMITClREv

void file_0286_NdzyY()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrue())
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
    if(globalReturnsTrue())
    {
        printStructLine(&data[0]);
    }
}

#endif

#ifndef OMIT9PCWs

static void file_0286_f51ebB2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrue())
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
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0286_IQCc5B2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrue())
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
    if(globalReturnsTrue())
    {
        ;
    }
}

static void file_0286_uu33RG2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        printStructLine(&data[0]);
    }
}

static void file_0286_D0rLwG2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrue())
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
    if(globalReturnsTrue())
    {
        printStructLine(&data[0]);
    }
}

void file_0286_tWj6e()
{
    file_0286_Zya4FB2G1();
    file_0286_L7xx0B2G2();
    file_0286_XMIUaG2B1();
    file_0286_4oAuQG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0286;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITnKt7q
    printLine("Calling C0xlv()...");
    file_0286_kC1uO();
    printLine("Finished i2z7x()");
#endif
#ifndef OMITrCGhZ
    printLine("Calling gxfFu()...");
    file_0286_bZCrR();
    printLine("Finished mx9rd()");
#endif
    return 0;
}

#endif
