#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <string>
#include <vector>

TEST_CASE ( "Remove Twos", "[odd]") {
  REQUIRE( RemoveTwos(2) == 1 );
  REQUIRE( RemoveTwos(1) == 1 );
  REQUIRE( RemoveTwos(10) == 5 );
  REQUIRE( RemoveTwos(40) == 5 );
  REQUIRE( RemoveTwos(37) == 37 );
}
