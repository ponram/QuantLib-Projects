#include "testclassA.h"
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

void testSharedPtrd()
{
  A* ptrA = new A(9.999);
  boost::shared_ptr<A> bPtrA(ptrA);
  std::cout << bPtrA->getValue() << std::endl;
}

void testSharedPtre()
{
  boost::shared_ptr<A> ptr(new A(8.1));
  throw "error occured ";
}

void testSharedPtrf()
{
  A* ptrA = new A(1.0);
  ptrA = new A(2.0);
  delete ptrA;
}

void testSharedPtrg()
{
  boost::shared_ptr<A> bptr_myA(new A(1.0));
  bptr_myA.reset(new A(2.0));
}
    
int main()
{
	//	testSharedPtra();
	//	//testSharedPtrb();
	//	testSharedPtrc();
  //  testSharedPtrd();
  //  testSharedPtre();
  // testSharedPtrf();
  testSharedPtrg();
}
