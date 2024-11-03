#include "animal_class.h"
#include <iostream>
#include <cmath>

using namespace std;

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