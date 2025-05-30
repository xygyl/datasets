
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

namespace file_0258
{

#ifndef OMITY2Sra

void file_0258_zDgnO()
{
    long * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new long[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
        delete [] data;
    }
    if(staticReturnsTrue())
    {
        printLongLine(data[0]);
    }
}

#endif

#ifndef OMITShu86

static void file_0258_Q1929B2G1()
{
    long * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new long[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
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

static void file_0258_o6ZaUB2G2()
{
    long * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new long[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
        delete [] data;
    }
    if(staticReturnsTrue())
    {
        ;
    }
}

static void file_0258_aeQzKG2B1()
{
    long * data;
    data = NULL;
    if(staticReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new long[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
    }
    if(staticReturnsTrue())
    {
        printLongLine(data[0]);
    }
}

static void file_0258_VeH2TG2B2()
{
    long * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new long[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
    }
    if(staticReturnsTrue())
    {
        printLongLine(data[0]);
    }
}

void file_0258_2Y5Ah()
{
    file_0258_rCgdvB2G1();
    file_0258_aE0Y5B2G2();
    file_0258_v8l6KG2B1();
    file_0258_Zn92FG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0258;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITLhdqD
    printLine("Calling umHW9()...");
    file_0258_lYi1l();
    printLine("Finished m4q9E()");
#endif
#ifndef OMITLU4OV
    printLine("Calling gNGVn()...");
    file_0258_wMorj();
    printLine("Finished j92X2()");
#endif
    return 0;
}

#endif
