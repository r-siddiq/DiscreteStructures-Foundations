/*
Rahim Siddiq
CS 131 Discrete Structures
Apr 29 2023
Lab 8 - Week 11 - Recursive method
*/

// Pre-processor directives
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cctype>

// Function prototype
int digitCount(int);

using namespace std;

int main()
{
    // variables to store user input and track number of digits
    int num = 0, numDigits = 0;

    // Fuction of program output for user
    cout << endl << " ======== This program uses recursion to count how many digits are in a number ========" << endl;
    cout << " ======================================================================================" << endl << endl;

    // Prompt to enter a number
    cout << " Please enter a number, then press [Enter]: ";
    cin >> num;
    cout << endl;

    // Call the digitCount function and store its return value in the variable numDigits
    numDigits = digitCount(num);

    // Print results to console for user
    cout << " The integer " << num << " has " << numDigits << " digit(s)";

    cout << endl << endl;

    return 0;
}

//*******************************************************************************************************************************************
// digitCount function  																													*
// Recursivly calls itself to detmine how many digits are in a number																		*
//*******************************************************************************************************************************************
int digitCount(int n)
{
    // Serves as the base case for numbers 0-9
    if (n < 10)
    {
        return 1;
    }
    // Serves as recursive case
    else
    {
        return 1 + digitCount(n / 10);
    }
}