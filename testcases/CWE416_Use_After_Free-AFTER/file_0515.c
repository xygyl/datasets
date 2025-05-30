
#include "std_testcase.h"

static char * file_0515_helper578GZ(char * aString)
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

static char * file_0515_helperpjxT6(char * aString)
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

#ifndef OMITejIV4

void file_0515_xKaUc()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            char * reversedString = file_0515_helperd0quq("wvhIwSink");
            printLine(reversedString);
        }
    }
}

#endif

#ifndef OMITHCnq5

static void file_0515_Nw3Cz1()
{
    if(GLOBAL_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        {
            char * reversedString = file_0515_helperMyGto("ljOEUSink");
            printLine(reversedString);
        }
    }
}

static void file_0515_J24iI2()
{
    if(GLOBAL_CONST_FIVE==5)
    {
        {
            char * reversedString = file_0515_helperJnFsG("0Cc2RSink");
            printLine(reversedString);
        }
    }
}

void file_0515_ZDSxn()
{
    file_0515_enKXz1();
    file_0515_TqUpa2();
}

#endif


#ifdef INCLUDEMAIN

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT45zSv
    printLine("Calling Ms8oP()...");
    file_0515_hOcml();
    printLine("Finished XGN9N()");
#endif
#ifndef OMITbjV62
    printLine("Calling RUS3F()...");
    file_0515_mnSB8();
    printLine("Finished ILrSR()");
#endif
    return 0;
}

#endif
