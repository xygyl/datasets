
#include "std_testcase.h"

#include <wchar.h>

static int staticFive = 5;

namespace file_0182
{

#ifndef OMITUpyoR

void file_0182_tijrT()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticFive==5)
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
    if(staticFive==5)
    {
        printIntLine(data[0].intOne);
    }
}

#endif

#ifndef OMITi3odx

static void file_0182_XIJHRB2G1()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticFive==5)
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
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0182_gyMmsB2G2()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticFive==5)
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
    if(staticFive==5)
    {
        ;
    }
}

static void file_0182_SWneTG2B1()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticFive!=5)
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
    if(staticFive==5)
    {
        printIntLine(data[0].intOne);
    }
}

static void file_0182_e61OfG2B2()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticFive==5)
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
    if(staticFive==5)
    {
        printIntLine(data[0].intOne);
    }
}

void file_0182_baIAJ()
{
    file_0182_ehYzvB2G1();
    file_0182_iEfTlB2G2();
    file_0182_7acAVG2B1();
    file_0182_T1zAnG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0182;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITQoqBJ
    printLine("Calling al5Za()...");
    file_0182_lnoU4();
    printLine("Finished T8AVB()");
#endif
#ifndef OMITqZj3Y
    printLine("Calling yD9oA()...");
    file_0182_QDglQ();
    printLine("Finished xPrUc()");
#endif
    return 0;
}

#endif
