
#include "std_testcase.h"

#include <wchar.h>

namespace file_0276
{

#ifndef OMITbxrqe

void file_0276_jqiux()
{
    twoIntsStruct * data;
    data = NULL;
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
    printStructLine(&data[0]);
}

#endif

#ifndef OMITmc6Ty

static void file_0276_bTWkdG2B()
{
    twoIntsStruct * data;
    data = NULL;
    data = new twoIntsStruct[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i].intOne = 1;
            data[i].intTwo = 2;
        }
    }
    printStructLine(&data[0]);
}

static void file_0276_ubw89B2G()
{
    twoIntsStruct * data;
    data = NULL;
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
    ;
}

void file_0276_NyRH0()
{
    file_0276_OXXspG2B();
    file_0276_vMoHNB2G();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0276;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITz69gm
    printLine("Calling GsKCF()...");
    file_0276_m3TIP();
    printLine("Finished TJnds()");
#endif
#ifndef OMIT1DWqQ
    printLine("Calling xbmQk()...");
    file_0276_aA1CE();
    printLine("Finished SrBvW()");
#endif
    return 0;
}

#endif
