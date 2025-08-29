/*
Rahim Siddiq
CS 131 Discrete Structures
Feb 26 2023
Lab 3 - Direct Proof
*/

// Pre-processor directives
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    // Local Variables
    int m = 0, n = 0, mn = 0;
    double sqrt_m = 0, sqrt_n = 0, sqrt_mn = 0;

    // Fuction of program messages for user
    cout << endl << " ======= This program demonstrates the concept of Direct Proof =======" << endl;
    cout << " || If m and n are both perfect squares,                            ||" << endl;
    cout << " || then their product mn is also a perfect square.                 ||" << endl;
    cout << " =====================================================================" << endl << endl;

    // User input
    cout << " *Please enter an integer for variables m & n to see a direct proof.*" << endl;
    cout << " Enter an integer value for m, then press [Enter]: ";
    cin >> m;
    cout << " Enter an integer value for n, then press [Enter]: ";
    cin >> n;

    // Calculations for squares, product and square of product for variables m & n
    sqrt_m = sqrt(m);
    sqrt_n = sqrt(n);
    mn = n * m;
    sqrt_mn = sqrt(mn);

    // Output square roots to user
    cout << endl << " =====================================================================" << endl << endl;
    cout << " The square root of " << m << " is: " << sqrt_m << endl;
    cout << " The square root of " << n << " is: " << sqrt_n << endl;

    if (sqrt_m == int(sqrt_m))
    {
        cout << " " << m << " is a perfect square." << endl;
    }
    else
    {
        cout << " " << m << " is not a perfect square." << endl;
    }

    if (sqrt_n == int(sqrt_n))
    {
        cout << " " << n << " is a perfect square." << endl;
    }
    else
    {
        cout << " " << n << " is not a perfect square." << endl;
    }

    // Output product of mn
    cout << " m * n = " << mn << endl;

    if (sqrt_mn == int(sqrt_mn))
    {
        cout << " " << mn << " is a perfect square." << endl;
    }
    else
    {
        cout << " " << mn << " is not a perfect square." << endl;
    }

    cout << endl;

    return 0;
}

/*
-- Code wont function according to skeleton int <-> double cannot use % operator
    - if (n % sqrt_m != 0) <--- skeleton code
    - if (n % sqrt_m == 0)

-- Can upgrade all variables to double?
    - double cannot use % must use floor but logic wont resemble skeleton

-- Can use static_cast<int> to convert double type so can use % operator?
    - WIll effect calculations and logic
    - if (m % (static_cast<int>(sqrt_m) == 0))
        - 0 div error

-- Use bool to check for perfect square?
    * bool perfect_m // pow(sqrt_m, 2) == m ?
      if (perfect_m)

-- Change logic no %?
    * if (sqrt_m == floor(sqrt_m))
    * if (sqrt_m == int(sqrt_m))
    * if (m / sqrt_m == int(sqrt_m))
    * if (pow(sqrt_m, 2) == m)
    * if (m % int(sqrt_m) == sqrt_m)
*/