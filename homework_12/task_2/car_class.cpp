#include "car_class.h"
#include <iostream>
#include <cmath>

using namespace std;

void CarClass::setData(char *newBrand, char *newColor, char *newBodyType, double newEngineVolume, double newKilometers)
{
    brand = newBrand;
    color = newColor;
    bodyType = newBodyType;
    engineVolume = newEngineVolume;
    kilometers = newKilometers;
}

double CarClass::calculateFuelConsumption()
{
    return (engineVolume / kilometers) * 100;
}

void CarClass::decreaseKilometers(double amount)
{
    if (amount < kilometers)
    {
        kilometers -= amount;
    }
    else
    {
        kilometers = 0;
    }
}

void CarClass::printData()
{
    cout << "Модель: " << brand
         << ", Цвет: " << color
         << ", Тип кузова: " << bodyType
         << ", Объем двигателя: " << engineVolume
         << ", Пробег: " << kilometers << " км" << endl;
}