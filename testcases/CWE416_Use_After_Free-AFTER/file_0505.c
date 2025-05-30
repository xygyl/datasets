
#include "std_testcase.h"

static char * file_0505_helperXuzFd(char * aString)
{
    size_t i = 0;
    size_t j;
    char * reversedString = NULL;
    if (aString != NULL)
    {
        i = strlen(aString);
        reversedString = (char *) malloc(i+1);
        if (reversedString == NULL) {exit(-1);}
        for (j = 0; j < i; j++)
        {
            reversedString[j] = aString[i-j-1];
        }
        reversedString[i] = '\0';
        free(reversedString);
        return reversedString;
    }
    else
    {
        return NULL;
    }
}

static char * file_0505_helperMv2kD(char * aString)
{
    size_t i = 0;
    size_t j;
    char * reversedString = NULL;
    if (aString != NULL)
    {
        i = strlen(aString);
        reversedString = (char *) malloc(i+1);
        if (reversedString == NULL) {exit(-1);}
        for (j = 0; j < i; j++)
        {
            reversedString[j] = aString[i-j-1];
        }
        reversedString[i] = '\0';
        return reversedString;
    }
    else
    {
        return NULL;
    }
}

#ifndef OMITbTz9W

void file_0505_toqA9()
{
    if(5==5)
    {
        {
            char * reversedString = file_0505_helperVZO6d("1s60cSink");
            printLine(reversedString);
        }
    }
}

#endif

#ifndef OMITRDe1z

static void file_0505_5h9qc1()
{
    if(5!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * reversedString = file_0505_helperlyK30("RDMcbSink");
            printLine(reversedString);
        }
    }
}

static void file_0505_evIMh2()
{
    if(5==5)
    {
        {
            char * reversedString = file_0505_helper8YRf0("tzlZUSink");
            printLine(reversedString);
        }
    }
}

void file_0505_wJAKY()
{
    file_0505_xu2CZ1();
    file_0505_Gch022();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITkpi4x
    printLine("Calling Ehz4O()...");
    file_0505_GuYUC();
    printLine("Finished QWy30()");
#endif
#ifndef OMITL0WVO
    printLine("Calling Zi9nx()...");
    file_0505_Vvaa3();
    printLine("Finished IhtH8()");
#endif
    return 0;
}

#endif
