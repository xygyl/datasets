
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

namespace file_0283
{

#ifndef OMITv2Y6O

void file_0283_w42Ui()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticReturnsTrue())
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
    if(staticReturnsTrue())
    {
        printStructLine(&data[0]);
    }
}

#endif

#ifndef OMIThuZxK

static void file_0283_gWGwWB2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticReturnsTrue())
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
    if(staticReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0283_Gw1HaB2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticReturnsTrue())
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
    if(staticReturnsTrue())
    {
        ;
    }
}

static void file_0283_naY0nG2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticReturnsFalse())
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
    if(staticReturnsTrue())
    {
        printStructLine(&data[0]);
    }
}

static void file_0283_YfopDG2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticReturnsTrue())
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
    if(staticReturnsTrue())
    {
        printStructLine(&data[0]);
    }
}

void file_0283_iN1i9()
{
    file_0283_JZVFhB2G1();
    file_0283_s0XHYB2G2();
    file_0283_ShXaKG2B1();
    file_0283_DypASG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0283;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT7XQyd
    printLine("Calling vA84A()...");
    file_0283_nd8RA();
    printLine("Finished ck3tW()");
#endif
#ifndef OMITnMzaj
    printLine("Calling X4ppe()...");
    file_0283_uwQQM();
    printLine("Finished 6tWT0()");
#endif
    return 0;
}

#endif
