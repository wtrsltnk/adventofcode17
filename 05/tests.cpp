
#include "library.h"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <vector>

// countStepsFromInstructions
TEST_CASE("countStepsFromInstructions should work")
{
    auto v = std::vector<int>({ 0, 3, 0, 1, -3 });
    REQUIRE(countStepsFromInstructions(v) == 5);
}

// countStepsFromInstructionsPartTwo
TEST_CASE("countStepsFromInstructionsPartTwo should work")
{
    auto v = std::vector<int>({ 0, 3, 0, 1, -3 });
    REQUIRE(countStepsFromInstructionsPartTwo(v) == 10);
}
