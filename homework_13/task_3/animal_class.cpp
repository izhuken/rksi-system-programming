#include "animal_class.h"
#include <iostream>
#include <cmath>

using namespace std;

AnimalClass::AnimalClass(const char *newName)
{
    name = newName;
}

AnimalClass::AnimalClass(const char *newName, const char *newSpecies)
{
    name = newName;
    species = newSpecies;
}

AnimalClass::AnimalClass(const char *newName, const char *newSpecies, const char *newColor)
{
    name = newName;
    species = newSpecies;
    color = newColor;
}

AnimalClass::AnimalClass(const char *newName, const char *newSpecies, const char *newColor, int newAge)
{
    name = newName;
    species = newSpecies;
    color = newColor;
    age = newAge;
}

AnimalClass::AnimalClass(const char *newName, const char *newSpecies, const char *newColor, int newAge, double newWeight)
{
    name = newName;
    species = newSpecies;
    color = newColor;
    age = newAge;
    weight = newWeight;
}

void AnimalClass::setName(const char *newName)
{
    name = newName;
}

void AnimalClass::setSpecies(const char *newSpecies)
{
    species = newSpecies;
}

void AnimalClass::setColor(const char *newColor)
{
    color = newColor;
}

void AnimalClass::setAge(int newAge)
{
    if (newAge <= 0)
    {
        cout << "Неккоректный возраст!" << endl;
        return;
    }

    age = newAge;
}

void AnimalClass::setWeight(double newWeight)
{
    if (newWeight <= 0)
    {
        cout << "Неккоректный вес!" << endl;
        return;
    }

    weight = newWeight;
}

void AnimalClass::setData(char *newName, char *newSpecies, char *newColor, int newAge, double newWeight)
{
    name = newName;
    species = newSpecies;
    color = newColor;
    age = newAge;
    weight = newWeight;
}

void AnimalClass::feed(int days)
{
    weight += weight * 0.01 * days;
}

void AnimalClass::changeName(const char *newName)
{
    name = newName;
}

void AnimalClass::printData()
{
    cout << "Имя: " << name
         << ", Вид: " << species
         << ", Цвет: " << color
         << ", Возраст: " << age
         << ", Вес: " << weight << " кг" << endl;
}

AnimalClass::~AnimalClass()
{
    cout << "Деструктор у " << this->name << endl;
}