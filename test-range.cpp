#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "rangeChecker.h"

TEST_CASE("Check the range and total number of readings lying in each range") {
  int chargingRange[] = {4,5};
  REQUIRE(getRangeAndReadings(chargingRange)=="4-5, 2");         
}
