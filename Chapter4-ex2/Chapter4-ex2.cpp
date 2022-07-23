#include <iostream>
using namespace std;

// Challenge
// Create a vehicle base class, and from that create the necessary classes to get to boat, car and airplane.
// All classes should have an overridable function named Drive.
// Create an object of each and demonstrate the Drive function works.

class Vehicle
{
    public: 
        virtual void Drive() = 0;
};

class Boat : Vehicle
{
    public:
        void Drive() override
        {
            cout << "Boat is sailing in the ocean." << endl;
        }
};

class Car : Vehicle
{
    public:
        void Drive() override
        {
            cout << "Car is driving on the road." << endl;
        }
};

class Airplane : Vehicle
{
    public:
    void Drive() override
        {
            cout << "Airplane is flying in the sky." << endl;
        }
};


int main()
{
    Boat boat;
    boat.Drive();
    Car car;
    car.Drive();
    Airplane airplane;
    airplane.Drive();
}

