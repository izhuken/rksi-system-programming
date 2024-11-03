#include "human_class.h"
#include <iostream>
#include <cmath>

using namespace std;

HumanClass::HumanClass(const char *name)
{
    this->name = name;
}

HumanClass::HumanClass(const char *name, const char *surname)
{
    this->name = name;
    this->surname = surname;
}

HumanClass::HumanClass(const char *name, const char *surname, int age)
{
    this->name = name;
    this->surname = surname;
    this->age = age;
}

HumanClass::HumanClass(const char *name, const char *surname, int age, double weight)
{
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->weight = weight;
}

HumanClass::HumanClass(const char *name, const char *surname, int age, double weight, double height)
{
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->weight = weight;
    this->height = height;
}

void HumanClass::setName(const char *name)
{
    this->name = name;
}

void HumanClass::setSurname(const char *surname)
{
    this->surname = surname;
}

void HumanClass::setAge(int age)
{
    if (age <= 0)
    {
        cout << "Недопустимое значение для возраста" << endl;
        return;
    }

    this->age = age;
}

void HumanClass::setWeight(double weight)
{
    if (weight <= 0)
    {
        cout << "Недопустимое значение для веса" << endl;
        return;
    }

    this->weight = weight;
}

void HumanClass::setHeight(double height)
{
    if (height <= 0)
    {
        cout << "Недопустимое значение для роста" << endl;
        return;
    }

    this->height = height;
}

void HumanClass::setData(const char *NewName, const char *NewSurname, int NewAge, double NewWeight, double NewHeight)
{
    name = NewName;
    surname = NewSurname;
    age = NewAge;
    weight = NewWeight;
    height = NewHeight;
}

double HumanClass::calculateBMI()
{
    return weight / (pow(height / 100, 2));
}

int HumanClass::calculateBirthYear()
{
    return 2024 - age;
}

void HumanClass::printData()
{
    cout << "Имя: " << name
         << ", Фамилия: " << surname
         << ", Возраст: " << age
         << ", Вес: " << weight
         << ", Рост: " << height << endl;
}

HumanClass::~HumanClass()
{
    cout << "Удален объект " << this->name << endl;
}