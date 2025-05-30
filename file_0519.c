
#include "std_testcase.h"

static char * file_0519_helpervzOdA(char * aString)
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

static char * file_0519_helpervcVxR(char * aString)
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

#ifndef OMITGbwiH

void file_0519_FCgKL()
{
    int j;
    for(j = 0; j < 1; j++)
    {
        {
            char * reversedString = file_0519_helperOn3CD("OQplgSink");
            printLine(reversedString);
        }
    }
}

#endif

#ifndef OMITQmTSP

static void file_0519_kSz5c1()
{
    int k;
    for(k = 0; k < 1; k++)
    {
        {
            char * reversedString = file_0519_helperKwGH5("RjEhESink");
            printLine(reversedString);
        }
    }
}

void file_0519_x7Ke9()
{
    file_0519_a5xFS1();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITx6MJY
    printLine("Calling 9kEuU()...");
    file_0519_my8xh();
    printLine("Finished 5uyjm()");
#endif
#ifndef OMITwsZ1I
    printLine("Calling kNHut()...");
    file_0519_XWgeD();
    printLine("Finished OMLRZ()");
#endif
    return 0;
}

#endif
