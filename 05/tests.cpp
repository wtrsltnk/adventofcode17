
#include "library.h"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <string>
#include <vector>

// passphrasesIsValid
TEST_CASE("passphrasesIsValid should work")
{
    REQUIRE(passphrasesIsValid(std::vector<std::string>({ "aa", "bb", "cc", "dd", "ee" })) == true);
    REQUIRE(passphrasesIsValid(std::vector<std::string>({ "aa", "bb", "cc", "dd", "aa" })) == false);
    REQUIRE(passphrasesIsValid(std::vector<std::string>({ "aa", "bb", "cc", "dd", "aaa" })) == true);
}

// passphrasesContainsAnagram
TEST_CASE("passphrasesContainsAnagram should work")
{
    auto a = std::vector<std::string>({ "abcde", "fghij" });
    REQUIRE(passphrasesContainsAnagram(a) == false);

    auto b = std::vector<std::string>({ "abcde", "xyz", "ecdab" });
    REQUIRE(passphrasesContainsAnagram(b) == true);
    
    auto c = std::vector<std::string>({ "a", "ab", "abc", "abd", "abf", "abj" });
    REQUIRE(passphrasesContainsAnagram(c) == false);

    auto d = std::vector<std::string>({ "iiii", "oiii", "ooii", "oooi", "oooo" });
    REQUIRE(passphrasesContainsAnagram(d) == false);
    
    auto e = std::vector<std::string>({ "oiii", "ioii", "iioi", "iiio" });
    REQUIRE(passphrasesContainsAnagram(e) == true);
}
