#include <iostream>
#include <string>

#include "truck.h"

using namespace std;
using namespace validatorCar;

Truck::Truck()
{
    setMark("undefined");
    setColor("undefined");
    setBodyType("undefined");
    setVolume(0);
    setMileage(0);
    this->_hasTrailer = false;
}

Truck::Truck(string mark, string color, string body_type, double volume, int mileage, bool hasTrailer) : Car(mark, color, body_type, volume, mileage), _hasTrailer(hasTrailer) {}
Truck::Truck(string mark, string color, string body_type, double volume, int mileage) : Truck(mark, color, body_type, volume, mileage, false) {}
Truck::Truck(string mark, string color, string body_type, double volume) : Truck(mark, color, body_type, volume, CarMileage::Default, false) {}
Truck::Truck(string mark, string color, string body_type) : Truck(mark, color, body_type, 0, CarMileage::Default, false) {}
Truck::Truck(string mark, string color) : Truck(mark, color, "undefined", 0, CarMileage::Default, false) {}
Truck::Truck(string mark) : Truck(mark, "undefined", "undefined", 0, CarMileage::Default, false) {}

void Truck::setHasTrailer(bool hasTrailer)
{
    this->_hasTrailer = hasTrailer;
}

bool Truck::getHasTrailer()
{
    return _hasTrailer;
}

void Truck::displayTruck()
{
    setlocale(LC_ALL, "");
    Car::printInfo();
    cout << "Наличие прицепа: " << (_hasTrailer ? "да" : "нет") << endl;
}