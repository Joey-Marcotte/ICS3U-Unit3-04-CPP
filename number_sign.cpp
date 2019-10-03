// Copyright (c) 2019 Joey Marcotte All rights reserved.
//
// Created by: Joey Marcotte
// Created on: October 2019
// This program shows if a number is positive or negative
// with user input

#include <iostream>

int main() {
    int randomNumber;
    // input
    std::cout << "Pick a number: ";
    std::cin >> randomNumber;


    if (randomNumber > 0) {
        std::cout << "the number is +";
    } else if (randomNumber < 0) {
        std::cout << "the number is -";
    } else {
        (randomNumber = 0);
        std::cout << "the number is 0";
        }
}
