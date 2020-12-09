// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in December 2020
// Program figures out if an inputted year is a leap year

#include <iostream>
#include <string>


int main() {
    // Function figures out if an inputted year is a leap year

    std::string leap_year_string;
    int leap_year;

    std::cout << "Give me a year number and I will tell you"
    "if it is a leap year" << std::endl;

    // Input
    std::cout << "Enter year: ";
    std::cin >> leap_year_string;

    // Process
    try {
        leap_year = std::stoi(leap_year_string);

        if (leap_year % 4 == 0) {
            if (leap_year % 100 != 0) {
            std::cout << "This is a leap year" << std::endl;
            } else {
                if (leap_year % 400 == 0) {
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
