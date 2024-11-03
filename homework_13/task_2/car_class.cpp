#include "car_class.h"
#include <iostream>
#include <cmath>

using namespace std;

CarClass::CarClass(const char *brand)
{
    this->brand = brand;
}

CarClass::CarClass(const char *brand, const char *color)
{
    this->brand = brand;
    this->color = color;
}

CarClass::CarClass(const char *brand, const char *color, const char *bodyType)
{
    this->brand = brand;
    this->color = color;
    this->bodyType = bodyType;
}

CarClass::CarClass(const char *brand, const char *color, const char *bodyType, double engineVolume)
{
    this->brand = brand;
    this->color = color;
    this->bodyType = bodyType;
    this->engineVolume = engineVolume;
}

CarClass::CarClass(const char *brand, const char *color, const char *bodyType, double engineVolume, double kilometers)
{
    this->brand = brand;
    this->color = color;
    this->bodyType = bodyType;
    this->engineVolume = engineVolume;
    this->kilometers = kilometers;
}

void CarClass::setBrand(const char *newBrand)
{
    this->brand = newBrand;
}

void CarClass::setColor(const char *newColor)
{
    this->color = newColor;
}

void CarClass::setBodyType(const char *newBodyType)
{
    this->bodyType = newBodyType;
}

void CarClass::setEngineVolume(double newEngineVolume)
{
    if (newEngineVolume <= 0)
    {
        cout << "Недопустимое значение для объма двигателя" << endl;
        return;
    }

    this->engineVolume = newEngineVolume;
}

void CarClass::setKilometers(double newKilometers)
{
    if (newKilometers <= 10000)
    {
        cout << "Перекуп?" << endl;
        return;
    }

    this->kilometers = newKilometers;
}

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

CarClass::~CarClass()
{
    cout << "Деструктор для " << brand << " выполнен" << endl;
}