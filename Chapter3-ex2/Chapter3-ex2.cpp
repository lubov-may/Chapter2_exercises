#include <iostream>
using namespace std;

// Challenge:
// Write a program to display all factors of a number provided by the user.
// Take an input of a positive value and write back all of the values factors.

int main()
{
    // Display welcome message
    cout << "------ Welcome to the factor finder tool. ------ " << endl;
    cout << "Please enter a number: " << endl;


    do
    {
        int number;
        cin >> number;

        // check if the input is valid
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(99, '\n');
            cout << "That is not a number!" << endl;

        }

        // check if the number is positive
        if (number > 0)
        {
            for (int i = 1; i <= number; i++) {

                if (number % i == 0)
                {
                    cout << i << endl;
                }
            }
            break;
        }
        else
        {
            cout << "Number is not positive. Try again." << endl;
            break;
        }



    } while (true);
}


// 15 -> 1, 15, 3, 5  are factors.
// 5 * 3 = 15

// 10 -> 1, 10, 2, 5