#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"

TEST_CASE("Runs properly", "[list]") {
  REQUIRE(2 == 3);
}