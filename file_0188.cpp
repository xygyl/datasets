
#include "std_testcase.h"

#include <wchar.h>

namespace file_0188
{

#ifndef OMIT0tADY

void file_0188_HJ6vu()
{
    TwoIntsClass * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
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
    if(GLOBAL_CONST_FIVE==5)
    {
        printIntLine(data[0].intOne);
    }
}

#endif

#ifndef OMITK4u68

static void file_0188_dwkmJB2G1()
{
    TwoIntsClass * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
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
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0188_gC1gXB2G2()
{
    TwoIntsClass * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
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
    if(GLOBAL_CONST_FIVE==5)
    {
        ;
    }
}

static void file_0188_nOLffG2B1()
{
    TwoIntsClass * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE!=5)
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
    if(GLOBAL_CONST_FIVE==5)
    {
        printIntLine(data[0].intOne);
    }
}

static void file_0188_tjtfPG2B2()
{
    TwoIntsClass * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
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
    if(GLOBAL_CONST_FIVE==5)
    {
        printIntLine(data[0].intOne);
    }
}

void file_0188_8UpDX()
{
    file_0188_QbXLyB2G1();
    file_0188_CRgmSB2G2();
    file_0188_iOSJDG2B1();
    file_0188_LmPo4G2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0188;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITYSR64
    printLine("Calling 3ZxRQ()...");
    file_0188_AuD5v();
    printLine("Finished zrb26()");
#endif
#ifndef OMITdxQPJ
    printLine("Calling gSCUR()...");
    file_0188_UCUdn();
    printLine("Finished t2TnF()");
#endif
    return 0;
}

#endif
