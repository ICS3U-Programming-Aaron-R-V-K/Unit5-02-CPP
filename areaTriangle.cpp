// Copyright (2025) Aaron Rivelino All rights reserved.
// Date: May 7, 2025
// The program has a function that calculates the area of a triangle
// It will accept 2 parameters, base and height

#include <iomanip>
#include <iostream>
#include <string>

// Function to calculate area of a triangle with two parameters
void CalcArea(float base, float height) {
    // Set ara to be a float
    // Calculate the area of the triangle
    float area = 0.5 * base * height;

    // Display the area in two sig digs
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nThe area of the triangle is " << area << " cm²\n"
              << std::endl;
}

// main function
int main() {
    // Set the user input base and height as a string
    std::string baseStr, heightStr;
    // set base, height as a float
    float base, height;

    // Get user input as strings
    std::cout << "Enter the base of the triangle (cm): ";
    std::getline(std::cin, baseStr);

    std::cout << "Enter the height of the triangle (cm): ";
    std::getline(std::cin, heightStr);

    // Try to typecast string to floats
    try {
        // Typecast user input as float
        base = std::stof(baseStr);
        height = std::stof(heightStr);

        // Validate that user input is a positive num
        if (base <= 0 || height <= 0) {
            std::cout << "\nError: Base and height must be positive numbers.\n"
                      << std::endl;

            // Else if it is a positive num, call the function
        } else {
            CalcArea(base, height);
        }

        // Catch for any invalid input
    } catch (...) {
        std::cout << "\nInvalid input. Please enter a whole number.\n"
                  << std::endl;
    }

    return 0;
}
