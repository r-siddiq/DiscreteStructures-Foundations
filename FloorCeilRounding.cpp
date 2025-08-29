/*
Rahim Siddiq
CS 131 Discrete Structures
Mar 13 2023
Lab 5 - Floor / Ceiling
*/

// Pre-processor directives
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    // Array's for 2 sets of 4 elements
    const int SIZE = 4;
    double numSet[SIZE] = { 0 };
    double floorNum = 0, ceilNum = 0;

    // Fuction of program messages for user
    cout << endl << " ====== This program displays the floor and ceiling of real numbers ======" << endl;
    cout << " =========================================================================" << endl << endl;

    // User input for loops to add elements to set
    cout << " *Please enter 4 real numbers of your choice*" << endl << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << " Enter number " << i + 1 << ", then press [Enter]: ";
        cin >> numSet[i];
    }
    cout << endl << " -------------------------------------------------------------------------" << endl;

    // Output floor values to user
    cout << endl << " The Floor of the numbers entered is: ";
    for (int i = 0; i < SIZE; i++)
    {
        floorNum = floor(numSet[i]);
        if (i < 3)
        {
            cout << floorNum << ", ";
        }
        else
        {
            cout << floorNum << endl;
        }

    }

    // Output Ceiling values to user
    cout << endl << " The Ceiling of the numbers entered is: ";
    for (int i = 0; i < SIZE; i++)
    {
        ceilNum = ceil(numSet[i]);
        if (i < 3)
        {
            cout << ceilNum << ", ";
        }
        else
        {
            cout << ceilNum << endl;
        }

    }
    cout << endl << " =========================================================================" << endl << endl;

    return 0;
}