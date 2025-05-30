
#include "std_testcase.h"

#include <wchar.h>

static int staticTrue = 1;
static int staticFalse = 0;

namespace file_0180
{

#ifndef OMITyUMiz

void file_0180_8CPJu()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticTrue)
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
    if(staticTrue)
    {
        printIntLine(data[0].intOne);
    }
}

#endif

#ifndef OMITZwn51

static void file_0180_y6079B2G1()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticTrue)
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
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0180_Xf0NPB2G2()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticTrue)
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
    if(staticTrue)
    {
        ;
    }
}

static void file_0180_fs5tKG2B1()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticFalse)
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
    if(staticTrue)
    {
        printIntLine(data[0].intOne);
    }
}

static void file_0180_m06XLG2B2()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticTrue)
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
    if(staticTrue)
    {
        printIntLine(data[0].intOne);
    }
}

void file_0180_FfOGj()
{
    file_0180_yo907B2G1();
    file_0180_Kct8fB2G2();
    file_0180_VZD6TG2B1();
    file_0180_LGGwAG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0180;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITFaD9x
    printLine("Calling MJXQO()...");
    file_0180_TBeFG();
    printLine("Finished szNbi()");
#endif
#ifndef OMITNdfFI
    printLine("Calling iT0gP()...");
    file_0180_Oo5Xl();
    printLine("Finished F2zBB()");
#endif
    return 0;
}

#endif
