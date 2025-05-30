
#include "std_testcase.h"

#include <wchar.h>

namespace file_0277
{

#ifndef OMITPSV3F

void file_0277_y5pYd()
{
    twoIntsStruct * data;
    data = NULL;
    if(1)
    {
        data = new twoIntsStruct[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        delete [] data;
    }
    if(1)
    {
        printStructLine(&data[0]);
    }
}

#endif

#ifndef OMITsXMcv

static void file_0277_HM5EIB2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(1)
    {
        data = new twoIntsStruct[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        delete [] data;
    }
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0277_LFZm9B2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(1)
    {
        data = new twoIntsStruct[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        delete [] data;
    }
    if(1)
    {
        ;
    }
}

static void file_0277_4w0diG2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new twoIntsStruct[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
    }
    if(1)
    {
        printStructLine(&data[0]);
    }
}

static void file_0277_kWAVGG2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(1)
    {
        data = new twoIntsStruct[100];
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
    }
    if(1)
    {
        printStructLine(&data[0]);
    }
}

void file_0277_zurRL()
{
    file_0277_Hbr8qB2G1();
    file_0277_qoreSB2G2();
    file_0277_kNddLG2B1();
    file_0277_TuMt8G2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0277;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITNgBPy
    printLine("Calling 4AgDO()...");
    file_0277_XsBLI();
    printLine("Finished 1RPLk()");
#endif
#ifndef OMITjT4sZ
    printLine("Calling lEtKY()...");
    file_0277_vniyP();
    printLine("Finished l6YTA()");
#endif
    return 0;
}

#endif
