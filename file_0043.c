
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITqaCfd

void file_0043_G67oI()
{
    int64_t * data;
    data = NULL;
    goto source;
source:
    data = (int64_t *)malloc(100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5LL;
        }
    }
    free(data);
    goto sink;
sink:
    printLongLongLine(data[0]);
}

#endif

#ifndef OMITYa0ri

static void file_0043_fBZHUB2G()
{
    int64_t * data;
    data = NULL;
    goto source;
source:
    data = (int64_t *)malloc(100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5LL;
        }
    }
    free(data);
    goto sink;
sink:
    ;
}

static void file_0043_gZi0PG2B()
{
    int64_t * data;
    data = NULL;
    goto source;
source:
    data = (int64_t *)malloc(100*sizeof(int64_t));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i] = 5LL;
        }
    }
    goto sink;
sink:
    printLongLongLine(data[0]);
}

void file_0043_WHW5g()
{
    file_0043_sKU9iB2G();
    file_0043_UIqJ0G2B();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITXcAkt
    printLine("Calling TPV0M()...");
    file_0043_4WKmH();
    printLine("Finished CF89l()");
#endif
#ifndef OMITcy5i3
    printLine("Calling wGr1D()...");
    file_0043_yKS0T();
    printLine("Finished 32S67()");
#endif
    return 0;
}

#endif
