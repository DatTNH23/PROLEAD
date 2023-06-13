#include <catch2/catch.hpp>
#include "Hardware/Operators.hpp"

TEST_CASE("Test equal operator of Hardware::ProbePositionStruct", "[operator==(const Hardware::ProbePositionStruct&, const Hardware::ProbePositionStruct&)]"){
    Hardware::ProbePositionStruct A, B;
    unsigned int Index, NumberOfTests = 5;

    SECTION("A.Probe == B.Probe, A.Cycle == B.Cycle"){
        for(Index = 0; Index < NumberOfTests; Index++){
            A = {Index,Index}, B = {Index,Index};
            REQUIRE((A == B) == true);
        }
    }

    SECTION("A.Probe != B.Probe, A.Cycle == B.Cycle"){
        for(Index = 0; Index < NumberOfTests; Index++){
            A = {Index,Index+1}, B = {Index,Index};
            REQUIRE((A == B) == false);
        }
    }    

    SECTION("A.Probe == B.Probe, A.Cycle != B.Cycle"){
        for(Index = 0; Index < NumberOfTests; Index++){
            A = {Index,Index}, B = {Index+1,Index};
            REQUIRE((A == B) == false);
        }
    } 

    SECTION("A.Probe != B.Probe, A.Cycle != B.Cycle"){
        for(Index = 0; Index < NumberOfTests; Index++){
            A = {Index,Index+1}, B = {Index+1,Index};
            REQUIRE((A == B) == false);
        }
    }          
}