#include <iostream>
#include <cstring>
#include "car.h"

using namespace std;
using namespace validatorCar;

ostream &operator<<(ostream &out, Car car)
{
    out << "Марка: " << car._mark << endl
        << "Цвет: " << car._mark << endl
        << "Тип кузова: " << car._body_type << endl
        << "Объем двигателя: " << car._volume << endl
        << "Пробег: " << car._mileage << endl
        << "--------------------------------------------------" << endl;
    return out;
}

Car::~Car()
{
    cout << "Car destructor called" << endl;
};

Car::Car()
{
    this->_mark = "undefined";
    this->_color = "undefined";
    this->_body_type = "undefined";
    this->_volume = 0;
    this->_mileage = CarMileage::Default;
}
Car::Car(
    string mark,
    string color,
    string body_type,
    double volume,
    int mileage) : _mark(correctAlpha(mark)),
                   _color(correctAlpha(color)),
                   _body_type(correctAlpha(body_type)),
                   _volume(correctCount(volume)),
                   _mileage(mileage)
{
    cout << "Car constructor called" << endl;
}

Car::Car(string mark, string color, string body_type, double volume) : Car(mark, color, body_type, volume, CarMileage::Default)
{
    cout << "Car constructor called" << endl;
}
Car::Car(string mark, string color, string body_type) : Car(mark, color, body_type, 0, CarMileage::Default)
{
    cout << "Car constructor called" << endl;
}
Car::Car(string mark, string color) : Car(mark, color, "undefined", 0, CarMileage::Default)
{
    cout << "Car constructor called" << endl;
}
Car::Car(string mark) : Car(mark, "undefined", "undefined", 0, CarMileage::Default)
{
    cout << "Car constructor called" << endl;
}

bool Car::operator<(Car other)
{
    return this->_volume < other._volume;
}
bool Car::operator>(Car other)
{
    return this->_volume > other._volume;
}

Car Car::operator++(int)
{
    Car car(*this);
    _volume += 0.3;
    return car;
}
Car Car::operator--(int)
{
    Car car(*this);
    _volume -= 0.3;
    return car;
}
Car Car::operator++()
{
    _volume += 0.3;
    return *this;
}
Car Car::operator--()
{
    _volume -= 0.3;
    return *this;
}

void Car::setMark(string mark)
{
    if (mark.length() <= 0)
    {
        this->_mark = mark;
    }
    else
    {
        cout << "Марка не может быть пустой" << endl;
    }
}
string Car::getMark()
{
    return _mark;
}

void Car::setColor(string color)
{
    if (color.length() <= 0)
    {
        this->_color = color;
    }
    else
    {
        cout << "Цвет не может быть пустым" << endl;
    }
}
string Car::getColor()
{
    return _color;
}

void Car::setBodyType(string body_type)
{
    if (body_type.length() <= 0)
    {
        this->_body_type = body_type;
    }
    else
    {
        cout << "Тип кузова не может быть пустым" << endl;
    }
}
string Car::getBodyType()
{
    return _body_type;
}

void Car::setVolume(double volume)
{
    if (volume > 8.2 || volume <= 0.4)
    {
        cout << "Объем двигателя не может быть меньше 0 или больше 8.2" << endl;
    }
    else
    {
        this->_volume = volume;
    }
}
double Car::getVolume()
{
    return _volume;
}

void Car::setMileage(int mileage)
{
    this->_mileage = mileage;
}
int Car::getMileage()
{
    return _mileage;
}

void Car::printInfo()
{
    cout << "Марка: " << _mark << endl;
    cout << "Цвет: " << _color << endl;
    cout << "Тип кузова: " << _body_type << endl;
    cout << "Объем двигателя: " << _volume << endl;
    cout << "Пробег: " << _mileage << endl;
}