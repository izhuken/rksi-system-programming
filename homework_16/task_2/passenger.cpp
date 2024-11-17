#include <iostream>
#include <string>

#include "passenger.h"

using namespace validatorCar;
using namespace std;

Passenger::Passenger()
{
    setMark("undefined");
    setColor("undefined");
    setBodyType("undefined");
    setVolume(0);
    setMileage(0);
    this->_numberOfPassengers = 5;
}

Passenger::Passenger(string mark, string color, string body_type, double volume, int mileage, int numberOfPassengers) : Car(mark, color, body_type, volume, mileage), _numberOfPassengers(numberOfPassengers) {}
Passenger::Passenger(string mark, string color, string body_type, double volume, int mileage) : Passenger(mark, color, body_type, volume, mileage, 5) {}
Passenger::Passenger(string mark, string color, string body_type, double volume) : Passenger(mark, color, body_type, volume, CarMileage::Default, 5) {}
Passenger::Passenger(string mark, string color, string body_type) : Passenger(mark, color, body_type, 0, CarMileage::Default, 5) {}
Passenger::Passenger(string mark, string color) : Passenger(mark, color, "undefined", 0, CarMileage::Default, 5) {}
Passenger::Passenger(string mark) : Passenger(mark, "undefined", "undefined", 0, CarMileage::Default, 5) {}

void Passenger::setNumberOfPassengers(int numberOfPassengers)
{
    this->_numberOfPassengers = numberOfPassengers;
}

int Passenger::getNumberOfPassengers()
{
    return _numberOfPassengers;
}

void Passenger::displayPassenger()
{
    setlocale(LC_ALL, "");
    Car::printInfo();
    cout << "Количество пассажиров: " << _numberOfPassengers << endl;
}