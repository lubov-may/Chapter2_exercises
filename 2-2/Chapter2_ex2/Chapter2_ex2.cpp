#include <iostream>
using namespace std;

//Challenge:

// Write a program that uses a function to return the value of a number cubed. 
// Take the number as an input from the user and print the cubed value back to the user.

int main()
{
	// Prompt number from user
	cout << "Enter a number " << endl;

	// Get the number
	int number;
	cin >> number;

	// Prompt power number from user
	cout << "Enter a power number " << endl;

	// Get the power number
	int powNum;
	cin >> powNum;

	// Display cubed number to user
	double res = pow(number, powNum);
	cout << "The number " << number << " in " << powNum << " power is: " << res << endl;
}