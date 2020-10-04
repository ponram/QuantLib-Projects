#include "ql/quantlib.hpp"

using namespace QuantLib;

void testingMacros1()
{
  double x=0.0;
  QL_REQUIRE(x!=0, "Zero number");
}
