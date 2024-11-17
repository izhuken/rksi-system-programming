#include <iostream>
#include <cstring>
#include "animal.h"

using namespace std;

Animal::Animal(const char *name, const char *animal_type, const char *color, AnimalAge age, double weight)
{
    this->name = name;
    this->animal_type = animal_type;
    this->color = color;
    this->age = age;
    this->weight = weight;
}
Animal::Animal(const char *name, const char *animal_type, const char *color, AnimalAge age)
{
    this->name = name;
    this->animal_type = animal_type;
    this->color = color;
    this->age = age;
}
Animal::Animal(const char *name, const char *animal_type, const char *color)
{
    this->name = name;
    this->animal_type = animal_type;
    this->color = color;
}
Animal::Animal(const char *name, const char *animal_type)
{
    this->name = name;
    this->animal_type = animal_type;
}
Animal::Animal(const char *name)
{
    this->name = name;
}

Animal::~Animal()
{
    cout << endl;
}

bool Animal::operator<(Animal other)
{
    return this->weight < other.weight;
}
bool Animal::operator>(Animal other)
{
    return this->weight > other.weight;
}

Animal Animal::operator++(int)
{
    Animal animal(*this);
    weight += 52;
    return animal;
}
Animal Animal::operator--(int)
{
    Animal animal(*this);
    weight -= 52;
    return animal;
}
Animal Animal::operator++()
{
    weight += 52;
    return *this;
}
Animal Animal::operator--()
{
    weight -= 52;
    return *this;
}

std::ostream &operator<<(std::ostream &out, Animal animal)
{
    out << "Имя: " << animal.name << endl
        << "Тип животного: " << animal.animal_type << endl
        << "Цвет: " << animal.color << endl
        << "Возраст: " << animal.age << endl
        << "Вес: " << animal.weight << endl
        << "--------------------------------------------------" << endl;
    return out;
}
// сеттеры геттеры
void Animal::setName(const char *name)
{
    if (name != nullptr && strlen(name))
    {
        this->name = name;
    }
    else
    {
        cout << "Имя не может быть пустым" << endl;
    }
}

const char *Animal::getName()
{
    return name;
}

void Animal::setAnimalType(const char *animal_type)
{
    if (animal_type != nullptr && strlen(animal_type))
    {
        this->animal_type = animal_type;
    }
    else
    {
        cout << "Тип животного не может быть пустым" << endl;
    }
}
const char *Animal::getAnimalType()
{
    return animal_type;
}

void Animal::setColor(const char *color)
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
const char *Animal::getColor()
{
    return color;
}

void Animal::setAge(AnimalAge age)
{
    this->age = age;
}
AnimalAge Animal::getAge()
{
    return age;
}

void Animal::setWeight(double weight)
{
    if (weight < 0)
    {
        cout << "Вес не может быть меньше 0";
    }
    else
    {
        this->weight = weight;
    }
}
double Animal::getWeight()
{
    return weight;
}

void Animal::printInfo()
{
    cout << "Имя: " << name << endl;
    cout << "Тип животного: " << animal_type << endl;
    cout << "Цвет: " << color << endl;
    cout << "Возраст: " << age << endl;
    cout << "Вес: " << weight << endl;
}