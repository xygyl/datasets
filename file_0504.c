
#include "std_testcase.h"

static char * file_0504_helperuQVvv(char * aString)
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

static char * file_0504_helperrjyIE(char * aString)
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

#ifndef OMITbhrwq

void file_0504_Qslja()
{
    if(1)
    {
        {
            char * reversedString = file_0504_helperwb6dE("3XCuOSink");
            printLine(reversedString);
        }
    }
}

#endif

#ifndef OMITcuPso

static void file_0504_PALyG1()
{
    if(0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * reversedString = file_0504_helper900iT("iyqDMSink");
            printLine(reversedString);
        }
    }
}

static void file_0504_lOA612()
{
    if(1)
    {
        {
            char * reversedString = file_0504_helperCoQWk("kpPJ9Sink");
            printLine(reversedString);
        }
    }
}

void file_0504_W1063()
{
    file_0504_evW851();
    file_0504_ZbFFb2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITr8Qtb
    printLine("Calling XHWqR()...");
    file_0504_rAann();
    printLine("Finished qa9hg()");
#endif
#ifndef OMITquTuY
    printLine("Calling fYvbc()...");
    file_0504_Nt16y();
    printLine("Finished 6usuM()");
#endif
    return 0;
}

#endif
