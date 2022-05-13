// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: Apr 2022
// This program says every possible RGB value

#include <iostream>
#include <string>

void fahrenheit() {
    std::string numberAsString;
    float celcius;
    float fahrenheit;

    // input
    std::cout << "Enter a temperature (°C):";
    std::cin >> numberAsString;

    // process
    try {
        celcius = std::stof(numberAsString);
        fahrenheit = celcius * 9 / 5 + 32;
        std::cout << celcius << "°C is equal to " << fahrenheit
        << "°F." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << numberAsString << " is not valid input." << std::endl;
    }
}
main() {
    // this function just calls other functions

    // call other functions
    fahrenheit();
}
