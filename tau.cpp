// Copyright (c) 2021 Mikayla Barthelette All rights reserved
//
// Created by: Mikayla Barthelette
// Created on: Sept 2021
// This program finds the circumference for a circle using tau

#include <iostream>
#include <cmath>

int main() {
    // this function calculates the circumference
    const double TAU = M_PI*2;
    int radius;
    double circumference;

    // input
    std::cout << std::endl;
    std::cout << "Enter the radius of the circle (mm): ";
    std::cin >> radius;

    // process
    circumference = TAU*radius;

    // output
    std::cout << std::endl;
    std::cout << "The circumference is: " << circumference
        << " mm." << std::endl;
}
