// Copyright (c) 2019 Joseph Palermo All rights reserved
//
// Created by: Joseph Palermo
// Created on: October 2019
// This program tells the user if an integer is positive or negative

#include <iostream>


int main() {
    // This program asks the user to guess a number

    // variables
    int userInput;

    // input
    std::cout << "Write an integer: " << std::endl;
    std::cin >> userInput;
    std::cout << "" << std::endl;

    // process
    if (userInput == 0) {
        std::cout << "It equals zero!" << std::endl;
    } else if (userInput > 0) {
        std::cout << "It is positive!" << std::endl;
    } else if (userInput < 0) {
        std::cout << "It is negative" << std::endl;
    }
}
