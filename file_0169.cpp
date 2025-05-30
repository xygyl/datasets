
#include "std_testcase.h"

#include <wchar.h>

namespace file_0169
{

#ifndef OMITT3uPu

void file_0169_o504rSource(char * &data)
{
    data = new char[100];
    memset(data, 'A', 100-1);
    data[100-1] = '\0';
    delete [] data;
}

void file_0169_GCiXV()
{
    char * data;
    data = NULL;
    file_0169_eBNZ2Source(data);
    printLine(data);
}

#endif

#ifndef OMITDhjE9

static void file_0169_ekTPFG2BSource(char * &data)
{
    data = new char[100];
    memset(data, 'A', 100-1);
    data[100-1] = '\0';
}

static void file_0169_Akk0AG2B()
{
    char * data;
    data = NULL;
    file_0169_ZiLmOG2BSource(data);
    printLine(data);
}

static void file_0169_mTK0jB2GSource(char * &data)
{
    data = new char[100];
    memset(data, 'A', 100-1);
    data[100-1] = '\0';
    delete [] data;
}

static void file_0169_U9UbBB2G()
{
    char * data;
    data = NULL;
    file_0169_ZZyuVB2GSource(data);
    ;
}

void file_0169_PEAL3()
{
    file_0169_32XMyG2B();
    file_0169_EWQ3nB2G();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0169;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT32mpV
    printLine("Calling TgZ7M()...");
    file_0169_9JA0O();
    printLine("Finished ExH1M()");
#endif
#ifndef OMIT6fSPU
    printLine("Calling oZen6()...");
    file_0169_TmjwO();
    printLine("Finished 3rGt2()");
#endif
    return 0;
}

#endif
