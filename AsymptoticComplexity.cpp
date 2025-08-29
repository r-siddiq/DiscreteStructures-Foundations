/*
Rahim Siddiq
CS 131 Discrete Structures
Apr 15 2023
Lab 7 - Week 9 - Asymptotic notation
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
    int i, j;
    double n;

    // Fuction of program output for user
    cout << endl << " ======== This program displays the concept of asymptotic growth ========" << endl;
    cout << " ========================================================================" << endl << endl;

    // Prompt to enter number of items:
    cout << " Enter number of items to consider (n), then press [Enter]: ";
    cin >> n;
    cout << endl;

    // O(n)
    cout << " O(n) = ";
    for (i = 1; i <= n; i++)
    {
        cout << i << ", "; // print i values for O(n)
    }
    cout << endl << endl;

    // O(log_n)
    cout << " O(log(n)) = ";
    for (i = 1; i <= n; i++)
    {
        cout << log2(i) << ", "; // print log values for O(log_n)
    }
    cout << endl << endl;

    // O(n^2)
    cout << " O(n^2) = ";
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << i << " and " << j << ", "; // print pairs of i and j values for O(n^2)
        }
    }
    cout << endl << endl;

    return 0;
}