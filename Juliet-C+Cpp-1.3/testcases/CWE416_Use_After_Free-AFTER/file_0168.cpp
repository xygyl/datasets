
#include "std_testcase.h"

#include <wchar.h>

namespace file_0168
{

#ifndef OMITpbw2f

void file_0168_05IMm()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = new char[100];
    memset(data, 'A', 100-1);
    data[100-1] = '\0';
    delete [] data;
    goto sink;
sink:
    printLine(data);
}

#endif

#ifndef OMITP9JgN

static void file_0168_ikvWuB2G()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = new char[100];
    memset(data, 'A', 100-1);
    data[100-1] = '\0';
    delete [] data;
    goto sink;
sink:
    ;
}

static void file_0168_Yc6p6G2B()
{
    char * data;
    data = NULL;
    goto source;
source:
    data = new char[100];
    memset(data, 'A', 100-1);
    data[100-1] = '\0';
    goto sink;
sink:
    printLine(data);
}

void file_0168_wE5XA()
{
    file_0168_dh41pB2G();
    file_0168_aZorAG2B();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0168;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIT57V1q
    printLine("Calling tBOMT()...");
    file_0168_xRIH5();
    printLine("Finished fqhmw()");
#endif
#ifndef OMITCmfEl
    printLine("Calling eMVX4()...");
    file_0168_Y1TNz();
    printLine("Finished hpaR4()");
#endif
    return 0;
}

#endif
