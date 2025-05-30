
#include "std_testcase.h"

#include <wchar.h>

namespace file_0488
{

#ifndef OMITjsyym

void file_0488_is1Zk()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        printWcharLine(*data);
    }
}

#endif

#ifndef OMITEy7NH

static void file_0488_1rOOeB2G1()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new wchar_t;
        *data = L'A';
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

static void file_0488_C1iRJB2G2()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        ;
    }
}

static void file_0488_SINHDG2B1()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new wchar_t;
        *data = L'A';
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        printWcharLine(*data);
    }
}

static void file_0488_eIi49G2B2()
{
    wchar_t * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
    {
        data = new wchar_t;
        *data = L'A';
    }
    if(GLOBAL_CONST_FIVE==5)
    {
        printWcharLine(*data);
    }
}

void file_0488_17eYe()
{
    file_0488_lWcGOB2G1();
    file_0488_PEUQuB2G2();
    file_0488_NIwI5G2B1();
    file_0488_lAHqyG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0488;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITFtqgJ
    printLine("Calling VT8Ae()...");
    file_0488_Wzxoi();
    printLine("Finished QjaA0()");
#endif
#ifndef OMITERcuL
    printLine("Calling RQFhM()...");
    file_0488_vISOW();
    printLine("Finished rVxaT()");
#endif
    return 0;
}

#endif
