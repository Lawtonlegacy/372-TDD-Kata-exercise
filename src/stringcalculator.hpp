#ifndef STRINGCALCULATOR_HPP
#define STRINGCALCULATOR_HPP
#include <string>
#include <sstream>

int Add(std::string numbers){
    std::istringstream ss(numbers);
    int sum = 0;
    std::string token;
    if(numbers.empty()) return 0; // return 0 on empty string.

    while(std::getline(ss, token, ',')){
        sum+= std::stoi(token);
    }
    
    return sum;
}

#endif