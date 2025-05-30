
#include "std_testcase.h"

#include <wchar.h>

namespace file_0196
{

#ifndef OMITSTBid

void file_0196_uaI4eSource(TwoIntsClass * &data)
{
    data = new TwoIntsClass[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i].intOne = 1;
            data[i].intTwo = 2;
        }
    }
    delete [] data;
}

#endif

#ifndef OMITMXJ97

void file_0196_3XsuJG2BSource(TwoIntsClass * &data)
{
    data = new TwoIntsClass[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i].intOne = 1;
            data[i].intTwo = 2;
        }
    }
}

void file_0196_wQuW0B2GSource(TwoIntsClass * &data)
{
    data = new TwoIntsClass[100];
    {
        size_t i;
        for(i = 0; i < 100; i++)
        {
            data[i].intOne = 1;
            data[i].intTwo = 2;
        }
    }
    delete [] data;
}

#endif
