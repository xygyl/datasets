
#include "std_testcase.h"

#include <wchar.h>

static int staticTrue = 1;
static int staticFalse = 0;

namespace file_0155
{

#ifndef OMIT3Mwad

void file_0155_dVFcr()
{
    char * data;
    data = NULL;
    if(staticTrue)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        delete [] data;
    }
    if(staticTrue)
    {
        printLine(data);
    }
}

#endif

#ifndef OMITAA0s3

static void file_0155_ZhOgFB2G1()
{
    char * data;
    data = NULL;
    if(staticTrue)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        delete [] data;
    }
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0155_v58ksB2G2()
{
    char * data;
    data = NULL;
    if(staticTrue)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
        delete [] data;
    }
    if(staticTrue)
    {
        ;
    }
}

static void file_0155_KEWiCG2B1()
{
    char * data;
    data = NULL;
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
    }
    if(staticTrue)
    {
        printLine(data);
    }
}

static void file_0155_N3VXCG2B2()
{
    char * data;
    data = NULL;
    if(staticTrue)
    {
        data = new char[100];
        memset(data, 'A', 100-1);
        data[100-1] = '\0';
    }
    if(staticTrue)
    {
        printLine(data);
    }
}

void file_0155_ljQD3()
{
    file_0155_cBBUbB2G1();
    file_0155_gJCyXB2G2();
    file_0155_Rv07lG2B1();
    file_0155_Ue9yOG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0155;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITRqYFB
    printLine("Calling xIxDU()...");
    file_0155_Jih6E();
    printLine("Finished ExuCE()");
#endif
#ifndef OMITw0UzP
    printLine("Calling PqkGH()...");
    file_0155_oM5ux();
    printLine("Finished GBjsY()");
#endif
    return 0;
}

#endif
