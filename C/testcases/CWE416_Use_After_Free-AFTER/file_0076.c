
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITzEB3v

void file_0076_uZ8Os()
{
    long * data;
    data = NULL;
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
    printLongLine(data[0]);
}

#endif

#ifndef OMITT8q0z

static void file_0076_wh168G2B()
{
    long * data;
    data = NULL;
    data = (long *)malloc(100*sizeof(long));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5L;
        }
    }
    printLongLine(data[0]);
}

static void file_0076_y09AnB2G()
{
    long * data;
    data = NULL;
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
    ;
}

void file_0076_Uq8j5()
{
    file_0076_Aios4G2B();
    file_0076_pJtUxB2G();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITuWQ8N
    printLine("Calling CB8mq()...");
    file_0076_70rPr();
    printLine("Finished E8ps8()");
#endif
#ifndef OMIT8HPGA
    printLine("Calling 3PT6v()...");
    file_0076_GDpL6();
    printLine("Finished P8iEt()");
#endif
    return 0;
}

#endif
