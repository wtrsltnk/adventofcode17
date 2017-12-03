
#include "library.h"

#define CATCH_CONFIG_FAST_COMPILE
#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include <sstream>

// is_number
TEST_CASE("is_number should work", "[day3]")
{
    REQUIRE(is_positive_number("3") == true);
    REQUIRE(is_positive_number("2343") == true);
    REQUIRE(is_positive_number("-5") == false);
    REQUIRE(is_positive_number("!7454") == false);
}

// manhattanDistance
TEST_CASE("manhattanDistance should work", "[day3]")
{
    REQUIRE(manhattanDistance(point({ 1, 4 })) == 5);
    REQUIRE(manhattanDistance(point({ 0, 0 })) == 0);
    REQUIRE(manhattanDistance(point({ 2, -1 })) == 3);
    REQUIRE(manhattanDistance(point({ 0, 2 })) == 2);
}

// gridLocationOfIndex
TEST_CASE("gridLocationOfIndex 1 should work", "[day3]")
{
    auto r = gridLocationOfIndex(1);
    REQUIRE(r.x == 0);
    REQUIRE(r.y == 0);
}

TEST_CASE("gridLocationOfIndex 2 should work", "[day3]")
{
    auto r = gridLocationOfIndex(2);
    REQUIRE(r.x == 1);
    REQUIRE(r.y == 0);
}

TEST_CASE("gridLocationOfIndex 3 should work", "[day3]")
{
    auto r = gridLocationOfIndex(3);
    REQUIRE(r.x == 1);
    REQUIRE(r.y == -1);
}

TEST_CASE("gridLocationOfIndex 4 should work", "[day3]")
{
    auto r = gridLocationOfIndex(4);
    REQUIRE(r.x == 0);
    REQUIRE(r.y == -1);
}

TEST_CASE("gridLocationOfIndex 5 should work", "[day3]")
{
    auto r = gridLocationOfIndex(5);
    REQUIRE(r.x == -1);
    REQUIRE(r.y == -1);
}

TEST_CASE("gridLocationOfIndex 6 should work", "[day3]")
{
    auto r = gridLocationOfIndex(6);
    REQUIRE(r.x == -1);
    REQUIRE(r.y == 0);
}

TEST_CASE("gridLocationOfIndex 7 should work", "[day3]")
{
    auto r = gridLocationOfIndex(7);
    REQUIRE(r.x == -1);
    REQUIRE(r.y == 1);
}

TEST_CASE("gridLocationOfIndex 8 should work", "[day3]")
{
    auto r = gridLocationOfIndex(8);
    REQUIRE(r.x == 0);
    REQUIRE(r.y == 1);
}

TEST_CASE("gridLocationOfIndex 9 should work", "[day3]")
{
    auto r = gridLocationOfIndex(9);
    REQUIRE(r.x == 1);
    REQUIRE(r.y == 1);
}

TEST_CASE("gridLocationOfIndex 10 should work", "[day3]")
{
    auto r = gridLocationOfIndex(10);
    REQUIRE(r.x == 2);
    REQUIRE(r.y == 1);
}