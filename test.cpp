
#include "main.hpp"
#include "test/catch.hpp"

TEST_CASE("detect set of values  from  specified range within input array of integers")
{
    int sampleArray[]   = {2, 3, 3, 5, 4, 10, 11, 12};
    int startRangeValue = 3;
    int endRangeValue   = 5;
    REQUIRE(getNoOfRValuesInRange(sampleArray, startRangeValue, endRangeValue) == 4);
    
    int sampleArray[]   = {};
    int startRangeValue = 0;
    int endRangeValue   = 0;
    REQUIRE(getNoOfRValuesInRange(sampleArray, startRangeValue, endRangeValue) == 0);
    
    int sampleArray[]   = {1};
    int startRangeValue = 0;
    int endRangeValue   = 0;
    REQUIRE(getNoOfRValuesInRange(sampleArray, startRangeValue, endRangeValue) == 0);
    
    int sampleArray[]   = {1,3,5};
    int startRangeValue = 0;
    int endRangeValue   = 0;
    REQUIRE(getNoOfRValuesInRange(sampleArray, startRangeValue, endRangeValue) == 0);
}
