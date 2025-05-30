
#include "std_testcase.h"

#include <wchar.h>

static int staticFive = 5;

namespace file_0457
{

#ifndef OMITir2gX

void file_0457_Bxvul()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(staticFive==5)
    {
        printStructLine(data);
    }
}

#endif

#ifndef OMITHhbRG

static void file_0457_b0jPYB2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0457_csdHXB2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(staticFive==5)
    {
        ;
    }
}

static void file_0457_iZRYYG2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(staticFive==5)
    {
        printStructLine(data);
    }
}

static void file_0457_XF7ySG2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticFive==5)
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(staticFive==5)
    {
        printStructLine(data);
    }
}

void file_0457_T424X()
{
    file_0457_hXPtjB2G1();
    file_0457_sFksjB2G2();
    file_0457_QKUqeG2B1();
    file_0457_6pEsuG2B2();
}

#endif

}

#ifdef INCLUDEMAIN

using namespace file_0457;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITICoCB
    printLine("Calling CINEt()...");
    file_0457_mWwoI();
    printLine("Finished UA0f7()");
#endif
#ifndef OMITTvvub
    printLine("Calling pvw9C()...");
    file_0457_ralk3();
    printLine("Finished LpHI9()");
#endif
    return 0;
}

#endif
