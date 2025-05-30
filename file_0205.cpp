
#include "std_testcase.h"

#include <wchar.h>

static int staticTrue = 1;
static int staticFalse = 0;

namespace file_0205
{

#ifndef OMITwF45i

void file_0205_xnaST()
{
    int64_t * data;
    data = NULL;
    if(staticTrue)
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
    if(staticTrue)
    {
        printLongLongLine(data[0]);
    }
}

#endif

#ifndef OMIT1OdIN

static void file_0205_3muPyB2G1()
{
    int64_t * data;
    data = NULL;
    if(staticTrue)
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
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0205_6LUMkB2G2()
{
    int64_t * data;
    data = NULL;
    if(staticTrue)
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
    if(staticTrue)
    {
        ;
    }
}

static void file_0205_JpGRyG2B1()
{
    int64_t * data;
    data = NULL;
    if(staticFalse)
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
    if(staticTrue)
    {
        printLongLongLine(data[0]);
    }
}

static void file_0205_fC98yG2B2()
{
    int64_t * data;
    data = NULL;
    if(staticTrue)
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
    if(staticTrue)
    {
        printLongLongLine(data[0]);
    }
}

void file_0205_vqpUX()
{
    file_0205_63IF5B2G1();
    file_0205_PzPu5B2G2();
    file_0205_uNkvhG2B1();
    file_0205_CPS38G2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0205;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITo7gzT
    printLine("Calling EK51Z()...");
    file_0205_joRJH();
    printLine("Finished rxMVY()");
#endif
#ifndef OMITTd2CQ
    printLine("Calling QNeBv()...");
    file_0205_eRvAs();
    printLine("Finished RJIo0()");
#endif
    return 0;
}

#endif
