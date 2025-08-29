/*
Rahim Siddiq
CS 131 Discrete Structures
May 06 2023
Lab 9 - Week 12 - Permutations
*/

// Pre-processor directives
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cctype>

// Function prototype
int factorial(int);

using namespace std;

int main()
{
    // Program variables
    int n = 0, r = 0, n_fact = 0, nr_fact = 0, nPr = 0;

    // Describe the function of the program to the user
    cout << endl << " ====================================================================================================\n";
    cout << " === This program uses recursion to determine the number of r-permutations in a set of n-elements ===\n";
    cout << " ==== The number of permutations(nPr), represents the number of ways to choose elements in a set ====\n";
    cout << " ====================================================================================================\n" << endl;

    // Prompt to enter n elements and r permutations
    cout << " Please enter a number for (n)-number of elements in a set, then press [Enter]: ";
    cin >> n;
    cout << " Please enter a number for (r)-number of permutations, then press [Enter]: ";
    cin >> r;
    cout << endl << " ====================================================================================================\n" << endl;

    // Calculations for: n factorial, (n-r) factorial, and P(n,r)
    n_fact = factorial(n);
    nr_fact = factorial(n - r);
    nPr = n_fact / nr_fact; // P(n,r)

    // Print results to console for user
    cout << " The permutation(nPr) of " << n << " elements with " << r << " permutations is: " << nPr;
    cout << endl << endl;

    return 0;
}

//*******************************************************************************************************************************************
// factorial function  																													    *
// Recursive factorial function for int n																		                            *
//*******************************************************************************************************************************************
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}