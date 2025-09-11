#define CATCH_CONFIG_MAIN
#include <catch2/catch_all.hpp>

TEST_CASE("Test Case 1") {
    REQUIRE(1 + 1 == 2);
}

TEST_CASE("Test Case 2") {
    REQUIRE(2 * 2 == 4);
}

