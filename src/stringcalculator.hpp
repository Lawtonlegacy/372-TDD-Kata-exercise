#ifndef STRINGCALCULATOR_HPP
#define STRINGCALCULATOR_HPP
#include <string>               // std::string, std::stoi, std::getline
#include <sstream>              // std::istringstream
#include <algorithm>            // std::replace

int Add(std::string numbers){
    if(numbers.empty()) return 0; // return 0 on empty string.
    
    std::replace(numbers.begin(), numbers.end(), '\n', ','); // replaces newlines with commas
    std::istringstream ss(numbers);
   
    int sum = 0;
    std::string token;

    while(std::getline(ss, token, ',')){    
        sum+= std::stoi(token);    //std::stoi converts a string to an integer.
    }

    return sum;
}

#endif