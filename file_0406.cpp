
#include "std_testcase.h"

#include <wchar.h>

static const int STATIC_CONST_FIVE = 5;

namespace file_0406
{

#ifndef OMITTg88p

void file_0406_apsH3()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(STATIC_CONST_FIVE==5)
    {
        printIntLine(*data);
    }
}

#endif

#ifndef OMITJr1ZW

static void file_0406_P9ndbB2G1()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        ;
    }
}

static void file_0406_fcpFEB2G2()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new int;
        *data = 5;
        delete data;
    }
    if(STATIC_CONST_FIVE==5)
    {
        ;
    }
}

static void file_0406_vvpKQG2B1()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_FIVE!=5)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data = new int;
        *data = 5;
    }
    if(STATIC_CONST_FIVE==5)
    {
        printIntLine(*data);
    }
}

static void file_0406_oXR5CG2B2()
{
    int * data;
    data = NULL;
    if(STATIC_CONST_FIVE==5)
    {
        data = new int;
        *data = 5;
    }
    if(STATIC_CONST_FIVE==5)
    {
        printIntLine(*data);
    }
}

void file_0406_9pwWW()
{
    file_0406_y6UR4B2G1();
    file_0406_AeLnCB2G2();
    file_0406_6nww9G2B1();
    file_0406_qiaZcG2B2();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0406;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITdHR5p
    printLine("Calling WqJMJ()...");
    file_0406_fQOCO();
    printLine("Finished 7rIiO()");
#endif
#ifndef OMITPyhNk
    printLine("Calling h0FRr()...");
    file_0406_vp054();
    printLine("Finished 960dI()");
#endif
    return 0;
}

#endif
