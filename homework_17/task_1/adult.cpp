#include "adult.h"
#include <string>
#include <iostream>
using namespace std;

Adult::Adult()
{
    setName("undefined");
    setSurname("undefined");
    setAge(0);
    setWeight(0);
    setHeight(0);
    this->_job = "undefined";
}

Adult::~Adult()
{
    cout << "Adult destructor called" << endl;
};

Adult::Adult(string name, string surname, int age, int weight, int height, string job) : Human(name, surname, age, weight, height), _job(correctAlpha(job))
{
    cout << "Adult constructor called" << endl;
}
Adult::Adult(string name, string surname, int age, int weight, int height) : Human(name, surname, age, weight, height), _job(correctAlpha("undefined"))
{
    cout << "Adult constructor called" << endl;
}
Adult::Adult(string name, string surname, int age, int weight) : Human(name, surname, age, weight, 0), _job(correctAlpha("undefined"))
{
    cout << "Adult constructor called" << endl;
}
Adult::Adult(string name, string surname, int age) : Human(name, surname, age, 0, 0), _job(correctAlpha("undefined"))
{
    cout << "Adult constructor called" << endl;
}
Adult::Adult(string name, string surname) : Human(name, surname, 0, 0, 0), _job(correctAlpha("undefined"))
{
    cout << "Adult constructor called" << endl;
}
Adult::Adult(string name) : Human(name, "undefined", 0, 0, 0), _job(correctAlpha("undefined"))
{
    cout << "Adult constructor called" << endl;
}

void Adult::setJob(string job)
{
    this->_job = correctAlpha(job);
}

string Adult::getJob()
{
    return _job;
}

void Adult::display()
{
    setlocale(LC_ALL, "");
    Human::display();
    cout << "Место работы: " << _job << endl
         << endl;
}