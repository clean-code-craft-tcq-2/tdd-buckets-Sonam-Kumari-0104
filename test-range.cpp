#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "rangeChecker.h"
#include <string.h>

TEST_CASE("Check the range and total number of readings lying in each range") {
  int chargingRange[] = {4,5};
  REQUIRE(strcmp((getRangeAndReadings(chargingRange)),"4-5, 2"));  
  
  int chargingRange[] = {11,10,12};
  REQUIRE(strcmp((getRangeAndReadings(chargingRange)),"10-12, 3")); 
}
