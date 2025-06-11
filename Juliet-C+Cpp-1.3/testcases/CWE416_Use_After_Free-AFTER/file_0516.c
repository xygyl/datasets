
#include "std_testcase.h"

static char * file_0516_helperIN0xW(char * aString)
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

static char * file_0516_helperZyI8I(char * aString)
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

#ifndef OMIT0XGn4

void file_0516_BTneT()
{
    if(globalFive==5)
    {
        {
            char * reversedString = file_0516_helperwMmoB("t3wpRSink");
            printLine(reversedString);
        }
    }
}

#endif

#ifndef OMIT0bXyP

static void file_0516_WtG4U1()
{
    if(globalFive!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * reversedString = file_0516_helpero9wLN("vXDnqSink");
            printLine(reversedString);
        }
    }
}

static void file_0516_GCJhT2()
{
    if(globalFive==5)
    {
        {
            char * reversedString = file_0516_helperbj3jg("Jl9bUSink");
            printLine(reversedString);
        }
    }
}

void file_0516_7YL1D()
{
    file_0516_tCNKC1();
    file_0516_Q8vgS2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT2iC80
    printLine("Calling k50uc()...");
    file_0516_paVx6();
    printLine("Finished WG7sB()");
#endif
#ifndef OMITtgjfq
    printLine("Calling xgFAe()...");
    file_0516_p50cW();
    printLine("Finished poNl8()");
#endif
    return 0;
}

#endif
