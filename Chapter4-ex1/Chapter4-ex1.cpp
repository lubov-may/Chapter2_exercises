#include <iostream>
using namespace std;

// Challenge
// Write a program to find and display the biggest number(element) in an array of integers. 
// Hint the size of the array is unimportant as long as there's a way to check that the number displayed is definitely the biggest number.

int main()
{

	// 1. take var of size of input from user
	cout << "Please enter size of the input you want to make" << endl;
	int size;
	cin >> size;

	do
	{
		cout << "This program doesn't have enough space. Please enter smaller input." << endl;
		cin >> size;

	} while (size > 256);
	

	// 2. create array of the size of input
	int array[256] = {};

    // 3. in do while loop fill the array with cin input from user
	
	int placeAtIndex = 0;

	do {
		cout << "Please enter value number " << placeAtIndex + 1 << endl;
		int value;
		cin >> value;
		array[placeAtIndex] = value;
		placeAtIndex++;
	} 
	while (placeAtIndex < size);

	// check for the biggest number
	int bigNum = -2147483647;
	for (int i = 0; i <= size; i++)
	{
		
		if (array[i] > bigNum) {
			bigNum = array[i];
			
		}
		
	}

	cout << "Biggest number is " << bigNum;
}
