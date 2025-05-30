
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

#ifndef OMIT7Apxg

void file_0058_xlakL()
{
    int * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
        free(data);
    }
    if(staticReturnsTrue())
    {
        printIntLine(data[0]);
    }
}

#endif

#ifndef OMITrqca9

static void file_0058_O2qRFB2G1()
{
    int * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
        free(data);
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

static void file_0058_9p21dB2G2()
{
    int * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
        free(data);
    }
    if(staticReturnsTrue())
    {
        ;
    }
}

static void file_0058_0GMLoG2B1()
{
    int * data;
    data = NULL;
    if(staticReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
    }
    if(staticReturnsTrue())
    {
        printIntLine(data[0]);
    }
}

static void file_0058_sUnccG2B2()
{
    int * data;
    data = NULL;
    if(staticReturnsTrue())
    {
        data = (int *)malloc(100*sizeof(int));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5;
            }
        }
    }
    if(staticReturnsTrue())
    {
        printIntLine(data[0]);
    }
}

void file_0058_srBZk()
{
    file_0058_LLG9GB2G1();
    file_0058_JOPdxB2G2();
    file_0058_onIrXG2B1();
    file_0058_PpXitG2B2();
}

#endif

#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITu2WB4
    printLine("Calling T6BXl()...");
    file_0058_jJv4F();
    printLine("Finished ZKhVH()");
#endif
#ifndef OMITkSKlu
    printLine("Calling Vkuf3()...");
    file_0058_yQjUd();
    printLine("Finished Va8Dy()");
#endif
    return 0;
}

#endif
