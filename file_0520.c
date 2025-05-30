
#include "std_testcase.h"

static char * file_0520_helperXBRDN(char * aString)
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

static char * file_0520_helperXZRsP(char * aString)
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

#ifndef OMITVmlD5

void file_0520_UXPaz()
{
    goto sink;
sink:
    {
        char * reversedString = file_0520_helperjEsph("3TtVlSink");
        printLine(reversedString);
    }
}

#endif

#ifndef OMITLEr6T

static void file_0520_Wxk201()
{
    goto sink;
sink:
    {
        char * reversedString = file_0520_helperKah2n("JL0tpSink");
        printLine(reversedString);
    }
}

void file_0520_0QB7E()
{
    file_0520_n9kjG1();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITCQntA
    printLine("Calling WFgIZ()...");
    file_0520_AGRhC();
    printLine("Finished txPfG()");
#endif
#ifndef OMITXYyiC
    printLine("Calling yoK4u()...");
    file_0520_1j0z9();
    printLine("Finished AVDQm()");
#endif
    return 0;
}

#endif
