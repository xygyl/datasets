
#include "std_testcase.h"

#include <wchar.h>

namespace file_0288
{

#ifndef OMITYg1rS

void file_0288_gzh5p()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
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
    if(GLOBAL_CONST_FIVE==5)
    {
        printStructLine(&data[0]);
    }
}

#endif

#ifndef OMITLcMOz

static void file_0288_FLlgrB2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
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
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0288_tPKPiB2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
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
    if(GLOBAL_CONST_FIVE==5)
    {
        ;
    }
}

static void file_0288_crCkzG2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE!=5)
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
    if(GLOBAL_CONST_FIVE==5)
    {
        printStructLine(&data[0]);
    }
}

static void file_0288_IkM83G2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_FIVE==5)
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
    if(GLOBAL_CONST_FIVE==5)
    {
        printStructLine(&data[0]);
    }
}

void file_0288_0jPbL()
{
    file_0288_j5pepB2G1();
    file_0288_NNDeLB2G2();
    file_0288_n9vVMG2B1();
    file_0288_NWJHSG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0288;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITejgp9
    printLine("Calling AyEMO()...");
    file_0288_szC3s();
    printLine("Finished kYHpj()");
#endif
#ifndef OMITX1uBY
    printLine("Calling 4EROd()...");
    file_0288_uJlBC();
    printLine("Finished PNR2B()");
#endif
    return 0;
}

#endif
