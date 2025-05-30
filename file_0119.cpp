
#include "std_testcase.h"

#include <wchar.h>

namespace file_0119
{

#ifndef OMITiYvhB

static void file_0119_zD8BySource(twoIntsStruct * &data)
{
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i].intOne = 1;
            data[i].intTwo = 2;
        }
    }
    free(data);
}

void file_0119_zMJJU()
{
    twoIntsStruct * data;
    data = NULL;
    file_0119_MICN4Source(data);
    printStructLine(&data[0]);
}

#endif

#ifndef OMITaZR4W

static void file_0119_6CKI8G2BSource(twoIntsStruct * &data)
{
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i].intOne = 1;
            data[i].intTwo = 2;
        }
    }
}

static void file_0119_8wxP8G2B()
{
    twoIntsStruct * data;
    data = NULL;
    file_0119_r5i1bG2BSource(data);
    printStructLine(&data[0]);
}

static void file_0119_MevhwB2GSource(twoIntsStruct * &data)
{
    data = (twoIntsStruct *)malloc(100*sizeof(twoIntsStruct));
    if (data == NULL) {exit(-1);}
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i].intOne = 1;
            data[i].intTwo = 2;
        }
    }
    free(data);
}

static void file_0119_fhylkB2G()
{
    twoIntsStruct * data;
    data = NULL;
    file_0119_yAp0eB2GSource(data);
    ;
}

void file_0119_BIvV7()
{
    file_0119_vjvJFG2B();
    file_0119_YVmJFB2G();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0119;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMIThe81W
    printLine("Calling fYgfc()...");
    file_0119_kWHX5();
    printLine("Finished DJwL2()");
#endif
#ifndef OMIToVzHo
    printLine("Calling TGxOE()...");
    file_0119_kkHpc();
    printLine("Finished kyEHP()");
#endif
    return 0;
}

#endif
