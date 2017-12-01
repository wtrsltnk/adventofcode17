
#include "library.h"

#define CATCH_CONFIG_FAST_COMPILE
#define CATCH_CONFIG_MAIN
#include <catch.hpp>

// totalSumOfMatchingNextDigit
TEST_CASE("totalSumOfMatchingNextDigit on 1122 should work", "[day1]")
{
    std::vector<int>({ 1, 1, 2, 2 });
    REQUIRE(totalSumOfMatchingNextDigit(std::vector<int>({ 1, 1, 2, 2 })) == 3);
}

TEST_CASE("totalSumOfMatchingNextDigit on 1111 should work", "[day1]")
{
    REQUIRE(totalSumOfMatchingNextDigit(std::vector<int>({ 1, 1, 1, 1 })) == 4);
}

TEST_CASE("totalSumOfMatchingNextDigit on 1234 should work", "[day1]")
{
    REQUIRE(totalSumOfMatchingNextDigit(std::vector<int>({ 1, 2, 3, 4 })) == 0);
}

TEST_CASE("totalSumOfMatchingNextDigit on 91212129 should work", "[day1]")
{
    REQUIRE(totalSumOfMatchingNextDigit(std::vector<int>({ 9, 1, 2, 1, 2, 1, 2, 9 })) == 9);
}

// totalSumOfMatchingHalfWayRoundDigit
TEST_CASE("totalSumOfMatchingHalfWayRoundDigit on 1212 should work", "[day1]")
{
    REQUIRE(totalSumOfMatchingHalfWayRoundDigit(std::vector<int>({ 1, 2, 1, 2 })) == 6);
}

TEST_CASE("totalSumOfMatchingHalfWayRoundDigit on 1221 should work", "[day1]")
{
    REQUIRE(totalSumOfMatchingHalfWayRoundDigit(std::vector<int>({ 1, 2, 2, 1 })) == 0);
}

TEST_CASE("totalSumOfMatchingHalfWayRoundDigit on 123425 should work", "[day1]")
{
    REQUIRE(totalSumOfMatchingHalfWayRoundDigit(std::vector<int>({ 1, 2, 3, 4, 2, 5 })) == 4);
}

TEST_CASE("totalSumOfMatchingHalfWayRoundDigit on 123123 should work", "[day1]")
{
    REQUIRE(totalSumOfMatchingHalfWayRoundDigit(std::vector<int>({ 1, 2, 3, 1, 2, 3 })) == 12);
}

TEST_CASE("totalSumOfMatchingHalfWayRoundDigit on 12131415 should work", "[day1]")
{
    REQUIRE(totalSumOfMatchingHalfWayRoundDigit(std::vector<int>({ 1, 2, 1, 3, 1, 4, 1, 5 })) == 4);
}
