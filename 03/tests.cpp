
#include "library.h"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <sstream>

// is_number
TEST_CASE("is_number should work")
{
    REQUIRE(is_positive_number("3") == true);
    REQUIRE(is_positive_number("2343") == true);
    REQUIRE(is_positive_number("-5") == false);
    REQUIRE(is_positive_number("!7454") == false);
}

// manhattanDistance
TEST_CASE("manhattanDistance should work")
{
    REQUIRE(manhattanDistance(point({ 1, 4 })) == 5);
    REQUIRE(manhattanDistance(point({ 0, 0 })) == 0);
    REQUIRE(manhattanDistance(point({ 2, -1 })) == 3);
    REQUIRE(manhattanDistance(point({ 0, 2 })) == 2);
}

// gridLocationOfIndex
TEST_CASE("gridLocationOfIndex 1 should work")
{
    auto r = gridLocationOfIndex(1);
    REQUIRE(r.x == 0);
    REQUIRE(r.y == 0);

    r = gridLocationOfIndex(2);
    REQUIRE(r.x == 1);
    REQUIRE(r.y == 0);

    r = gridLocationOfIndex(3);
    REQUIRE(r.x == 1);
    REQUIRE(r.y == 1);

    r = gridLocationOfIndex(4);
    REQUIRE(r.x == 0);
    REQUIRE(r.y == 1);

    r = gridLocationOfIndex(5);
    REQUIRE(r.x == -1);
    REQUIRE(r.y == 1);

    r = gridLocationOfIndex(6);
    REQUIRE(r.x == -1);
    REQUIRE(r.y == 0);

    r = gridLocationOfIndex(7);
    REQUIRE(r.x == -1);
    REQUIRE(r.y == -1);

    r = gridLocationOfIndex(8);
    REQUIRE(r.x == 0);
    REQUIRE(r.y == -1);

    r = gridLocationOfIndex(9);
    REQUIRE(r.x == 1);
    REQUIRE(r.y == -1);

    r = gridLocationOfIndex(10);
    REQUIRE(r.x == 2);
    REQUIRE(r.y == -1);

    r = gridLocationOfIndex(23);
    REQUIRE(r.x == 0);
    REQUIRE(r.y == -2);
}

// manhattanDistance of gridLocationOfIndex  
TEST_CASE("manhattanDistance of gridLocationOfIndex 1024 should work")
{
    auto r = gridLocationOfIndex(1024);
    auto m = manhattanDistance(r);
    REQUIRE(m == 31);
}

// squareValue
TEST_CASE("squareValue should work")
{
    std::map<point, int> squares;
    squares.insert(std::make_pair(point({ 1, 3 }), 23));
    squares.insert(std::make_pair(point({ 1, 4 }), 48));

    REQUIRE(squares.size() == 2);
    REQUIRE(squareValue(squares, point({ 1, 3 })) == 23);
    REQUIRE(squareValue(squares, point({ 1, 4 })) == 48);
    REQUIRE(squareValue(squares, point({ 2, 4 })) == 0);
}

// adjacentSquaresSum
TEST_CASE("adjacentSquaresSum should work")
{
    std::map<point, int> squares;
    squares.insert(std::make_pair(point({ 1, 3 }), 23));
    squares.insert(std::make_pair(point({ 1, 4 }), 48));

    REQUIRE(adjacentSquaresSum(squares, point({ 0, 0 })) == 0);
    REQUIRE(adjacentSquaresSum(squares, point({ 1, 2 })) == 23);
    REQUIRE(adjacentSquaresSum(squares, point({ 0, 3 })) == (23 + 48));
}

// adjacentSquaresSumOfIndex
TEST_CASE("adjacentSquaresSumOfIndex should work")
{
    REQUIRE(adjacentSquaresSumOfIndex(1) == 1);
    REQUIRE(adjacentSquaresSumOfIndex(2) == 1);
    REQUIRE(adjacentSquaresSumOfIndex(3) == 2);
    REQUIRE(adjacentSquaresSumOfIndex(4) == 4);
    REQUIRE(adjacentSquaresSumOfIndex(5) == 5);
    REQUIRE(adjacentSquaresSumOfIndex(6) == 10);
    REQUIRE(adjacentSquaresSumOfIndex(7) == 11);
    REQUIRE(adjacentSquaresSumOfIndex(8) == 23);
    REQUIRE(adjacentSquaresSumOfIndex(9) == 25);
    REQUIRE(adjacentSquaresSumOfIndex(10) == 26);
    REQUIRE(adjacentSquaresSumOfIndex(11) == 54);
    REQUIRE(adjacentSquaresSumOfIndex(12) == 57);
    REQUIRE(adjacentSquaresSumOfIndex(13) == 59);
    REQUIRE(adjacentSquaresSumOfIndex(14) == 122);
    REQUIRE(adjacentSquaresSumOfIndex(15) == 133);
    REQUIRE(adjacentSquaresSumOfIndex(16) == 142);
    REQUIRE(adjacentSquaresSumOfIndex(17) == 147);
    REQUIRE(adjacentSquaresSumOfIndex(18) == 304);
    REQUIRE(adjacentSquaresSumOfIndex(19) == 330);
    REQUIRE(adjacentSquaresSumOfIndex(20) == 351);
    REQUIRE(adjacentSquaresSumOfIndex(21) == 362);
    REQUIRE(adjacentSquaresSumOfIndex(22) == 747);
    REQUIRE(adjacentSquaresSumOfIndex(23) == 806);
}
