
#include "std_testcase.h"

#include <wchar.h>

namespace file_0319
{

#ifndef OMITBFRP4

void file_0319_yAbzwSource(wchar_t * &data)
{
    data = new wchar_t[100];
    wmemset(data, L'A', 100-1);
    data[100-1] = L'\0';
    delete [] data;
}

void file_0319_2vTL8()
{
    wchar_t * data;
    data = NULL;
    file_0319_q5PiwSource(data);
    printWLine(data);
}

#endif

#ifndef OMITagPZk

static void file_0319_eKhmSG2BSource(wchar_t * &data)
{
    data = new wchar_t[100];
    wmemset(data, L'A', 100-1);
    data[100-1] = L'\0';
}

static void file_0319_MnWwlG2B()
{
    wchar_t * data;
    data = NULL;
    file_0319_uoyLZG2BSource(data);
    printWLine(data);
}

static void file_0319_NcEsOB2GSource(wchar_t * &data)
{
    data = new wchar_t[100];
    wmemset(data, L'A', 100-1);
    data[100-1] = L'\0';
    delete [] data;
}

static void file_0319_crKDCB2G()
{
    wchar_t * data;
    data = NULL;
    file_0319_8CNTlB2GSource(data);
    ;
}

void file_0319_sSWBR()
{
    file_0319_Kqb6IG2B();
    file_0319_6kFFJB2G();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0319;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT7nPvi
    printLine("Calling HkfkQ()...");
    file_0319_PMkWo();
    printLine("Finished UsBA1()");
#endif
#ifndef OMITi4wdw
    printLine("Calling 2zVWY()...");
    file_0319_IbwUn();
    printLine("Finished KdeoB()");
#endif
    return 0;
}

#endif
