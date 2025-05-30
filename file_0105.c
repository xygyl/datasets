
#include "std_testcase.h"

#include <wchar.h>

static int staticTrue = 1;
static int staticFalse = 0;

#ifndef OMIT1fxhK

void file_0105_omJfW()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticTrue)
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
    if(staticTrue)
    {
        printStructLine(&data[0]);
    }
}

#endif

#ifndef OMITDxHJ3

static void file_0105_F2O7gB2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticTrue)
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
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0105_ge6MyB2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticTrue)
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
    if(staticTrue)
    {
        ;
    }
}

static void file_0105_FFaXsG2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticFalse)
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
    if(staticTrue)
    {
        printStructLine(&data[0]);
    }
}

static void file_0105_aqkxwG2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(staticTrue)
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
    if(staticTrue)
    {
        printStructLine(&data[0]);
    }
}

void file_0105_MrHOI()
{
    file_0105_vGiCmB2G1();
    file_0105_Lh4ssB2G2();
    file_0105_ShrJNG2B1();
    file_0105_HUUJPG2B2();
}

#endif

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITnKU2o
    printLine("Calling jAiBk()...");
    file_0105_977aP();
    printLine("Finished btMWt()");
#endif
#ifndef OMIT9X2Cj
    printLine("Calling ZOKYt()...");
    file_0105_SZNM6();
    printLine("Finished zOaFc()");
#endif
    return 0;
}

#endif
