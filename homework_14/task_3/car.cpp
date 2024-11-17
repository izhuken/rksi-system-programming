#include <iostream>
#include <cstring>
#include "car.h"

using namespace std;


Car::Car(const char* mark, const char* color, const char* body_type, double volume, CarMileage mileage)
{
    if (volume > 0)
    {
        this->mark = mark;
        this->color = color;
        this->body_type = body_type;
        this->volume = volume;
        this->mileage = mileage;
    }
    else
    {
        cout << "Объем двигателя не может быть меньше 0" << endl;
    }
}
Car::Car(const char* mark, const char* color, const char* body_type, double volume)
{
    if (volume > 0)
    {
        this->mark = mark;
        this->color = color;
        this->body_type = body_type;
        this->volume = volume;
        this->mileage = mileage;
    }
    else
    {
        cout << "Объем двигателя не может быть меньше 0" << endl;
    }
}
Car::Car(const char* mark, const char* color, const char* body_type)
{
    this->mark = mark;
    this->color = color;
    this->body_type = body_type;    
}
Car::Car(const char* mark, const char* color)
{
    this->mark = mark;
    this->color = color;
}
Car::Car(const char* mark)
{
    this->mark = mark;
}
Car::~Car()
{
    cout << endl;
}
bool Car::operator< (Car other)
{
    return this->volume < other.volume;
}
bool Car::operator> (Car other)
{
    return this->volume > other.volume;
}

Car Car::operator++(int)
{
    Car car(*this);
    volume+=0.3;
    return car;
}
Car Car::operator--(int)
{
    Car car(*this);
    volume-=0.3;
    return car;
}
Car Car::operator++()
{
    volume+=0.3;
    return *this;
}
Car Car::operator--()
{
    volume-=0.3;
    return *this;
}

std::ostream& operator<< (std::ostream& out, Car car)
{
    out << "Марка: " << car.mark << endl
    << "Цвет: " << car.color << endl
    << "Тип кузова: " << car.body_type << endl
    << "Объем двигателя: " << car.volume << endl
    << "Пробег: " << car.mileage << endl
    << "--------------------------------------------------" << endl;
    return out;
}


void Car::setMark(const char* mark)
{
    if (mark != nullptr && strlen(mark))
    {
        this->mark = mark;
    }
    else
    {
        cout << "Марка не может быть пустой" << endl;
    }
}
const char* Car::getMark()
{
    return mark;
}

void Car::setColor(const char* color)
{
    if (color != nullptr && strlen(color))
    {
        this->color = color;
    }
    else
    {
        cout << "Цвет не может быть пустым" << endl;
    }
}
const char* Car::getColor()
{
    return color;
}

void Car::setBodyType(const char* body_type)
{
    if (body_type != nullptr && strlen(body_type))
    {
        this->body_type = body_type;
    }
    else
    {
        cout << "Тип кузова не может быть пустым" << endl;
    }
}
const char* Car::getBodyType()
{
    return body_type;
}


void Car::setVolume(double volume)
{
    if (volume > 8.2 || volume < 0.4)
    {
        cout << "Объем двигателя не может быть меньше 0 или больше 8.2" << endl;
    }
    else
    {
        this->volume = volume;
    }
}
double Car::getVolume()
{
    return volume;
}

void Car::setMileage(CarMileage mileage)
{
    this->mileage = mileage;
}
CarMileage Car::getMileage()
{
    return mileage;
}

void Car::printInfo()
{
    cout << "Марка: " << mark << endl;
    cout << "Цвет: " << color << endl;
    cout << "Тип кузова: " << body_type << endl;
    cout << "Объем двигателя: " << volume << endl;
    cout << "Пробег: " << mileage << endl;
}