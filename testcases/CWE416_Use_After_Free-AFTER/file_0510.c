
#include "std_testcase.h"

static char * file_0510_helper7ZUrG(char * aString)
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

static char * file_0510_helperDJizh(char * aString)
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

static int file_0510_staticReturnsTrue()
{
    return 1;
}

static int file_0510_staticReturnsFalse()
{
    return 0;
}

#ifndef OMITYEd2g

void file_0510_56QSm()
{
    if(file_0510_staticReturnsTrue())
    {
        {
            char * reversedString = file_0510_helperzSlAw("iVVNJSink");
            printLine(reversedString);
        }
    }
}

#endif

#ifndef OMIT9Y1ep

static void file_0510_wleJX1()
{
    if(file_0510_staticReturnsFalse())
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * reversedString = file_0510_helper6c0Yu("5Ngc2Sink");
            printLine(reversedString);
        }
    }
}

static void file_0510_Jr2UF2()
{
    if(file_0510_staticReturnsTrue())
    {
        {
            char * reversedString = file_0510_helper9lp1J("EIOTDSink");
            printLine(reversedString);
        }
    }
}

void file_0510_bPmPI()
{
    file_0510_GOlxz1();
    file_0510_snNNa2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITqIzaE
    printLine("Calling dJiow()...");
    file_0510_EzIjK();
    printLine("Finished uUBBP()");
#endif
#ifndef OMITZib0a
    printLine("Calling HZACA()...");
    file_0510_Lnr5D();
    printLine("Finished gV96q()");
#endif
    return 0;
}

#endif
