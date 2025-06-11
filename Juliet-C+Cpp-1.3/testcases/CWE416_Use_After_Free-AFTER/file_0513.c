
#include "std_testcase.h"

static char * file_0513_helperPi793(char * aString)
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

static char * file_0513_helperMr4dV(char * aString)
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

#ifndef OMIT9Q0J9

void file_0513_0HVdw()
{
    if(globalReturnsTrue())
    {
        {
            char * reversedString = file_0513_helperPUGBO("KseFkSink");
            printLine(reversedString);
        }
    }
}

#endif

#ifndef OMITOKcXB

static void file_0513_nu1II1()
{
    if(globalReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * reversedString = file_0513_helper7FBIE("29YSgSink");
            printLine(reversedString);
        }
    }
}

static void file_0513_agDHQ2()
{
    if(globalReturnsTrue())
    {
        {
            char * reversedString = file_0513_helperm0o0y("CaCagSink");
            printLine(reversedString);
        }
    }
}

void file_0513_ZyrrU()
{
    file_0513_AxiP71();
    file_0513_VKeN52();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITOWhOw
    printLine("Calling k0tZb()...");
    file_0513_j0tKO();
    printLine("Finished cUUJV()");
#endif
#ifndef OMITmlqCN
    printLine("Calling ebkbc()...");
    file_0513_y6eIv();
    printLine("Finished aDHAj()");
#endif
    return 0;
}

#endif
