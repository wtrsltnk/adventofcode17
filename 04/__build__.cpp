
#include <cppbuild.hpp>

int main(int argc, char* argv[])
{
    cppbuild::init(argc, argv);

    cppbuild::Target target("day4");

    target.files({
                "program.cpp",
                "library.cpp",
            });

    cppbuild::Target tests("day4-tests");

    tests.files({
                "tests.cpp",
                "library.cpp",
            });

    tests.includeDirs({
        "..\\tests",
    });

    return 0;
}
