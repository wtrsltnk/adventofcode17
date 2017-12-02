
#include "library.h"

#define CATCH_CONFIG_FAST_COMPILE
#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <sstream>

// readAsVectorOfVectorOfInt
TEST_CASE("readAsVectorOfVectorOfInt should work", "[day2]")
{
    std::stringstream input("5 1 9 5\n7 5 3\n2 4 6 8");
    auto result = readAsVectorOfVectorOfInt(input);
    REQUIRE(result.size() == 3);
    REQUIRE(result[0].size() == 4);
    REQUIRE(result[1].size() == 3);
    REQUIRE(result[2].size() == 4);
}

// differenceBetweenMinMaxPerRow
TEST_CASE("differenceBetweenMinMaxPerRow on [5 1 9 5] should work", "[day2]")
{
    REQUIRE(differenceBetweenMinMaxPerRow(std::vector<int>({5, 1, 9, 5})) == 8);
}

TEST_CASE("differenceBetweenMinMaxPerRow on [7 5 3] should work", "[day2]")
{
    REQUIRE(differenceBetweenMinMaxPerRow(std::vector<int>({7, 5, 3})) == 4);
}

TEST_CASE("differenceBetweenMinMaxPerRow on [2 4 6 8] should work", "[day2]")
{
    REQUIRE(differenceBetweenMinMaxPerRow(std::vector<int>({2, 4, 6, 8})) == 6);
}

// totalEvenlyDivisibleValuesPerRow
TEST_CASE("totalEvenlyDivisibleValuesPerRow on [5 9 2 8] should work", "[day2]")
{
    REQUIRE(totalEvenlyDivisibleValuesPerRow(std::vector<int>({5, 9, 2, 8})) == 4);
}

TEST_CASE("totalEvenlyDivisibleValuesPerRow on [9 4 7 3] should work", "[day2]")
{
    REQUIRE(totalEvenlyDivisibleValuesPerRow(std::vector<int>({9, 4, 7, 3})) == 3);
}

TEST_CASE("totalEvenlyDivisibleValuesPerRow on [3 8 6 5] should work", "[day2]")
{
    REQUIRE(totalEvenlyDivisibleValuesPerRow(std::vector<int>({3, 8, 6, 5})) == 2);
}
