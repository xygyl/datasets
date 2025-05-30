
#include "std_testcase.h"

static char * file_0508_helperqR5SQ(char * aString)
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

static char * file_0508_helperEG6Jr(char * aString)
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

static const int STATIC_CONST_FIVE = 5;

#ifndef OMITZuC1J

void file_0508_BWkCM()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            char * reversedString = file_0508_helperTYIkx("reC3aSink");
            printLine(reversedString);
        }
    }
}

#endif

#ifndef OMITxh8Da

static void file_0508_e6R5B1()
{
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * reversedString = file_0508_helper0QTCn("rMkzqSink");
            printLine(reversedString);
        }
    }
}

static void file_0508_3jI3W2()
{
    if(STATIC_CONST_FIVE==5)
    {
        {
            char * reversedString = file_0508_helperrN3hE("kdYaLSink");
            printLine(reversedString);
        }
    }
}

void file_0508_qcRMt()
{
    file_0508_gy7Iz1();
    file_0508_dEllo2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITjyZsq
    printLine("Calling 0ZMy8()...");
    file_0508_dV6s9();
    printLine("Finished i8doz()");
#endif
#ifndef OMITmw21I
    printLine("Calling pEIPu()...");
    file_0508_SFyg4();
    printLine("Finished UA8Bb()");
#endif
    return 0;
}

#endif
