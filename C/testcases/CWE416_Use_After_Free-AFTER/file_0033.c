
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

#ifndef OMIT9Dtud

void file_0033_cB1zc()
{
    int64_t * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
        free(data);
    }
    if(staticReturnsTrue())
    {
        printLongLongLine(data[0]);
    }
}

#endif

#ifndef OMITYxtSQ

static void file_0033_eRXMjB2G1()
{
    int64_t * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
        free(data);
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

static void file_0033_f9RntB2G2()
{
    int64_t * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
        free(data);
    }
    if(staticReturnsTrue())
    {
        ;
    }
}

static void file_0033_onAd8G2B1()
{
    int64_t * data;
    data = NULL;
    if(staticReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
    }
    if(staticReturnsTrue())
    {
        printLongLongLine(data[0]);
    }
}

static void file_0033_OMm0FG2B2()
{
    int64_t * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (int64_t *)malloc(100*sizeof(int64_t));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5LL;
            }
        }
    }
    if(staticReturnsTrue())
    {
        printLongLongLine(data[0]);
    }
}

void file_0033_9anss()
{
    file_0033_60ShfB2G1();
    file_0033_RMMGPB2G2();
    file_0033_ZocxEG2B1();
    file_0033_1tTl4G2B2();
}

#endif

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITG3E1a
    printLine("Calling EZgl0()...");
    file_0033_amB4t();
    printLine("Finished 7V87g()");
#endif
#ifndef OMITmCqqL
    printLine("Calling Tl7NR()...");
    file_0033_sXITS();
    printLine("Finished x6CV5()");
#endif
    return 0;
}

#endif
