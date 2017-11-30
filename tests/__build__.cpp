
#include <cppbuild.hpp>

int main(int argc, char* argv[])
{
    cppbuild::init(argc, argv);

    cppbuild::Target target("tests");

    target.files({
                "test-base.cpp",
            });

    return 0;
}