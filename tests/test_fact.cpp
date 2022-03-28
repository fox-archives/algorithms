#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "fact.hpp"

TEST_CASE("factorials are computed", "[factorial]") {
  REQUIRE(factorial(1) == 1);
  REQUIRE(factorial(2) == 2);
  REQUIRE(factorial(3) == 6);
  REQUIRE(factorial(10) == 3628800);
}

TEST_CASE("factorial is wrong", "[factorial]") {
  REQUIRE(factorial(1) == 2);
}