
#include "std_testcase.h"

#include <wchar.h>

namespace file_0214
{

#ifndef OMIT166R2

void file_0214_nKVJJ()
{
    int64_t * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new int64_t[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
        delete [] data;
    }
    if(globalFive==5)
    {
        printLongLongLine(data[0]);
    }
}

#endif

#ifndef OMIT3rhUQ

static void file_0214_SJPKzB2G1()
{
    int64_t * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new int64_t[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
        delete [] data;
    }
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0214_39IINB2G2()
{
    int64_t * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new int64_t[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
        delete [] data;
    }
    if(globalFive==5)
    {
        ;
    }
}

static void file_0214_1lL8EG2B1()
{
    int64_t * data;
    data = NULL;
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int64_t[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
    }
    if(globalFive==5)
    {
        printLongLongLine(data[0]);
    }
}

static void file_0214_Et63kG2B2()
{
    int64_t * data;
    data = NULL;
    if(globalFive==5)
    {
        data = new int64_t[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
    }
    if(globalFive==5)
    {
        printLongLongLine(data[0]);
    }
}

void file_0214_9viET()
{
    file_0214_u8caEB2G1();
    file_0214_R4Ox5B2G2();
    file_0214_qESEXG2B1();
    file_0214_94YGNG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0214;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITM8Ait
    printLine("Calling XtmKl()...");
    file_0214_DAl7A();
    printLine("Finished Tncub()");
#endif
#ifndef OMITfL1tn
    printLine("Calling exx65()...");
    file_0214_nqzfJ();
    printLine("Finished Nhyua()");
#endif
    return 0;
}

#endif
