// Copyright (c) 2025 Jack Turcotte All rights reserved.
//
// Created by: Jack Turcotte
// Date: May 7th, 2025
// Calculator program in C++

#include <cmath>
#include <iostream>
#include <string>
#include <random>

int main() {
    // Initialize Grades
    int grades[10];
    float average = 0.0;
    // Initialize Random seed
    unsigned int seed = time(0);

    // Initialize Grades
    for (int index = 0; index < 10; index++) {
        //Create random number and put it in grades
        int random_number = (rand_r(&seed) % 100) + 1;
        grades[index] = random_number;
        std::cout << "Added " << grades[index] << " to grades!\n";
        //Add average
        average += float(grades[index]) / 10;
    }
    // Display average
    std::cout << "Your average is " << average << "!\n";
    return 0;
}
