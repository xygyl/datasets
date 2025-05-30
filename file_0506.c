
#include "std_testcase.h"

static char * file_0506_helperm3qXM(char * aString)
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

static char * file_0506_helperATpNL(char * aString)
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

static const int STATIC_CONST_TRUE = 1;
static const int STATIC_CONST_FALSE = 0;

#ifndef OMIT2FlRn

void file_0506_EmDpP()
{
    if(STATIC_CONST_TRUE)
    {
        {
            char * reversedString = file_0506_helper2a5M6("TelEeSink");
            printLine(reversedString);
        }
    }
}

#endif

#ifndef OMITReTk5

static void file_0506_paSOj1()
{
    if(STATIC_CONST_FALSE)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * reversedString = file_0506_helperH22PP("bawthSink");
            printLine(reversedString);
        }
    }
}

static void file_0506_W2B9J2()
{
    if(STATIC_CONST_TRUE)
    {
        {
            char * reversedString = file_0506_helperBoEIi("czFpYSink");
            printLine(reversedString);
        }
    }
}

void file_0506_xvM88()
{
    file_0506_9OQfG1();
    file_0506_lOEAo2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT8tdmE
    printLine("Calling bU9lB()...");
    file_0506_oQzM6();
    printLine("Finished aJMYc()");
#endif
#ifndef OMIT8umgw
    printLine("Calling zoT2w()...");
    file_0506_cDpN3();
    printLine("Finished PvHRn()");
#endif
    return 0;
}

#endif
