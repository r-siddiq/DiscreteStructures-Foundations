/*
Rahim Siddiq
CS 131 Discrete Structures
Feb 20 2023
Lab 2 - Universal quantifiers and contrapositives
*/

// Pre-processor directives
#include <iostream>
#include <iomanip>

using namespace std;

// Main function
int main()
{
	int n = 0;
	int n_squared = 0;

	cout << endl << " ===== This program demonstrates the concepts of universal quantifiers and contrapositives =====" << endl << endl;
	cout << " Please enter an integer for n to check the parity of the value and its square" << endl << endl;
	cout << " Enter an integer value for n, then press [Enter]: ";
	
	cin >> n;
	n_squared = n * n;
	
	cout << endl << " ===============================================================================================" << endl << endl;
	cout << " Quantifier: If n^2 is odd then n is odd." << endl;

	if (n_squared % 2 != 0)
	{
		cout << " n (" << n << ") is odd, so n^2 (" << n_squared << ") is odd." << endl << endl;
	}
	else
	{
		cout << " n (" << n << ") is NOT odd, so n^2 (" << n_squared << ") is NOT odd." << endl << endl;
	}

	return 0;
}