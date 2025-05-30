
#include "std_testcase.h"

static char * file_0503_helperyWZg9(char * aString)
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

static char * file_0503_helper16yp1(char * aString)
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

#ifndef OMITIMPL6

void file_0503_0aUXb()
{
    {
        char * reversedString = file_0503_helperKB9ng("FUDeWSink");
        printLine(reversedString);
    }
}

#endif

#ifndef OMITxyeq3

static void file_0503_nZeNf1()
{
    {
        char * reversedString = file_0503_helperpX9Iv("VZMFISink");
        printLine(reversedString);
    }
}

void file_0503_nJ694()
{
    file_0503_FA6p81();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITOp92O
    printLine("Calling K9ulb()...");
    file_0503_6oaMa();
    printLine("Finished wIWq0()");
#endif
#ifndef OMITyiJRn
    printLine("Calling SK7bv()...");
    file_0503_XhQpD();
    printLine("Finished e7o81()");
#endif
    return 0;
}

#endif
