
#include "std_testcase.h"

static char * file_0511_helpercGsOr(char * aString)
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

static char * file_0511_helperRscdQ(char * aString)
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

#ifndef OMITIgA0a

void file_0511_cWYGB()
{
    if(GLOBAL_CONST_TRUE)
    {
        {
            char * reversedString = file_0511_helperLQhyf("IYEK4Sink");
            printLine(reversedString);
        }
    }
}

#endif

#ifndef OMITd5W0r

static void file_0511_MJ5bA1()
{
    if(GLOBAL_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * reversedString = file_0511_helperERaMN("QPpHkSink");
            printLine(reversedString);
        }
    }
}

static void file_0511_tauY82()
{
    if(GLOBAL_CONST_TRUE)
    {
        {
            char * reversedString = file_0511_helperWaBft("zpZWiSink");
            printLine(reversedString);
        }
    }
}

void file_0511_5k6NG()
{
    file_0511_7MWpJ1();
    file_0511_LRA062();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITYxnIF
    printLine("Calling QhQvP()...");
    file_0511_2gKMo();
    printLine("Finished Lo85S()");
#endif
#ifndef OMITbfNoK
    printLine("Calling z8H8a()...");
    file_0511_X3Qga();
    printLine("Finished x9bJB()");
#endif
    return 0;
}

#endif
