
#include "std_testcase.h"

#include <wchar.h>

namespace file_0186
{

#ifndef OMITGkTon

void file_0186_CR8xw()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrue())
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
    if(globalReturnsTrue())
    {
        printIntLine(data[0].intOne);
    }
}

#endif

#ifndef OMITu11sc

static void file_0186_k5wL2B2G1()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrue())
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
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0186_nizbtB2G2()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrue())
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
    if(globalReturnsTrue())
    {
        ;
    }
}

static void file_0186_Dh6iuG2B1()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsFalse())
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
    if(globalReturnsTrue())
    {
        printIntLine(data[0].intOne);
    }
}

static void file_0186_0xQezG2B2()
{
    TwoIntsClass * data;
    data = NULL;
    if(globalReturnsTrue())
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
    if(globalReturnsTrue())
    {
        printIntLine(data[0].intOne);
    }
}

void file_0186_lSW14()
{
    file_0186_o5uv9B2G1();
    file_0186_wuzxlB2G2();
    file_0186_sW54LG2B1();
    file_0186_ZPwj4G2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0186;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITO6QsO
    printLine("Calling 5fIfA()...");
    file_0186_OZQiw();
    printLine("Finished 6kVLq()");
#endif
#ifndef OMITDKM4Z
    printLine("Calling bFGYS()...");
    file_0186_zDkWC();
    printLine("Finished m3jaG()");
#endif
    return 0;
}

#endif
