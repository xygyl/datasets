#include "std_testcase.h"

namespace file_0502
{

#ifndef OMITqFsXb

class AnonClass
{
	public:
		AnonClass()
        {
			name = NULL;
		}

		AnonClass(const char * name)
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

		~AnonClass()
        {
			delete [] name;
		}

		AnonClass(AnonClass &anonClassObject)
        {
			this->name = new char[strlen(anonClassObject.name)+1];
			strcpy(this->name, anonClassObject.name);
		}

		AnonClass& operator=(const AnonClass& anonClassObject)
        {
			if (this != &anonClassObject)
            {
				delete [] this->name;
				this->name = new char[strlen(anonClassObject.name)+1];
				strcpy(this->name, anonClassObject.name);
			}
			return *this;
		}

		char * name;
};

static void anonFunction1()
{
    AnonClass anonClassObject("AnonClass");
	anonClassObject = anonClassObject;
	printLine(anonClassObject.name);
}

void bF8bh()
{
    anonFunction1();
}

#endif

}


#ifdef INCLUDEMAIN

using namespace file_0502;

int main(int argc, char * argv[])
{
    srand( (unsigned)time(NULL) );
#ifndef OMITkqulb
    printLine("Calling V8pvu()...");
    so8rN();
    printLine("Finished nBuEE()");
#endif
    return 0;
}

#endif
