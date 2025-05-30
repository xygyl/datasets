#include "std_testcase.h"

namespace file_0501
{

#ifndef OMIT6F3mw

class file_0501_Class
{
    public:
        file_0501_Class()
        {
            name = NULL;
        }

        file_0501_Class(const char * name)
        {
            if (name)
            {
                this->name = new char[strlen(name) + 1];
                strcpy(this->name, name);
            }
            else
            {
                this->name = new char[1];
                *(this->name) = '\0';
            }
        }

        ~file_0501_Class()
        {
            delete [] name;
        }

        file_0501_Class(file_0501_Class &file_0501_Object)
        {
            this->name = new char[strlen(file_0501_Object.name)+1];
            strcpy(this->name, file_0501_Object.name);
        }

        file_0501_Class& operator=(const file_0501_Class& file_0501_Object)
        {
            delete [] this->name;
            this->name = new char[strlen(file_0501_Object.name)+1];
            strcpy(this->name, file_0501_Object.name);
            return *this;
        }

        char * name;
};

void file_0501_ryEG0()
{
    file_0501_Class file_0501_Object("MPllLClass");
    file_0501_Object = file_0501_Object;
    printLine(file_0501_Object.name);
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0501;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITdOQvT
    printLine("Calling file_0501_xRLQs()...");
    file_0501_b19mL();
    printLine("Finished file_0501_D9wNX()");
#endif
    return 0;
}

#endif
