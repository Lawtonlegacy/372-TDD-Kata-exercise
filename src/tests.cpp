#include "catch.hpp"
#include "stringcalculator.hpp"
#include <string>

int Add(std::string numbers){
    int number;
    if(numbers.empty()) return 0;
    number = std::stoi(numbers);
    return number;
}

TEST_CASE( "Empty string returns 0"){
    REQUIRE( Add("") == 0 );
}

TEST_CASE("Single number returns the value"){
    
    std::string test = "5";
    REQUIRE( Add(test) == 5 );
    REQUIRE( Add("6") == 6 );
}

TEST_CASE("Two numbers, comma delimted, returns the sum"){
    std::string test = "1 + 1";
    REQUIRE( Add(test) == 2);
    REQUIRE( Add("1 + 1") == 2);
}