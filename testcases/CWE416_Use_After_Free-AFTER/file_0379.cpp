
#include "std_testcase.h"

#include <wchar.h>

static const int STATIC_CONST_TRUE = 1;
static const int STATIC_CONST_FALSE = 0;

namespace file_0379
{

#ifndef OMITFtWXv

void file_0379_9uVLO()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new int64_t;
        *data = 5LL;
        delete data;
    }
    if(STATIC_CONST_TRUE)
    {
        printLongLongLine(*data);
    }
}

#endif

#ifndef OMITaZFft

static void file_0379_bRIgkB2G1()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new int64_t;
        *data = 5LL;
        delete data;
    }
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0379_0OoQqB2G2()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new int64_t;
        *data = 5LL;
        delete data;
    }
    if(STATIC_CONST_TRUE)
    {
        ;
    }
}

static void file_0379_cAnV7G2B1()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int64_t;
        *data = 5LL;
    }
    if(STATIC_CONST_TRUE)
    {
        printLongLongLine(*data);
    }
}

static void file_0379_scSgeG2B2()
{
    int64_t * data;
    data = NULL;
    if(STATIC_CONST_TRUE)
    {
        data = new int64_t;
        *data = 5LL;
    }
    if(STATIC_CONST_TRUE)
    {
        printLongLongLine(*data);
    }
}

void file_0379_Nm5W7()
{
    file_0379_uQnaDB2G1();
    file_0379_xlMkUB2G2();
    file_0379_ySfnGG2B1();
    file_0379_j8p36G2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0379;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITtIZRt
    printLine("Calling 8mMu7()...");
    file_0379_GF9kd();
    printLine("Finished Xps6s()");
#endif
#ifndef OMITsQksr
    printLine("Calling Lv6bo()...");
    file_0379_m4YQ2();
    printLine("Finished UwaL2()");
#endif
    return 0;
}

#endif
