
#include "std_testcase.h"

#include <wchar.h>

namespace file_0317
{

#ifndef OMITpIYf4

void file_0317_WYlSw()
{
    int i,j;
    wchar_t * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
    }
    for(j = 0; j < 1; j++)
    {
        printWLine(data);
    }
}

#endif

#ifndef OMITuramA

static void file_0317_3ZhqKB2G()
{
    int i,k;
    wchar_t * data;
    data = NULL;
    for(i = 0; i < 1; i++)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
        delete [] data;
    }
    for(k = 0; k < 1; k++)
    {
        ;
    }
}

static void file_0317_EZJ4YG2B()
{
    int h,j;
    wchar_t * data;
    data = NULL;
    for(h = 0; h < 1; h++)
    {
        data = new wchar_t[100];
        wmemset(data, L'A', 100-1);
        data[100-1] = L'\0';
    }
    for(j = 0; j < 1; j++)
    {
        printWLine(data);
    }
}

void file_0317_Yegvz()
{
    file_0317_eFd69B2G();
    file_0317_A0S8kG2B();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0317;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITjkwU4
    printLine("Calling u3PSn()...");
    file_0317_CxfPR();
    printLine("Finished tb7Pl()");
#endif
#ifndef OMITKcHyj
    printLine("Calling Yzc0V()...");
    file_0317_AXEdr();
    printLine("Finished RJhrD()");
#endif
    return 0;
}

#endif
