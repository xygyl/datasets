
#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITpPp0H

void file_0018_DSwnv()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    memset(data, 'A', 100-1);
    data[100-1] = '\0';
    free(data);
    goto sink;
sink:
    printLine(data);
}

#endif

#ifndef OMITyAGTj

static void file_0018_9MQteB2G()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    memset(data, 'A', 100-1);
    data[100-1] = '\0';
    free(data);
    goto sink;
sink:
    ;
}

static void file_0018_gcG7CG2B()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = (char *)malloc(100*sizeof(char));
    if (data == NULL) {exit(-1);}
    memset(data, 'A', 100-1);
    data[100-1] = '\0';
    goto sink;
sink:
    printLine(data);
}

void file_0018_0qQxU()
{
    file_0018_eKrbtB2G();
    file_0018_jFKdlG2B();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITfYIE4
    printLine("Calling y1KS8()...");
    file_0018_2oqhj();
    printLine("Finished atWVD()");
#endif
#ifndef OMITR1ZYk
    printLine("Calling z0K7O()...");
    file_0018_6w65G();
    printLine("Finished n5JfV()");
#endif
    return 0;
}

#endif
