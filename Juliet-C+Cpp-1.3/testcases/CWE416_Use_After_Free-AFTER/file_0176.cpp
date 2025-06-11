
#include "std_testcase.h"

#include <wchar.h>

namespace file_0176
{

#ifndef OMITd4Q6B

void file_0176_uKS1N()
{
    TwoIntsClass * data;
    data = NULL;
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
    printIntLine(data[0].intOne);
}

#endif

#ifndef OMIT7ngSV

static void file_0176_EXlsxG2B()
{
    TwoIntsClass * data;
    data = NULL;
    data = new TwoIntsClass[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i].intOne = 1;
            data[i].intTwo = 2;
        }
    }
    printIntLine(data[0].intOne);
}

static void file_0176_tJACMB2G()
{
    TwoIntsClass * data;
    data = NULL;
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
    ;
}

void file_0176_yAUpa()
{
    file_0176_aGSiNG2B();
    file_0176_1ukTxB2G();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0176;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITOsRMN
    printLine("Calling yKsmf()...");
    file_0176_R0ALm();
    printLine("Finished Tpu9v()");
#endif
#ifndef OMITLPPlz
    printLine("Calling hrHjc()...");
    file_0176_ntsfW();
    printLine("Finished gOxKf()");
#endif
    return 0;
}

#endif
