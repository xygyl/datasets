
#include "std_testcase.h"

#include <wchar.h>

static const int STATIC_CONST_FIVE = 5;

namespace file_0181
{

#ifndef OMITsrKyB

void file_0181_tnLkX()
{
    TwoIntsClass * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
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
    if(STATIC_CONST_FIVE==5)
    {
        printIntLine(data[0].intOne);
    }
}

#endif

#ifndef OMITROFUv

static void file_0181_CyShbB2G1()
{
    TwoIntsClass * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
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
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0181_CSTdiB2G2()
{
    TwoIntsClass * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
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
    if(STATIC_CONST_FIVE==5)
    {
        ;
    }
}

static void file_0181_l1vCqG2B1()
{
    TwoIntsClass * data;
    data = NULL;
    if(STATIC_CONST_FIVE!=5)
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
    if(STATIC_CONST_FIVE==5)
    {
        printIntLine(data[0].intOne);
    }
}

static void file_0181_2zrqWG2B2()
{
    TwoIntsClass * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
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
    if(STATIC_CONST_FIVE==5)
    {
        printIntLine(data[0].intOne);
    }
}

void file_0181_TYbiW()
{
    file_0181_Apy5rB2G1();
    file_0181_dT2rpB2G2();
    file_0181_LlYXOG2B1();
    file_0181_iGTPAG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0181;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT57QNO
    printLine("Calling vCkW2()...");
    file_0181_u5EvU();
    printLine("Finished BY0re()");
#endif
#ifndef OMITvHXyQ
    printLine("Calling hyq1h()...");
    file_0181_cb2H6();
    printLine("Finished qso2Z()");
#endif
    return 0;
}

#endif
