
#include "std_testcase.h"

#include <wchar.h>

namespace file_0338
{

#ifndef OMITy75oJ

void file_0338_14LCh()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new char;
        *data = 'A';
        delete data;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        printHexCharLine(*data);
    }
}

#endif

#ifndef OMITxGiCw

static void file_0338_WYurhB2G1()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new char;
        *data = 'A';
        delete data;
    }
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0338_X6pbzB2G2()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new char;
        *data = 'A';
        delete data;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        ;
    }
}

static void file_0338_JRgerG2B1()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char;
        *data = 'A';
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        printHexCharLine(*data);
    }
}

static void file_0338_jt2KtG2B2()
{
    char * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new char;
        *data = 'A';
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        printHexCharLine(*data);
    }
}

void file_0338_oVtIG()
{
    file_0338_FjicNB2G1();
    file_0338_LSvK9B2G2();
    file_0338_EkKcwG2B1();
    file_0338_LTkyKG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0338;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITPA81g
    printLine("Calling qYx68()...");
    file_0338_QEHfw();
    printLine("Finished bTsdN()");
#endif
#ifndef OMITHcTEx
    printLine("Calling rT7Fe()...");
    file_0338_EZTM2();
    printLine("Finished qaB9Y()");
#endif
    return 0;
}

#endif
