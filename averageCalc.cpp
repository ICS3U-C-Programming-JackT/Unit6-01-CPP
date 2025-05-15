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
    int grades[10];
    srand((unsigned)time(NULL));
    for (int index = 0; index <= 10; index++) {
        unsigned int seed = time(0);  // Initialize seed with current time
        int random_number = (rand_r(&seed) % 100) + 1;
        grades[index] = random_number;
        std::cout << "Added " << grades[index] << " to grades!\n";
    }
    float average;
    for (int i = 0; i <= 10; i++) {
        int grd = grades[i];
        average += grd / 10;
    }
    std::cout << "Your average is " << average << "!";
    return average;
}
