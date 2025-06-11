
#include "std_testcase.h"

static char * file_0517_helper9C1Br(char * aString)
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

static char * file_0517_helperqokxa(char * aString)
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

#ifndef OMITuwRCQ

void file_0517_Gj9ua()
{
    switch(6)
    {
    case 6:
    {
        char * reversedString = file_0517_helperbpdCg("6fn42Sink");
        printLine(reversedString);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}

#endif

#ifndef OMITKsTem

static void file_0517_KwXGW1()
{
    switch(5)
    {
    case 6:
        printLine("Benign, fixed string");
        break;
    default:
    {
        char * reversedString = file_0517_helper0x299("II8S2Sink");
        printLine(reversedString);
    }
    break;
    }
}

static void file_0517_yHHdu2()
{
    switch(6)
    {
    case 6:
    {
        char * reversedString = file_0517_helperrqCqj("5ifNvSink");
        printLine(reversedString);
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}

void file_0517_nW9fe()
{
    file_0517_SFuJu1();
    file_0517_UEtCz2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITovSQJ
    printLine("Calling OaXhi()...");
    file_0517_bGqOF();
    printLine("Finished Jx9Yj()");
#endif
#ifndef OMIT8EMaa
    printLine("Calling WdlhO()...");
    file_0517_8gIx2();
    printLine("Finished VeM25()");
#endif
    return 0;
}

#endif
