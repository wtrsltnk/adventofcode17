
#include <cppbuild.hpp>

int main(int argc, char* argv[])
{
    cppbuild::init(argc, argv);

    cppbuild::Target target("day-2-corruption-checksum");

    target.files({
                "program.cpp",
                "library.cpp",
            });

    cppbuild::Target tests("day-2-corruption-checksum-tests");

    tests.files({
                "tests.cpp",
                "library.cpp",
            });

    tests.includeDirs({
        "..\\tests",
    });

    return 0;
}