
#include "std_testcase.h"

static char * file_0507_helperFHMwg(char * aString)
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

static char * file_0507_helperjM7Vw(char * aString)
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

static int staticTrue = 1;
static int staticFalse = 0;

#ifndef OMITvA1Ox

void file_0507_dIJd2()
{
    if(staticTrue)
    {
        {
            char * reversedString = file_0507_helperX21vN("m561CSink");
            printLine(reversedString);
        }
    }
}

#endif

#ifndef OMITiEFK3

static void file_0507_gKLEO1()
{
    if(staticFalse)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * reversedString = file_0507_helperlUZvY("9hX11Sink");
            printLine(reversedString);
        }
    }
}

static void file_0507_OFNmJ2()
{
    if(staticTrue)
    {
        {
            char * reversedString = file_0507_helperIZi0I("4jmDTSink");
            printLine(reversedString);
        }
    }
}

void file_0507_qfuRw()
{
    file_0507_Yjf521();
    file_0507_BvAwc2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITJprYu
    printLine("Calling K8ZQC()...");
    file_0507_SoXwW();
    printLine("Finished 6goX2()");
#endif
#ifndef OMITLCHaI
    printLine("Calling gdNbo()...");
    file_0507_mPrcL();
    printLine("Finished Ne8qq()");
#endif
    return 0;
}

#endif
