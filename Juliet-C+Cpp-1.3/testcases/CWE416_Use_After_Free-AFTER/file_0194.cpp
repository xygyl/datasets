
#include "std_testcase.h"

#include <wchar.h>

namespace file_0194
{

#ifndef OMITbUYW8

void file_0194_JivLXSource(TwoIntsClass * &data)
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

void file_0194_HM49C()
{
    TwoIntsClass * data;
    data = NULL;
    file_0194_PxjXJSource(data);
    printIntLine(data[0].intOne);
}

#endif

#ifndef OMITv2DOC

static void file_0194_ZDh7DG2BSource(TwoIntsClass * &data)
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

static void file_0194_LXIRDG2B()
{
    TwoIntsClass * data;
    data = NULL;
    file_0194_aq50hG2BSource(data);
    printIntLine(data[0].intOne);
}

static void file_0194_Fx32PB2GSource(TwoIntsClass * &data)
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

static void file_0194_PatGhB2G()
{
    TwoIntsClass * data;
    data = NULL;
    file_0194_xmxiIB2GSource(data);
    ;
}

void file_0194_bWkgF()
{
    file_0194_UDS7fG2B();
    file_0194_G41SrB2G();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0194;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITUdoER
    printLine("Calling YdX3K()...");
    file_0194_1fBfS();
    printLine("Finished TUPIL()");
#endif
#ifndef OMITdNVwz
    printLine("Calling 85hdU()...");
    file_0194_pNCig();
    printLine("Finished T02Mh()");
#endif
    return 0;
}

#endif
