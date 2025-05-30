
#include "std_testcase.h"

#include <wchar.h>

namespace file_0461
{

#ifndef OMITrAdGT

void file_0461_vmE4H()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(globalReturnsTrue())
    {
        printStructLine(data);
    }
}

#endif

#ifndef OMIT3Taks

static void file_0461_suc5sB2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0461_OBmgAB2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(globalReturnsTrue())
    {
        ;
    }
}

static void file_0461_ehBkbG2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(globalReturnsTrue())
    {
        printStructLine(data);
    }
}

static void file_0461_HDhTcG2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(globalReturnsTrue())
    {
        printStructLine(data);
    }
}

void file_0461_hBfG6()
{
    file_0461_KmkLoB2G1();
    file_0461_LeZKRB2G2();
    file_0461_CBwgUG2B1();
    file_0461_xp6nRG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0461;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITgxgQM
    printLine("Calling SOXCd()...");
    file_0461_sQCz9();
    printLine("Finished areCc()");
#endif
#ifndef OMITTgDBL
    printLine("Calling oliG9()...");
    file_0461_cce5S();
    printLine("Finished Mtpxz()");
#endif
    return 0;
}

#endif
