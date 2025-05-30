
#include "std_testcase.h"

#include <wchar.h>

namespace file_0418
{

#ifndef OMITBENCB

void file_0418_ghI1U()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = new int;
    *data = 5;
    delete data;
    goto sink;
sink:
    printIntLine(*data);
}

#endif

#ifndef OMITg9OKm

static void file_0418_fIfiUB2G()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = new int;
    *data = 5;
    delete data;
    goto sink;
sink:
    ;
}

static void file_0418_lkPWLG2B()
{
    int * data;
    data = NULL;
    goto source;
source:
    data = new int;
    *data = 5;
    goto sink;
sink:
    printIntLine(*data);
}

void file_0418_wzhDF()
{
    file_0418_p84a0B2G();
    file_0418_8WTjHG2B();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0418;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITKx3aV
    printLine("Calling cCnfB()...");
    file_0418_770UG();
    printLine("Finished IGvpU()");
#endif
#ifndef OMIThAAgy
    printLine("Calling jIb8q()...");
    file_0418_wXP3v();
    printLine("Finished qn8aT()");
#endif
    return 0;
}

#endif
