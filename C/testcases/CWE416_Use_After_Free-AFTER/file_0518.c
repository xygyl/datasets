
#include "std_testcase.h"

static char * file_0518_helpervnhnB(char * aString)
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

static char * file_0518_helper6pvy6(char * aString)
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

#ifndef OMIT0ahWj

void file_0518_rKkGx()
{
    while(1)
    {
        {
            char * reversedString = file_0518_helpertytd7("aEC24Sink");
            printLine(reversedString);
        }
        break;
    }
}

#endif

#ifndef OMITlG5mP

static void file_0518_Q0dmx1()
{
    while(1)
    {
        {
            char * reversedString = file_0518_helperDR6BL("HJen1Sink");
            printLine(reversedString);
        }
        break;
    }
}

void file_0518_k73vq()
{
    file_0518_bDCdW1();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITt4J9D
    printLine("Calling LIdWQ()...");
    file_0518_Gg3e4();
    printLine("Finished VO4Ll()");
#endif
#ifndef OMITO9dfF
    printLine("Calling cEFIk()...");
    file_0518_1wrVf();
    printLine("Finished tT5BT()");
#endif
    return 0;
}

#endif
