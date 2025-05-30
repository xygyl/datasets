
#include "std_testcase.h"

#include <wchar.h>

static const int STATIC_CONST_TRUE = 1;
static const int STATIC_CONST_FALSE = 0;

namespace file_0179
{

#ifndef OMIT43dRH

void file_0179_ZN26L()
{
    TwoIntsClass * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
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
    if(STATIC_CONST_TRUE)
    {
        printIntLine(data[0].intOne);
    }
}

#endif

#ifndef OMITYWR5K

static void file_0179_9ZRaSB2G1()
{
    TwoIntsClass * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
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
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0179_P4S7CB2G2()
{
    TwoIntsClass * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
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
    if(STATIC_CONST_TRUE)
    {
        ;
    }
}

static void file_0179_7GD5tG2B1()
{
    TwoIntsClass * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
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
    if(STATIC_CONST_TRUE)
    {
        printIntLine(data[0].intOne);
    }
}

static void file_0179_3GkjSG2B2()
{
    TwoIntsClass * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
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
    if(STATIC_CONST_TRUE)
    {
        printIntLine(data[0].intOne);
    }
}

void file_0179_Ev5e3()
{
    file_0179_dP4DKB2G1();
    file_0179_Dh3XKB2G2();
    file_0179_QoGgAG2B1();
    file_0179_7bmalG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0179;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT4zEhX
    printLine("Calling xj0eJ()...");
    file_0179_HxLEC();
    printLine("Finished 2ePQI()");
#endif
#ifndef OMITKYM49
    printLine("Calling YocMw()...");
    file_0179_ltFJM();
    printLine("Finished r0wPp()");
#endif
    return 0;
}

#endif
