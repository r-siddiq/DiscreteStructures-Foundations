/*
Rahim Siddiq
CS 131 Discrete Structures
Feb 12 2023
Lab 1 - Use De Morgan's Law to write a program
*/

// Pre-processor directives
#include <iostream>
#include <iomanip>

using namespace std;

// Function prototypes
void DMFirstLaw(int, int);
void DMSecondLaw(int, int);

// Main function
int main()
{
	int x = 0, y = 0, i = 0, j = 0;

	cout << endl << "    This program demonstrates De Morgan's Laws with boolean algebra" << endl;
	cout << " =====================================================================" << endl << endl;

	cout << " Please enter an integer value for 4 variables (x,y,i,j)" << endl << endl;
	cout << " Enter a value for x: ";
	cin >> x;
	cout << " Enter a value for y: ";
	cin >> y;
	cout << " Enter a value for i: ";
	cin >> i;
	cout << " Enter a value for j: ";
	cin >> j;
	cout << endl << " =====================================================================" << endl << endl;

	DMFirstLaw(x, y);
	DMSecondLaw(i, j);

	return 0;
}

//***********************************************************************************************************
// void DMFirstLaw function																					*
//***********************************************************************************************************
void DMFirstLaw(int x, int y)
{
	bool result;
	result = !(x < 5 && y >= 7);
	cout << boolalpha << " !(A and B) = " << result << endl;
	result = !(x < 5) || !(y >= 7);
	cout << boolalpha << " !A or !B = " << result << endl;
}

//***********************************************************************************************************
// void DMSecondLaw function																				*
//***********************************************************************************************************
void DMSecondLaw(int i, int j)
{
	bool result;
	result = (!(i > 4 || j <= 6));
	cout << boolalpha << " !(A or B) = " << result << endl;
	result = (!(i > 4) && !(j <= 6));
	cout << boolalpha << " !A and !B = " << result << endl;
}