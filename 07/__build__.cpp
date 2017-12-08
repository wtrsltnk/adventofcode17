
#include <cppbuild.hpp>

int main(int argc, char* argv[])
{
    cppbuild::init(argc, argv);

    cppbuild::Target target("day7");

    target.files({
                "program.cpp",
                "library.cpp",
                "..\\utils\\utils.cpp",
            });

    target.includeDirs({
        "..\\utils",
    });

    cppbuild::Target tests("day7-tests");

    tests.files({
                "tests.cpp",
                "library.cpp",
            });

    tests.includeDirs({
        "..\\tests",
    });

    return 0;
}
