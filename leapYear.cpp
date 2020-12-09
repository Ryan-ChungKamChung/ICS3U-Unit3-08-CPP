// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in December 2020
// Program figures out if an inputted year is a leap year

#include <iostream>
#include <string>


int main() {
    // Function figures out if an inputted year is a leap year

    std::string leapYearString;
    int leapYear;

    std::cout << "Give me a year number and I will tell you"
    "if it is a leap year" << std::endl;

    // Input
    std::cout << "Enter year: ";
    std::cin >> leapYearString;

    // Process
    try {
        leapYear = std::stoi(leapYearString);

        if (leapYear % 4 == 0) {
            if (leapYear % 100 != 0) {
            std::cout << "This is a leap year" << std::endl;
            } else {
                if (leapYear % 400 == 0) {
                    std::cout << "This is a leap year" << std::endl;
                } else {
                    std::cout << "This is not a leap year" << std::endl;
                }
            }
        } else {
            std::cout << "This is not a leap year" << std::endl;
        }
    } catch (std::invalid_argument) {
        // Output
        std::cout << "This isn't a valid year" << std::endl;
    }
}
