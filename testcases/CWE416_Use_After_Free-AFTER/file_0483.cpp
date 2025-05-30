
#include "std_testcase.h"

#include <wchar.h>

static int staticReturnsTrue()
{
    return 1;
}

static int staticReturnsFalse()
{
    return 0;
}

namespace file_0483
{

#ifndef OMITVlpEf

void file_0483_koJlh()
{
    wchar_t * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(staticReturnsTrue())
    {
        printWcharLine(*data);
    }
}

#endif

#ifndef OMITGvMIk

static void file_0483_3E2QiB2G1()
{
    wchar_t * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(staticReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0483_G3VB7B2G2()
{
    wchar_t * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new wchar_t;
        *data = L'A';
        delete data;
    }
    if(staticReturnsTrue())
    {
        ;
    }
}

static void file_0483_YisR9G2B1()
{
    wchar_t * data;
    data = NULL;
    if(staticReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new wchar_t;
        *data = L'A';
    }
    if(staticReturnsTrue())
    {
        printWcharLine(*data);
    }
}

static void file_0483_JgjUwG2B2()
{
    wchar_t * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new wchar_t;
        *data = L'A';
    }
    if(staticReturnsTrue())
    {
        printWcharLine(*data);
    }
}

void file_0483_U8xXz()
{
    file_0483_4YaVwB2G1();
    file_0483_Kw0nfB2G2();
    file_0483_kCCOpG2B1();
    file_0483_yCIjfG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0483;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITE29oo
    printLine("Calling fyoZU()...");
    file_0483_0DLBy();
    printLine("Finished g4IaW()");
#endif
#ifndef OMITptPQA
    printLine("Calling QMtdC()...");
    file_0483_q8IzT();
    printLine("Finished eUB4O()");
#endif
    return 0;
}

#endif
