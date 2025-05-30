
#include "std_testcase.h"

#include <wchar.h>

static int staticReturnsTrue()
{
    return 1;
}

static int staticReturnsFalse()
{
    return 0;
}

namespace file_0183
{

#ifndef OMIT3dTdD

void file_0183_0gO3K()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticReturnsTrue())
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
    if(staticReturnsTrue())
    {
        printIntLine(data[0].intOne);
    }
}

#endif

#ifndef OMITioeF3

static void file_0183_7S8CZB2G1()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticReturnsTrue())
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
    if(staticReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0183_gIVJfB2G2()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticReturnsTrue())
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
    if(staticReturnsTrue())
    {
        ;
    }
}

static void file_0183_9ULBrG2B1()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticReturnsFalse())
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
    if(staticReturnsTrue())
    {
        printIntLine(data[0].intOne);
    }
}

static void file_0183_eeh4HG2B2()
{
    TwoIntsClass * data;
    data = NULL;
    if(staticReturnsTrue())
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
    if(staticReturnsTrue())
    {
        printIntLine(data[0].intOne);
    }
}

void file_0183_SDYsv()
{
    file_0183_XRvMDB2G1();
    file_0183_zgXdtB2G2();
    file_0183_dnyzLG2B1();
    file_0183_yj4B9G2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0183;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITpb9yj
    printLine("Calling AWZyp()...");
    file_0183_b1q94();
    printLine("Finished Xpsiv()");
#endif
#ifndef OMITsYxLH
    printLine("Calling h2vnF()...");
    file_0183_HvWmv();
    printLine("Finished 93FXU()");
#endif
    return 0;
}

#endif
