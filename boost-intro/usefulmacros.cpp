#include <vector>
#include <boost/foreach.hpp>
#include <iostream>
//#incldue <boost/static_assert.hpp>

#define MY_NUM 1300

void testforeach()
{
    std::vector<double> myVec(10);

    BOOST_FOREACH(double& x, myVec) x = 10.0;
    BOOST_FOREACH(double x, myVec) std::cout << x  << std::endl;
}

int main()
{
    testforeach();
}
