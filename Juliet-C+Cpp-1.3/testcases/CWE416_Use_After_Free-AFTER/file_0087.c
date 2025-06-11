
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMIT482WD

void file_0087_Lv8jy()
{
    long * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
        free(data);
    }
    else
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
    }
    if(globalReturnsTrueOrFalse())
    {
        printLongLine(data[0]);
    }
    else
    {
        ;
    }
}

#endif

#ifndef OMIT9Cr2u

static void file_0087_DliAJB2G()
{
    long * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
        free(data);
    }
    else
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
        free(data);
    }
    if(globalReturnsTrueOrFalse())
    {
        ;
    }
    else
    {
        ;
    }
}

static void file_0087_Ui1x0G2B()
{
    long * data;
    data = NULL;
    if(globalReturnsTrueOrFalse())
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
    }
    else
    {
        data = (long *)malloc(100*sizeof(long));
        if (data == NULL) {exit(-1);}
        {
            size_t i;
            for(i = 0; i < 100; i++)
            {
                data[i] = 5L;
            }
        }
    }
    if(globalReturnsTrueOrFalse())
    {
        printLongLine(data[0]);
    }
    else
    {
        printLongLine(data[0]);
    }
}

void file_0087_gKLC6()
{
    file_0087_kdPHQB2G();
    file_0087_isX7CG2B();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITMFbAC
    printLine("Calling OX4eJ()...");
    file_0087_MdyHa();
    printLine("Finished DV3wN()");
#endif
#ifndef OMITnCK3F
    printLine("Calling ORGak()...");
    file_0087_cPaXj();
    printLine("Finished GrKYm()");
#endif
    return 0;
}

#endif
