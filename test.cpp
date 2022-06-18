
#include "main.hpp"
#include "test/catch.hpp"

TEST_CASE("detect set of values  from  specified range within input array of integers")
{
    int sampleArray[]   = {2, 3, 3, 5, 4, 10, 11, 12};
    int startRangeValue = 3;
    int endRangeValue   = 5;
    REQUIRE(getNoOfRValuesInRange(sampleArray, startRangeValue, endRangeValue) == 4);
}
