
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

namespace file_0383
{

#ifndef OMITwC2wX

void file_0383_hqxtU()
{
    int64_t * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new int64_t;
        *data = 5LL;
        delete data;
    }
    if(staticReturnsTrue())
    {
        printLongLongLine(*data);
    }
}

#endif

#ifndef OMITUaK2m

static void file_0383_mkAuIB2G1()
{
    int64_t * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new int64_t;
        *data = 5LL;
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

static void file_0383_qbV2jB2G2()
{
    int64_t * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new int64_t;
        *data = 5LL;
        delete data;
    }
    if(staticReturnsTrue())
    {
        ;
    }
}

static void file_0383_h2uNvG2B1()
{
    int64_t * data;
    data = NULL;
    if(staticReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int64_t;
        *data = 5LL;
    }
    if(staticReturnsTrue())
    {
        printLongLongLine(*data);
    }
}

static void file_0383_kXFrMG2B2()
{
    int64_t * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = new int64_t;
        *data = 5LL;
    }
    if(staticReturnsTrue())
    {
        printLongLongLine(*data);
    }
}

void file_0383_z1HCW()
{
    file_0383_KVfQPB2G1();
    file_0383_k7JGCB2G2();
    file_0383_8BMIaG2B1();
    file_0383_bhLyCG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0383;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITPEAyP
    printLine("Calling BfeBV()...");
    file_0383_Zp4r1();
    printLine("Finished 7peAF()");
#endif
#ifndef OMITM1zAl
    printLine("Calling VaSYe()...");
    file_0383_bL8z3();
    printLine("Finished nAwR8()");
#endif
    return 0;
}

#endif
