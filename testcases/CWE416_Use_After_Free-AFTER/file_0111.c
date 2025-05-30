
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITTeZow

void file_0111_wBBs4()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        free(data);
    }
    if(globalReturnsTrue())
    {
        printStructLine(&data[0]);
    }
}

#endif

#ifndef OMITkjY8G

static void file_0111_fm39wB2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        free(data);
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

static void file_0111_O2aOXB2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
        free(data);
    }
    if(globalReturnsTrue())
    {
        ;
    }
}

static void file_0111_AVyqbG2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
    }
    if(globalReturnsTrue())
    {
        printStructLine(&data[0]);
    }
}

static void file_0111_Dt7nrG2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalReturnsTrue())
    {
        data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i].intOne = 1;
                data[i].intTwo = 2;
            }
        }
    }
    if(globalReturnsTrue())
    {
        printStructLine(&data[0]);
    }
}

void file_0111_rmI5w()
{
    file_0111_wZczBB2G1();
    file_0111_X1lEhB2G2();
    file_0111_bkbBGG2B1();
    file_0111_7FXaaG2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT8apL2
    printLine("Calling Wp3rd()...");
    file_0111_WuY42();
    printLine("Finished 4uPa4()");
#endif
#ifndef OMIT2AKms
    printLine("Calling qmDJc()...");
    file_0111_SSvPm();
    printLine("Finished kUFXD()");
#endif
    return 0;
}

#endif
