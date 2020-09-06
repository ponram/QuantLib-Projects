#include "testClassA.h"
#include <boost/shared_ptr.hpp>

void testSharedPtra()
{
    A* ptrA = new A(9.0);
    delete ptrA;
}

void testSharedPtrb()
{
   A* ptrA = new A(1.0);
   throw "Error occured for class A";
   delete ptrA;
}

void testSharedPtrc()
{
    boost::shared_ptr<A> ptrA(new A(9.9));
}
    
int main()
{
		testSharedPtra();
		testSharedPtrb();
		testSharedPtrc();
}
