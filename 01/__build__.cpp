
#include <cppbuild.hpp>

int main(int argc, char* argv[])
{
    cppbuild::init(argc, argv);

    cppbuild::Target target("day1");

    target.files({
                "program.cpp",
                "library.cpp",
            });

    cppbuild::Target tests("day1-tests");

    tests.files({
                "tests.cpp",
                "library.cpp",
            });

    tests.includeDirs({
        "..\\tests",
    });

    return 0;
}