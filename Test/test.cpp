#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "Hardware/Operators.hpp"
#include "Hardware/Definitions.hpp"

// Example test case
TEST_CASE("Operators test", "operator")
{
    Hardware::ProbePositionStruct A, B;
    A.Probe = 1;
    A.Cycle = 2;
    B.Probe = 1;
    B.Cycle = 2;
    REQUIRE(A == B);
}

TEST_CASE("Addition test", "[math]")
{
    REQUIRE(2 + 2 == 4);
}
