#include <string>
#include <iostream>

#include "child.h"

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

Child::Child(string name, string surname, int age, int weight, int height, int course) : Human(name, surname, age, weight, height), _course(correctCount(course))
{
    cout << "Child constructor called" << endl;
}
Child::Child(string name, string surname, int age, int weight, int height) : Human(name, surname, age, weight, height), _course(correctCount(0))
{
    cout << "Child constructor called" << endl;
}
Child::Child(string name, string surname, int age, int weight) : Human(name, surname, age, weight, 0), _course(correctCount(0))
{
    cout << "Child constructor called" << endl;
}
Child::Child(string name, string surname, int age) : Human(name, surname, age, 0, 0), _course(correctCount(0))
{
    cout << "Child constructor called" << endl;
}
Child::Child(string name, string surname) : Human(name, surname, 0, 0, 0), _course(correctCount(0))
{
    cout << "Child constructor called" << endl;
}
Child::Child(string name) : Human(name, "undefined", 0, 0, 0), _course(correctCount(0))
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
    Human::display();
    cout << "Текущий класс: " << _course << endl
         << endl;
}