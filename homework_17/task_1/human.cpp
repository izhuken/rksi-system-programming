#include <iostream>
#include <cmath>
#include <ctime>
#include <cstring>

#include "human.h"

using namespace std;

ostream &operator<<(ostream &out, Human human)
{
    out << "Имя: " << human._name << endl
        << "Фамилия: " << human._surname << endl
        << "Возраст: " << human._age << endl
        << "Вес: " << human._weight << endl
        << "Рост: " << human._height << endl
        << "--------------------------------------------------" << endl;
    return out;
}

Human::~Human()
{
    cout << "Human destructor called" << endl;
};

Human::Human()
{
    this->_name = "undefined";
    this->_surname = "undefined";
    this->_age = ageHuman::Default;
    this->_weight = 0;
    this->_height = 0;
}
Human::Human(string name, string surname, int age, int weight, int height) : _name(correctAlpha(name)),
                                                                             _surname(correctAlpha(surname)), _age(correctCount(age)), _weight(correctCount(weight)), _height(correctCount(height))
{
    cout << "Human constructor called" << endl;
}

Human::Human(string name, string surname, int age, int weight) : Human(name, surname, age, weight, 0)
{
    cout << "Human constructor called" << endl;
}
Human::Human(string name, string surname, int age) : Human(name, surname, age, 0, 0)
{
    cout << "Human constructor called" << endl;
}
Human::Human(string name, string surname) : Human(name, surname, 0, 0, 0)
{
    cout << "Human constructor called" << endl;
}
Human::Human(string name) : Human(name, "undefiend", 0, 0, 0)
{
    cout << "Human constructor called" << endl;
}

void Human::setName(string name)
{
    this->_name = correctAlpha(name);
}
string Human::getName()
{
    return _name;
}

void Human::setSurname(string surname)
{
    this->_surname = correctAlpha(surname);
}
string Human::getSurname()
{
    return _surname;
}

void Human::setAge(int age)
{
    this->_age = correctCount(age);
}
int Human::getAge()
{
    return _age;
}

void Human::setWeight(int weight)
{
    this->_weight = correctCount(weight);
}
int Human::getWeight()
{
    return _weight;
}

void Human::setHeight(int height)
{
    this->_height = correctCount(height);
}
int Human::getHeight()
{
    return _height;
}

void Human::display()
{
    cout << "Имя: " << _name << endl;
    cout << "Фамилия: " << _surname << endl;
    cout << "Возраст: " << _age << endl;
    cout << "Вес: " << _weight << endl;
    cout << "Рост: " << _height << endl;
}