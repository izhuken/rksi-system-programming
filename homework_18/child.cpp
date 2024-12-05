#include "child.h"
#include <string>
#include <iostream>
using namespace std;

Child::Child()
{
    setName("undefined");
    setSurname("undefined");
    setAge(0);
    setWeight(0);
    setHeight(0);
    this->_course = 0;
}

Child::~Child()
{
    cout << "Child destructor called" << endl;
};

Child::Child(string name, string surname, int age, int weight, int height, int course) : IHuman(name, surname, age, weight, height), _course(correctCount(course))
{
    cout << "Child constructor called" << endl;
}
Child::Child(string name, string surname, int age, int weight, int height) : IHuman(name, surname, age, weight, height), _course(correctCount(0))
{
    cout << "Child constructor called" << endl;
}
Child::Child(string name, string surname, int age, int weight) : IHuman(name, surname, age, weight, 0), _course(correctCount(0))
{
    cout << "Child constructor called" << endl;
}
Child::Child(string name, string surname, int age) : IHuman(name, surname, age, 0, 0), _course(correctCount(0))
{
    cout << "Child constructor called" << endl;
}
Child::Child(string name, string surname) : IHuman(name, surname, 0, 0, 0), _course(correctCount(0))
{
    cout << "Child constructor called" << endl;
}
Child::Child(string name) : IHuman(name, "undefined", 0, 0, 0), _course(correctCount(0))
{
    cout << "Child constructor called" << endl;
}

void Child::setCourse(int couser)
{
    this->_course = correctCount(couser);
}

int Child::getCourse()
{
    return _course;
}

void Child::display()
{
    setlocale(LC_ALL, "");
    IHuman::display();
    cout << "Текущий класс: " << _course << endl
         << endl;
}