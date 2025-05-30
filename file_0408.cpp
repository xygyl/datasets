
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

namespace file_0408
{

#ifndef OMITh53Wi

void file_0408_lSy32()
{
    int * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(staticReturnsTrue())
    {
        printIntLine(*data);
    }
}

#endif

#ifndef OMITJlGXi

static void file_0408_bWbqZB2G1()
{
    int * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new int;
        *data = 5;
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

static void file_0408_l8PfFB2G2()
{
    int * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(staticReturnsTrue())
    {
        ;
    }
}

static void file_0408_GEQfmG2B1()
{
    int * data;
    data = NULL;
    if(staticReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int;
        *data = 5;
    }
    if(staticReturnsTrue())
    {
        printIntLine(*data);
    }
}

static void file_0408_ndugDG2B2()
{
    int * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new int;
        *data = 5;
    }
    if(staticReturnsTrue())
    {
        printIntLine(*data);
    }
}

void file_0408_Eu5bK()
{
    file_0408_SFyXdB2G1();
    file_0408_ZrdrsB2G2();
    file_0408_q5EQIG2B1();
    file_0408_10P61G2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0408;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITkALKS
    printLine("Calling 9xNRj()...");
    file_0408_DNRin();
    printLine("Finished OckaJ()");
#endif
#ifndef OMITIWIlb
    printLine("Calling 3hAMr()...");
    file_0408_PDzOS();
    printLine("Finished cTnj0()");
#endif
    return 0;
}

#endif
