#include <iostream>
#include <cstring>
#include "animal.h"

using namespace std;
using namespace validatorAnimal;

std::ostream &operator<<(std::ostream &out, Animal animal)
{
    out << "Имя: " << animal._name << endl
        << "Тип животного: " << animal._animal_type << endl
        << "Цвет: " << animal._color << endl
        << "Возраст: " << animal._age << endl
        << "Вес: " << animal._weight << endl
        << "--------------------------------------------------" << endl;
    return out;
}

Animal::~Animal()
{
    cout << "Animal destructor called" << endl;
};

Animal::Animal()
{
    this->_name = "undefined";
    this->_animal_type = "undefined";
    this->_color = "undefined";
    this->_age = AgeAnimal::Default;
    this->_weight = 0;
};

Animal::Animal(
    string name,
    string animal_type,
    string color,
    int age,
    double weight) : _name(correctAlpha(name)),
                     _animal_type(correctAlpha(animal_type)),
                     _color(correctAlpha(color)),
                     _age(correctCount(age)),
                     _weight(weight)
{
    cout << "Animal constructor called" << endl;
}

Animal::Animal(string name, string animal_type, string color, int age) : Animal(name, animal_type, color, age, 0)
{
    cout << "Animal constructor called" << endl;
}
Animal::Animal(string name, string animal_type, string color) : Animal(name, animal_type, color, AgeAnimal::Default, 0)
{
    cout << "Animal constructor called" << endl;
}
Animal::Animal(string name, string animal_type) : Animal(name, animal_type, "undefined", 0, 0)
{
    cout << "Animal constructor called" << endl;
}
Animal::Animal(string name) : Animal(name, "undefined", "undefined", 0, 0)
{
    cout << "Animal constructor called" << endl;
}

bool Animal::operator<(Animal other)
{
    return this->_weight < other._weight;
}
bool Animal::operator>(Animal other)
{
    return this->_weight > other._weight;
}

Animal Animal::operator++(int)
{
    Animal animal(*this);
    _weight += 52;
    return animal;
}
Animal Animal::operator--(int)
{
    Animal animal(*this);
    _weight -= 52;
    return animal;
}
Animal Animal::operator++()
{
    _weight += 52;
    return *this;
}
Animal Animal::operator--()
{
    _weight -= 52;
    return *this;
}

void Animal::setName(string name)
{
    if (name.length() <= 0)
    {
        this->_name = name;
    }
    else
    {
        cout << "Имя не может быть пустым" << endl;
    }
}

string Animal::getName()
{
    return _name;
}

void Animal::setAnimalType(string animal_type)
{
    if (animal_type.length() <= 0)
    {
        this->_animal_type = animal_type;
    }
    else
    {
        cout << "Тип животного не может быть пустым" << endl;
    }
}
string Animal::getAnimalType()
{
    return _animal_type;
}

void Animal::setColor(string color)
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
string Animal::getColor()
{
    return _color;
}

void Animal::setAge(int age)
{
    this->_age = age;
}
int Animal::getAge()
{
    return _age;
}

void Animal::setWeight(double weight)
{
    if (weight < 0)
    {
        cout << "Вес не может быть меньше 0";
    }
    else
    {
        this->_weight = weight;
    }
}
double Animal::getWeight()
{
    return _weight;
}

void Animal::printInfo()
{
    cout << "Имя: " << _name << endl;
    cout << "Тип животного: " << _animal_type << endl;
    cout << "Цвет: " << _color << endl;
    cout << "Возраст: " << _age << endl;
    cout << "Вес: " << _weight << endl;
}