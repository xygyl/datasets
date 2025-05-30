
#include "std_testcase.h"

#include <wchar.h>

namespace file_0368
{

#ifndef OMITZ7d4k

void file_0368_rBrdV()
{
    TwoIntsClass * data;
    data = NULL;
    goto source;
source:
    data = new TwoIntsClass;
    data->intOne = 1;
    data->intTwo = 2;
    delete data;
    goto sink;
sink:
    printIntLine(data->intOne);
}

#endif

#ifndef OMITIfpWM

static void file_0368_4EQbbB2G()
{
    TwoIntsClass * data;
    data = NULL;
    goto source;
source:
    data = new TwoIntsClass;
    data->intOne = 1;
    data->intTwo = 2;
    delete data;
    goto sink;
sink:
    ;
}

static void file_0368_MZa0rG2B()
{
    TwoIntsClass * data;
    data = NULL;
    goto source;
source:
    data = new TwoIntsClass;
    data->intOne = 1;
    data->intTwo = 2;
    goto sink;
sink:
    printIntLine(data->intOne);
}

void file_0368_RJctB()
{
    file_0368_UNp3mB2G();
    file_0368_aD6l5G2B();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0368;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT9aTMj
    printLine("Calling c1MUj()...");
    file_0368_RtPK5();
    printLine("Finished 0T42t()");
#endif
#ifndef OMITVQrHL
    printLine("Calling v9TFZ()...");
    file_0368_vmI0K();
    printLine("Finished 3ZjGR()");
#endif
    return 0;
}

#endif
