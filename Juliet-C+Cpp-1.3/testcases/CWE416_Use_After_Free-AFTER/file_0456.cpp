
#include "std_testcase.h"

#include <wchar.h>

static const int STATIC_CONST_FIVE = 5;

namespace file_0456
{

#ifndef OMIT0tYse

void file_0456_X9TK2()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(STATIC_CONST_FIVE==5)
    {
        printStructLine(data);
    }
}

#endif

#ifndef OMIT31mkT

static void file_0456_Bp7NIB2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0456_hwEG3B2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(STATIC_CONST_FIVE==5)
    {
        ;
    }
}

static void file_0456_571aAG2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(STATIC_CONST_FIVE==5)
    {
        printStructLine(data);
    }
}

static void file_0456_PwImjG2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(STATIC_CONST_FIVE==5)
    {
        printStructLine(data);
    }
}

void file_0456_RKg5p()
{
    file_0456_pIh5dB2G1();
    file_0456_WoNKZB2G2();
    file_0456_pD7izG2B1();
    file_0456_U8NBRG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0456;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITGjW4c
    printLine("Calling BYyC6()...");
    file_0456_vX1m8();
    printLine("Finished 2y9FN()");
#endif
#ifndef OMITuOiCp
    printLine("Calling sf8LP()...");
    file_0456_Q49Yq();
    printLine("Finished OxlSG()");
#endif
    return 0;
}

#endif
