#include <iostream>
#include <cmath>
#include <ctime>
#include <cstring>
#include "Ihuman.h"

using namespace std;

IHuman::~IHuman()
{
    cout << "IHuman destructor called" << endl;
};

IHuman::IHuman()
{
    this->_name = "undefined";
    this->_surname = "undefined";
    this->_age = ageHuman::Default;
    this->_weight = 0;
    this->_height = 0;
}
IHuman::IHuman(string name, string surname, int age, int weight, int height) : _name(correctAlpha(name)),
                                                                               _surname(correctAlpha(surname)), _age(correctCount(age)), _weight(correctCount(weight)), _height(correctCount(height))
{
    cout << "IHuman constructor called" << endl;
}

IHuman::IHuman(string name, string surname, int age, int weight) : IHuman(name, surname, age, weight, 0)
{
    cout << "IHuman constructor called" << endl;
}
IHuman::IHuman(string name, string surname, int age) : IHuman(name, surname, age, 0, 0)
{
    cout << "IHuman constructor called" << endl;
}
IHuman::IHuman(string name, string surname) : IHuman(name, surname, 0, 0, 0)
{
    cout << "IHuman constructor called" << endl;
}
IHuman::IHuman(string name) : IHuman(name, "undefiend", 0, 0, 0)
{
    cout << "IHuman constructor called" << endl;
}

void IHuman::setName(string name)
{
    this->_name = correctAlpha(name);
}
string IHuman::getName()
{
    return _name;
}

void IHuman::setSurname(string surname)
{
    this->_surname = correctAlpha(surname);
}
string IHuman::getSurname()
{
    return _surname;
}

void IHuman::setAge(int age)
{
    this->_age = correctCount(age);
}
int IHuman::getAge()
{
    return _age;
}

void IHuman::setWeight(int weight)
{
    this->_weight = correctCount(weight);
}
int IHuman::getWeight()
{
    return _weight;
}

void IHuman::setHeight(int height)
{
    this->_height = correctCount(height);
}
int IHuman::getHeight()
{
    return _height;
}

void IHuman::display()
{
    cout << "Имя: " << _name << endl;
    cout << "Фамилия: " << _surname << endl;
    cout << "Возраст: " << _age << endl;
    cout << "Вес: " << _weight << endl;
    cout << "Рост: " << _height << endl;
}