
#include "library.h"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <vector>

// lineToProgram
TEST_CASE("lineToProgram should work")
{
    Program program;

    lineToProgram("pbga (66)", program);

    REQUIRE(program.name == "pbga");
    REQUIRE(program.weight == 66);
    REQUIRE(program.programNamesAbove.size() == 0);

    lineToProgram("fwft (72) -> ktlj, cntj, xhth", program);

    REQUIRE(program.name == "fwft");
    REQUIRE(program.weight == 72);
    REQUIRE(program.programNamesAbove.size() == 3);
    REQUIRE(program.programNamesAbove[0] == "ktlj");
    REQUIRE(program.programNamesAbove[1] == "cntj");
    REQUIRE(program.programNamesAbove[2] == "xhth");
}

// linesToPrograms
TEST_CASE("linesToPrograms should work")
{
    auto v = std::vector<std::string>({
        "pbga (66)",
        "xhth (57)",
        "ebii (61)",
        "havc (66)",
        "ktlj (57)",
        "fwft (72) -> ktlj, cntj, xhth",
        "qoyq (66)",
        "padx (45) -> pbga, havc, qoyq",
        "tknk (41) -> ugml, padx, fwft",
        "jptl (61)",
        "ugml (68) -> gyxo, ebii, jptl",
        "gyxo (61)",
        "cntj (57)"
    });

    REQUIRE(linesToPrograms(v).size() == 13);
}
