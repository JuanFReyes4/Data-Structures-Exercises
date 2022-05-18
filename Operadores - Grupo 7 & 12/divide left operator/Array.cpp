#include "Array.h"

using namespace std;

Array::Array(int x)
{    n=x;
}
		void Array::setN(int x)
        {
            n=x;
        }
       
        void Array::dispNum(void)
        {
            cout << "value of n is: " << n;
        }
        
        void Array::operator ! (void)
        {
            n=!n;
        }

