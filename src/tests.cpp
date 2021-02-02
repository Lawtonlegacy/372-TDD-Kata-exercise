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

TEST_CASE("Two numbers, comma delimited, returns the sum"){
    REQUIRE( Add("1,1") == 2);
    REQUIRE( Add("5 , 12") == 17);
    REQUIRE( Add("1000 , 534") == 1534);
}

TEST_CASE("Two numbers, newline delimited, returns the sum"){
    REQUIRE( Add("2\n2") == 4);
    REQUIRE( Add ("10\n30") == 40);
    REQUIRE( Add("1000\n345") == 1345);
}

TEST_CASE("Three numbers, delimited either way, returns the sum"){
    REQUIRE( Add("1,2,3") == 6);
    REQUIRE( Add("10\n20\n30") == 60);
    REQUIRE( Add("15\n400, 5") == 420);
    REQUIRE( Add("5,40\n1145") == 1190);
}