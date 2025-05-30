
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITyFNmG

void file_0110_VLUZA()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalTrue)
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
    if(globalTrue)
    {
        printStructLine(&data[0]);
    }
}

#endif

#ifndef OMITd75Ex

static void file_0110_h91WqB2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalTrue)
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
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0110_hGLfxB2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalTrue)
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
    if(globalTrue)
    {
        ;
    }
}

static void file_0110_dRVLuG2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalFalse)
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
    if(globalTrue)
    {
        printStructLine(&data[0]);
    }
}

static void file_0110_z600MG2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(globalTrue)
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
    if(globalTrue)
    {
        printStructLine(&data[0]);
    }
}

void file_0110_YnU8g()
{
    file_0110_BEh9uB2G1();
    file_0110_uWu7kB2G2();
    file_0110_vkSMyG2B1();
    file_0110_yx2TrG2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITX2Uvk
    printLine("Calling Nwdc9()...");
    file_0110_kN9Rm();
    printLine("Finished kTbHn()");
#endif
#ifndef OMITvKf1I
    printLine("Calling CMnkz()...");
    file_0110_afuna();
    printLine("Finished vprUD()");
#endif
    return 0;
}

#endif
