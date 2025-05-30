
#include "std_testcase.h"

#include <wchar.h>

namespace file_0261
{

#ifndef OMITpJ57L

void file_0261_v7LE4()
{
    long * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new long[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
        delete [] data;
    }
    if(globalReturnsTrue())
    {
        printLongLine(data[0]);
    }
}

#endif

#ifndef OMITB3cna

static void file_0261_MjYV4B2G1()
{
    long * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new long[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
        delete [] data;
    }
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0261_bI3ssB2G2()
{
    long * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new long[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
        delete [] data;
    }
    if(globalReturnsTrue())
    {
        ;
    }
}

static void file_0261_7S5XjG2B1()
{
    long * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new long[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
    }
    if(globalReturnsTrue())
    {
        printLongLine(data[0]);
    }
}

static void file_0261_kmUsLG2B2()
{
    long * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = new long[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
    }
    if(globalReturnsTrue())
    {
        printLongLine(data[0]);
    }
}

void file_0261_RFB0w()
{
    file_0261_pTVtwB2G1();
    file_0261_hjSG1B2G2();
    file_0261_HgVgwG2B1();
    file_0261_VVodsG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0261;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITCh7jg
    printLine("Calling jYZ5P()...");
    file_0261_O1Dab();
    printLine("Finished bE51g()");
#endif
#ifndef OMITnlaEJ
    printLine("Calling HQi7s()...");
    file_0261_fh1QB();
    printLine("Finished Fa3O2()");
#endif
    return 0;
}

#endif
