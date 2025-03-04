// Copyright (c) 2025 Gustav I All rights reserved.
// Created by: Gustav I
// Created on: March 4, 2025
// This program asks the user for the diameter of the
// pizza. It calculates and displays the total cost
// of the pizza along with tax.

#include <iomanip>
#include <iostream>

// Constants
const double HST = 0.13;
const double LABOUR_COST = 2.00;
const double RENTAL_COST = 2.25;
const double INGRED_COST = 1.5;

int main() {
    // Input
    int diameter;
    std::cout << "Please enter the diameter of the pizza (inches): ";
    std::cin >> diameter;

    // Process
    double subtotal = LABOUR_COST + RENTAL_COST + (INGRED_COST * diameter);
    double tax = HST * subtotal;    // Tax cost
    double total = subtotal + tax;  // Total cost

    // Output
    std::cout << std::fixed << std::setprecision(2);
    // This is to format to 2 decimal places
    std::cout << "\nThe total cost is $" << total << std::endl;

    return 0;
}
