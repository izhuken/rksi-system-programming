#include "human_class.h"
#include <iostream>
#include <cmath>

using namespace std;

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