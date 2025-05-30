
#include "std_testcase.h"

static char * file_0514_helper37Leb(char * aString)
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

static char * file_0514_helperJBKDA(char * aString)
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

#ifndef OMITMpD9M

void file_0514_odoUz()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            char * reversedString = file_0514_helperMU8tn("J2pzISink");
            printLine(reversedString);
        }
    }
    else
    {
        {
            char * reversedString = file_0514_helpervz8pN("XZC0kSink");
            printLine(reversedString);
        }
    }
}

#endif

#ifndef OMITzD2dP

static void file_0514_oKFrB1()
{
    if(globalReturnsTrueOrFalse())
    {
        {
            char * reversedString = file_0514_helperQKfLd("il7DuSink");
            printLine(reversedString);
        }
    }
    else
    {
        {
            char * reversedString = file_0514_helperA4Klm("mXjdZSink");
            printLine(reversedString);
        }
    }
}

void file_0514_ecDQa()
{
    file_0514_4Y6hm1();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT8r8wc
    printLine("Calling FpNEo()...");
    file_0514_6lAcf();
    printLine("Finished KRrgk()");
#endif
#ifndef OMIT98M4P
    printLine("Calling GRZyQ()...");
    file_0514_vdg9z();
    printLine("Finished jc69x()");
#endif
    return 0;
}

#endif
