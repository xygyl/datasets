
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITXcSia

void file_0109_q78on()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
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
    if(GLOBAL_CONST_TRUE)
    {
        printStructLine(&data[0]);
    }
}

#endif

#ifndef OMITemV1B

static void file_0109_O4GP8B2G1()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
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
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0109_EovipB2G2()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
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
    if(GLOBAL_CONST_TRUE)
    {
        ;
    }
}

static void file_0109_OZvApG2B1()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_FALSE)
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
    if(GLOBAL_CONST_TRUE)
    {
        printStructLine(&data[0]);
    }
}

static void file_0109_I3lOYG2B2()
{
    twoIntsStruct * data;
    data = NULL;
    if(GLOBAL_CONST_TRUE)
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
    if(GLOBAL_CONST_TRUE)
    {
        printStructLine(&data[0]);
    }
}

void file_0109_ydNFe()
{
    file_0109_nDtgnB2G1();
    file_0109_nZI9ZB2G2();
    file_0109_TtmnSG2B1();
    file_0109_DpHuSG2B2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITtJR83
    printLine("Calling xhNRi()...");
    file_0109_ZyIDK();
    printLine("Finished YLdqJ()");
#endif
#ifndef OMITYvBHd
    printLine("Calling aAjw0()...");
    file_0109_tQoiH();
    printLine("Finished 9dW6L()");
#endif
    return 0;
}

#endif
