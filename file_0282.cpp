
#include "std_testcase.h"

#include <wchar.h>

static int staticFive = 5;

namespace file_0282
{

#ifndef OMITgBu4k

void file_0282_Uen7T()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticFive==5)
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
    if(staticFive==5)
    {
        printStructLine(&data[0]);
    }
}

#endif

#ifndef OMITqgkIP

static void file_0282_kWdwSB2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticFive==5)
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
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0282_gT1YNB2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticFive==5)
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
    if(staticFive==5)
    {
        ;
    }
}

static void file_0282_cJ4KwG2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        printStructLine(&data[0]);
    }
}

static void file_0282_WipviG2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticFive==5)
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
    if(staticFive==5)
    {
        printStructLine(&data[0]);
    }
}

void file_0282_K2dn9()
{
    file_0282_7o5tdB2G1();
    file_0282_xCyBmB2G2();
    file_0282_JSFI2G2B1();
    file_0282_BHnEzG2B2();
}

#endif

}

#ifdef INCLUDEMAIN

using namespace file_0282;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITJ3v8q
    printLine("Calling TJYqB()...");
    file_0282_IQYkI();
    printLine("Finished AIy6c()");
#endif
#ifndef OMITTZam6
    printLine("Calling F1Z6c()...");
    file_0282_ADFJo();
    printLine("Finished bV0JY()");
#endif
    return 0;
}

#endif
