
#include "std_testcase.h"

#include <wchar.h>

static int staticTrue = 1;
static int staticFalse = 0;

namespace file_0280
{

#ifndef OMITFbnWy

void file_0280_D1Y5V()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticTrue)
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
    if(staticTrue)
    {
        printStructLine(&data[0]);
    }
}

#endif

#ifndef OMITc2TPF

static void file_0280_IMPnrB2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticTrue)
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
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0280_Q5UaCB2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticTrue)
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
    if(staticTrue)
    {
        ;
    }
}

static void file_0280_Tb1ZVG2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticFalse)
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
    if(staticTrue)
    {
        printStructLine(&data[0]);
    }
}

static void file_0280_FYY7OG2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticTrue)
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
    if(staticTrue)
    {
        printStructLine(&data[0]);
    }
}

void file_0280_yeyTo()
{
    file_0280_9WXrlB2G1();
    file_0280_EkUSEB2G2();
    file_0280_SoLJgG2B1();
    file_0280_Q1DhEG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0280;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITwSccb
    printLine("Calling 1h1fB()...");
    file_0280_W0xFP();
    printLine("Finished o08Bh()");
#endif
#ifndef OMITX4wWc
    printLine("Calling LoLCa()...");
    file_0280_lr4Wb();
    printLine("Finished ELKJf()");
#endif
    return 0;
}

#endif
