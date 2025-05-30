
#include "std_testcase.h"

#include <wchar.h>

static const int STATIC_CONST_FIVE = 5;

namespace file_0281
{

#ifndef OMITKYfaS

void file_0281_Wz0F5()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
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
    if(STATIC_CONST_FIVE==5)
    {
        printStructLine(&data[0]);
    }
}

#endif

#ifndef OMIT6b0SG

static void file_0281_IzUaWB2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
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
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0281_NHrp2B2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
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
    if(STATIC_CONST_FIVE==5)
    {
        ;
    }
}

static void file_0281_BN0gKG2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_FIVE!=5)
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
    if(STATIC_CONST_FIVE==5)
    {
        printStructLine(&data[0]);
    }
}

static void file_0281_R8ApwG2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
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
    if(STATIC_CONST_FIVE==5)
    {
        printStructLine(&data[0]);
    }
}

void file_0281_Te33n()
{
    file_0281_uwgPhB2G1();
    file_0281_s7G7sB2G2();
    file_0281_fQz9mG2B1();
    file_0281_AEtWLG2B2();
}

#endif

}

#ifdef INCLUDEMAIN

using namespace file_0281;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITkyEEd
    printLine("Calling CqIed()...");
    file_0281_KHZ6E();
    printLine("Finished VZvSj()");
#endif
#ifndef OMITbvjDh
    printLine("Calling WZPcX()...");
    file_0281_a2PHq();
    printLine("Finished OVxFW()");
#endif
    return 0;
}

#endif
