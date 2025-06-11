
#include "std_testcase.h"

#include <wchar.h>

namespace file_0459
{

#ifndef OMIT1jhz0

void file_0459_5iZ0f()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(GLOBAL_CONST_TRUE)
    {
        printStructLine(data);
    }
}

#endif

#ifndef OMIT2DVso

static void file_0459_fhOcrB2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0459_htlMlB2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
        delete data;
    }
    if(GLOBAL_CONST_TRUE)
    {
        ;
    }
}

static void file_0459_84zk7G2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(GLOBAL_CONST_TRUE)
    {
        printStructLine(data);
    }
}

static void file_0459_OajiIG2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
    {
        data = new twoIntsStruct;
        data->intOne = 1;
        data->intTwo = 2;
    }
    if(GLOBAL_CONST_TRUE)
    {
        printStructLine(data);
    }
}

void file_0459_WypFE()
{
    file_0459_RAQ0xB2G1();
    file_0459_rBTqtB2G2();
    file_0459_eOZ9uG2B1();
    file_0459_X5mFjG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0459;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITMsNe7
    printLine("Calling F2vTv()...");
    file_0459_riRZm();
    printLine("Finished 66LEv()");
#endif
#ifndef OMITphctX
    printLine("Calling flEcq()...");
    file_0459_K9Lf2();
    printLine("Finished VsDBq()");
#endif
    return 0;
}

#endif
