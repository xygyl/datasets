
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

namespace file_0208
{

#ifndef OMITZEkx7

void file_0208_gPGWh()
{
    int64_t * data;
    data = NULL;
    if(staticReturnsTrue())
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
    if(staticReturnsTrue())
    {
        printLongLongLine(data[0]);
    }
}

#endif

#ifndef OMITMkoTN

static void file_0208_vzyS1B2G1()
{
    int64_t * data;
    data = NULL;
    if(staticReturnsTrue())
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
    if(staticReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0208_bH3BOB2G2()
{
    int64_t * data;
    data = NULL;
    if(staticReturnsTrue())
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
    if(staticReturnsTrue())
    {
        ;
    }
}

static void file_0208_dFOwxG2B1()
{
    int64_t * data;
    data = NULL;
    if(staticReturnsFalse())
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
    if(staticReturnsTrue())
    {
        printLongLongLine(data[0]);
    }
}

static void file_0208_lt84HG2B2()
{
    int64_t * data;
    data = NULL;
    if(staticReturnsTrue())
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
    if(staticReturnsTrue())
    {
        printLongLongLine(data[0]);
    }
}

void file_0208_41XWT()
{
    file_0208_9OvblB2G1();
    file_0208_52bcBB2G2();
    file_0208_OZOJ2G2B1();
    file_0208_9kNebG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0208;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT0b3sG
    printLine("Calling 8k7yG()...");
    file_0208_cPo9f();
    printLine("Finished uU53V()");
#endif
#ifndef OMITW8tOg
    printLine("Calling 6ksm6()...");
    file_0208_ZOkzI();
    printLine("Finished pCyHr()");
#endif
    return 0;
}

#endif
