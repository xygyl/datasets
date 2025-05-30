
#include "std_testcase.h"

#include <wchar.h>

namespace file_0146
{

#ifndef OMITKxjGC

void file_0146_qcv2WSource(wchar_t * &data)
{
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wmemset(data, L'A', 100-1);
    data[100-1] = L'\0';
    free(data);
}

#endif

#ifndef OMITjiNXN

void file_0146_gvYhZG2BSource(wchar_t * &data)
{
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wmemset(data, L'A', 100-1);
    data[100-1] = L'\0';
}

void file_0146_yPQCRB2GSource(wchar_t * &data)
{
    data = (wchar_t *)malloc(100*sizeof(wchar_t));
    if (data == NULL) {exit(-1);}
    wmemset(data, L'A', 100-1);
    data[100-1] = L'\0';
    free(data);
}

#endif
