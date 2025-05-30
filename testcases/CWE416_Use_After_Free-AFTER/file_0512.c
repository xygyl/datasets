
#include "std_testcase.h"

static char * file_0512_helper8uF7O(char * aString)
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

static char * file_0512_helperAnLBI(char * aString)
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

#ifndef OMITgGd9A

void file_0512_54v5X()
{
    if(globalTrue)
    {
        {
            char * reversedString = file_0512_helperotY0p("STPrrSink");
            printLine(reversedString);
        }
    }
}

#endif

#ifndef OMITcwf6A

static void file_0512_S85Wj1()
{
    if(globalFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * reversedString = file_0512_helper1UL8C("5MHq0Sink");
            printLine(reversedString);
        }
    }
}

static void file_0512_mpFPe2()
{
    if(globalTrue)
    {
        {
            char * reversedString = file_0512_helperKFnFv("kJLTySink");
            printLine(reversedString);
        }
    }
}

void file_0512_AEpGD()
{
    file_0512_C4QBn1();
    file_0512_dpZ6c2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT6fvOJ
    printLine("Calling MGUW8()...");
    file_0512_E80mX();
    printLine("Finished dYcKo()");
#endif
#ifndef OMITDdVCZ
    printLine("Calling mwyZJ()...");
    file_0512_NX8VU();
    printLine("Finished hjj59()");
#endif
    return 0;
}

#endif
