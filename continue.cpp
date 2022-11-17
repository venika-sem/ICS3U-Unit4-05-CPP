// Copyright (c) 2022 Venika Sem All rights reserved
//
// Created by: Venika Sem
// Created on: May 2021
// This program add positive numbers

#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    // This function add positive numbers
    int numberToAdd;
    int counter;
    float number;
    float result;
    result = 0;

    try {
        std::cout << "How many numbers you want to add: ";
        std::cin >> numberToAdd;

        std::cout << std::endl;
        for (counter = 0; counter < numberToAdd; counter++) {
            std::cout << "Enter a number to add: ";
            std::cin >> number;

            if (number < 0) {
                continue;
            }
            result = result + number;
        }
        std::cout << "\nThe sum of positive numbers is " << result << "."
                  << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "\nThis input is invalid, please, insert a number."
                  << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
