
#include <cppbuild.hpp>

int main(int argc, char* argv[])
{
    cppbuild::init(argc, argv);

    cppbuild::Target target("day-1-inverse-captcha");

    target.files({
                "program.cpp",
                "library.cpp",
            });

    cppbuild::Target tests("day-1-inverse-captcha-tests");

    tests.files({
                "tests.cpp",
                "library.cpp",
            });

    tests.includeDirs({
        "..\\tests",
    });

    return 0;
}