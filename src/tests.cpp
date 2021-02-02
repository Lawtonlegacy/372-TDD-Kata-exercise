#include "catch.hpp"
#include "stringcalculator.hpp"


TEST_CASE( "Empty string returns 0"){
    REQUIRE( Add("") == 0 );
}

TEST_CASE("Single number returns the value"){
    REQUIRE( Add("5") == 5 );
    REQUIRE( Add("20") == 20 );
    REQUIRE( Add("300") == 300 );
}

TEST_CASE("Two numbers, comma delimted, returns the sum"){
    REQUIRE( Add("1,1") == 2);
    REQUIRE( Add("5 , 12") == 17);
    REQUIRE( Add("1000 , 534") == 1534);
}