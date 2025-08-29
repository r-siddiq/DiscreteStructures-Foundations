/*
Rahim Siddiq
CS 131 Discrete Structures
Mar 20 2023
Lab 6 - Boolean Functions
*/

// Pre-processor directives
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    // Boolean variables for x,y,z / string input variable's for user input / bool variable for valid input
    bool x, y, z, result;
    string xStr, yStr, zStr, resultStr;
    bool validInput = false;

    // Fuction of program messages for user
    cout << endl << " =========== This program produces the result of the function: ===========" << endl;
    cout << " ============ f(x,y,z) = !(xyz) + !(xy)z + !(x)y!(z) + x!(yz) ============" << endl;
    cout << " =========================================================================" << endl << endl;

    // User input for variables x,y,z
    // Loop to get valid input for x
    while (!validInput)
    {
        cout << " Enter a boolean value for x (true/false), then press [Enter]: ";
        cin >> xStr;
        // Convert input string to lowercase
        for (auto& c : xStr) c = static_cast<char>(tolower(static_cast<unsigned char>(c)));
        // Check if input string is valid
        if (xStr == "true" || xStr == "false")
        {
            validInput = true;
        }
        else
        {
            cout << " Invalid input. Please enter 'true' or 'false'." << endl;
        }
    }
    validInput = false;
    // Loop to get valid input for y
    while (!validInput)
    {
        cout << " Enter a boolean value for y (true/false), then press [Enter]: ";
        cin >> yStr;
        // Convert input string to lowercase
        for (auto& c : yStr) c = static_cast<char>(tolower(static_cast<unsigned char>(c)));
        // Check if input string is valid
        if (yStr == "true" || yStr == "false")
        {
            validInput = true;
        }
        else
        {
            cout << " Invalid input. Please enter 'true' or 'false'." << endl;
        }
    }
    validInput = false;
    // Loop to get valid input for z
    while (!validInput)
    {
        cout << " Enter a boolean value for z (true/false), then press [Enter]: ";
        cin >> zStr;
        // Convert input string to lowercase
        for (auto& c : zStr) c = static_cast<char>(tolower(static_cast<unsigned char>(c)));
        // Check if input string is valid
        if (zStr == "true" || zStr == "false")
        {
            validInput = true;
        }
        else
        {
            cout << " Invalid input. Please enter 'true' or 'false'." << endl;
        }
    }
    cout << endl << " -------------------------------------------------------------------------" << endl << endl;

    // Convert strings to boolean values
    x = (xStr == "true");
    y = (yStr == "true");
    z = (zStr == "true");

    // Assign function to variable result and ouput results to user
    result = (!x && !y && !z) || (!x && !y && z) || (!x && y && !z) || (x && !y && !z);
    resultStr = (result ? "true" : "false");
    cout << " The result is " << resultStr << " when x is " << xStr << ", y is " << yStr << ", and z is " << zStr << endl;
    
    cout << endl << " =========================================================================" << endl << endl;

    return 0;
}