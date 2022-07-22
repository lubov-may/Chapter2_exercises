
#include <iostream>
using namespace std;

// Challenge
// Write a program to check and return whether it is currently a leap year.

int main()
{
    // Display welcome message
    cout << "------ Welcome to the Leap Year checking tool. ------ " << endl;
    cout << "Please enter the year you would like to check: " << endl;

    int year;
    cin >> year;

    bool isLeapYear = (year % 4 == 0 && year % 100 == 0 && year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);

    if (isLeapYear) {
        cout << "The year of " << year << " is a leap year.";

    }
    else  {
        cout << "The year of " << year << " is not a leap year.";
    }
}


//2000 % 4 == 0
//2000 % 400 == 0
//2000 % 100 == 0
//
//2000 IS a leap year
//
//2024 % 4 == 0
//2024 % 100 != 0
//
//2024 IS a leap year
//
//2100 % 4 == 0
//2100 % 100 == 0
//2100 % 400 != 0
//
//2100 is NOT a leap year 