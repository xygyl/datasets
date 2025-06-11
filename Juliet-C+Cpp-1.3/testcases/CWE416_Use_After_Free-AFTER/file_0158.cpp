
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

namespace file_0158
{

#ifndef OMIT8cbUq

void file_0158_pVPyF()
{
    char * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        delete [] data;
    }
    if(staticReturnsTrue())
    {
        printLine(data);
    }
}

#endif

#ifndef OMITSBmSC

static void file_0158_aZ2xxB2G1()
{
    char * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        delete [] data;
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

static void file_0158_1IzoVB2G2()
{
    char * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        delete [] data;
    }
    if(staticReturnsTrue())
    {
        ;
    }
}

static void file_0158_y21Q8G2B1()
{
    char * data;
    data = NULL;
    if(staticReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
    }
    if(staticReturnsTrue())
    {
        printLine(data);
    }
}

static void file_0158_rXsjgG2B2()
{
    char * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
    }
    if(staticReturnsTrue())
    {
        printLine(data);
    }
}

void file_0158_CsHlV()
{
    file_0158_xwLn3B2G1();
    file_0158_6L1yhB2G2();
    file_0158_sFo7VG2B1();
    file_0158_wJ08mG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0158;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITjxRNK
    printLine("Calling xNE6s()...");
    file_0158_LpNE6();
    printLine("Finished BE5kF()");
#endif
#ifndef OMITQ8KuQ
    printLine("Calling abhdw()...");
    file_0158_mVGsC();
    printLine("Finished KISdW()");
#endif
    return 0;
}

#endif
