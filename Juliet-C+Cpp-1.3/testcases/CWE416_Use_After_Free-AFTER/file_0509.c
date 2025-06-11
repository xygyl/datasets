
#include "std_testcase.h"

static char * file_0509_helperX2Rw6(char * aString)
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

static char * file_0509_helperS1bhC(char * aString)
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

static int staticFive = 5;

#ifndef OMIT6g4J0

void file_0509_Yw43c()
{
    if(staticFive==5)
    {
        {
            char * reversedString = file_0509_helperYD2vE("HuydESink");
            printLine(reversedString);
        }
    }
}

#endif

#ifndef OMITY72gA

static void file_0509_CUToL1()
{
    if(staticFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * reversedString = file_0509_helperLHR9U("9thkASink");
            printLine(reversedString);
        }
    }
}

static void file_0509_bOAYG2()
{
    if(staticFive==5)
    {
        {
            char * reversedString = file_0509_helperJA3oz("zaL2zSink");
            printLine(reversedString);
        }
    }
}

void file_0509_lcPQa()
{
    file_0509_sORhq1();
    file_0509_O3fA52();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITQkz95
    printLine("Calling sf8vR()...");
    file_0509_gvNAu();
    printLine("Finished 9XrlW()");
#endif
#ifndef OMITPn3Ow
    printLine("Calling PWfrH()...");
    file_0509_puKjB();
    printLine("Finished FHEUM()");
#endif
    return 0;
}

#endif
