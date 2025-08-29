/*
Rahim Siddiq
CS 131 Discrete Structures
May 20 2023
Lab 10 - Week 13 - Probabilities
*/

// Pre-processor directives
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cctype>
#include <cstdlib>

// Function prototype
int random(int, int);

using namespace std;

int main()
{
    // Program variables for lower and upper bound, 3 random numbers, probability of any single outcome and of 3 being the same
    int lowRange = 0, highRange = 0;
    double randNum1 = 0, randNum2 = 0, randNum3 = 0, probability_1 = 0, probability_3 = 0;

    // Describe the function of the program to the user
    cout << endl << " ====================================================================================================\n";
    cout << " ======= This program generates 3 random numbers within a specified range, and calculates the =======\n";
    cout << " ====================== probability of the 3 generated numbers being the same =======================\n";
    cout << " ====================================================================================================\n" << endl;

    // Prompt user to enter lower and upper bounds for desired range
    cout << " Please enter a value for the lower bound of the random number range, then press [Enter]: ";
    cin >> lowRange;
    cout << " Please enter a value for the upper bound of the random number range, then press [Enter]: ";
    cin >> highRange;
    cout << endl << " ====================================================================================================\n" << endl;

    // Generate random numbers
    randNum1 = random(lowRange, highRange);
    randNum2 = random(lowRange, highRange);
    randNum3 = random(lowRange, highRange);

    // Calculate probability of single outcome and 3 numbers being the same within user selected range (ints promoted via type-coersion)
    probability_1 = highRange - lowRange + 1;
    probability_3 = 1.0 / pow(probability_1, 3);

    // Print results to console for user
    cout << "The 3 random values within your range: " << randNum1 << ", " << randNum2 << ", " << randNum3 << "\n";
    cout << "The probability of getting three of the same number is: " << setprecision(7) << probability_3 << "\n";
    cout << endl << endl;

    return 0;
}

//*******************************************************************************************************************************************
// random function  																													    *
// recieves ints lowRange and highRange from main and returns an int for randomNum                                                          *
//*******************************************************************************************************************************************
int random(int low, int high)
{
    int randomNum = rand() % (high - low + 1) + low;
    return randomNum;
}