
#include "std_testcase.h"

#include <wchar.h>

namespace file_0260
{

#ifndef OMITyPDHH

void file_0260_GUGyR()
{
    long * data;
    data = NULL;
    if(globalTrue)
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
    if(globalTrue)
    {
        printLongLine(data[0]);
    }
}

#endif

#ifndef OMIT8rKVf

static void file_0260_z4EWAB2G1()
{
    long * data;
    data = NULL;
    if(globalTrue)
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
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0260_RYGLTB2G2()
{
    long * data;
    data = NULL;
    if(globalTrue)
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
    if(globalTrue)
    {
        ;
    }
}

static void file_0260_eSOA4G2B1()
{
    long * data;
    data = NULL;
    if(globalFalse)
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
    if(globalTrue)
    {
        printLongLine(data[0]);
    }
}

static void file_0260_a5mV5G2B2()
{
    long * data;
    data = NULL;
    if(globalTrue)
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
    if(globalTrue)
    {
        printLongLine(data[0]);
    }
}

void file_0260_bHLM8()
{
    file_0260_lxHolB2G1();
    file_0260_YgywyB2G2();
    file_0260_gIjGIG2B1();
    file_0260_JnhQMG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0260;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITDUsW0
    printLine("Calling BWNuP()...");
    file_0260_6G5Ot();
    printLine("Finished zNy2y()");
#endif
#ifndef OMITaD3DU
    printLine("Calling rgZ7l()...");
    file_0260_7PaPM();
    printLine("Finished KKXxt()");
#endif
    return 0;
}

#endif
