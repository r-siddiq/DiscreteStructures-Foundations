/*
Rahim Siddiq
CS 131 Discrete Structures
Mar 06 2023
Lab 4 - Sets - Intersection & Union
*/

// Pre-processor directives
#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    // Array's for 2 sets of 4 elements
    const int SIZE = 4;
    int numSet1[SIZE] = { 0 }, numSet2[SIZE] = { 0 };

    // Fuction of program messages for user
    cout << endl << " ====== This program finds the union and intersection of 2 sets ======" << endl;
    cout << " =====================================================================" << endl << endl;

    // User input for loops to add elements to set
    cout << " *Please enter 4 integer values for each set*" << endl << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << " Enter integer " << i + 1 << " for the first set, then press [Enter]: ";
        cin >> numSet1[i];
    }

    cout << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << " Enter integer " << i + 1 << " for the second set, then press [Enter]: ";
        cin >> numSet2[i];
    }
    
    cout << endl << " ---------------------------------------------------------------------" << endl;

    // Sort the arrays before set operations
    sort(numSet1, numSet1 + SIZE);
    sort(numSet2, numSet2 + SIZE);

    // Find the union of the two sets
    vector <int> unionSet;
    set_union(numSet1, numSet1 + SIZE, numSet2, numSet2 + SIZE, back_inserter(unionSet));

    // Find the intersection of the two sets
    vector <int> intersectSet;
    set_intersection(numSet1, numSet1 + SIZE, numSet2, numSet2 + SIZE, back_inserter(intersectSet));

    // Output set values to user
    cout << endl << " Set1 = [";
    for (int i = 0; i < SIZE; i++)
    {
        if (i < 3)
        {
            cout << numSet1[i] << ", ";
        }
        else
        {
            cout << numSet1[i] << "]" << endl;
        }

    }

    cout << " Set2 = [";
    for (int i = 0; i < SIZE; i++)
    {
        if (i < 3)
        {
            cout << numSet2[i] << ", ";
        }
        else
        {
            cout << numSet2[i] << "]" << endl;
        }

    }

    // Output union and intersection to user
    for (int i = 0, n = static_cast<int>(intersectSet.size()); i < n; i++)
    {
        if (i == 0)
        {
            cout << " Intersection = [";
        }
        if (i < n - 1)
        {
            cout << intersectSet[i] << ", ";
        }
        else
        {
            cout << intersectSet[i] << "]" << endl;
        }
    }

    cout << " Union = [";
    for (int i = 0, n = static_cast<int>(unionSet.size()); i < n; i++)
    {
        if (i < n - 1)
        {
            cout << unionSet[i] << ", ";
        }
        else
        {
            cout << unionSet[i] << "]" << endl;
        }
    }

    cout << endl << " =====================================================================" << endl << endl;


    return 0;
}