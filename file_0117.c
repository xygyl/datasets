
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITBIFIa

void file_0117_lF1uE()
{
    int i,j;
    twoIntsStruct * data;
    data = NULL;
    for(i = 0; i < 1; i++)
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
    for(j = 0; j < 1; j++)
    {
        printStructLine(&data[0]);
    }
}

#endif

#ifndef OMITK1zvP

static void file_0117_zcm8wB2G()
{
    int i,k;
    twoIntsStruct * data;
    data = NULL;
    for(i = 0; i < 1; i++)
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
    for(k = 0; k < 1; k++)
    {
        ;
    }
}

static void file_0117_HYVAUG2B()
{
    int h,j;
    twoIntsStruct * data;
    data = NULL;
    for(h = 0; h < 1; h++)
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
    for(j = 0; j < 1; j++)
    {
        printStructLine(&data[0]);
    }
}

void file_0117_huwqD()
{
    file_0117_GoUJ3B2G();
    file_0117_J8N84G2B();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITk7LUC
    printLine("Calling pAuhJ()...");
    file_0117_piJnX();
    printLine("Finished UnVJo()");
#endif
#ifndef OMITHNgVK
    printLine("Calling tOquz()...");
    file_0117_eoQ6E();
    printLine("Finished ws20q()");
#endif
    return 0;
}

#endif
