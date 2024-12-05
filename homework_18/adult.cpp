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

Adult::Adult(string name, string surname, int age, int weight, int height, string job) : IHuman(name, surname, age, weight, height), _job(correctAlpha(job))
{
    cout << "Adult constructor called" << endl;
}
Adult::Adult(string name, string surname, int age, int weight, int height) : IHuman(name, surname, age, weight, height), _job(correctAlpha("undefined"))
{
    cout << "Adult constructor called" << endl;
}
Adult::Adult(string name, string surname, int age, int weight) : IHuman(name, surname, age, weight, 0), _job(correctAlpha("undefined"))
{
    cout << "Adult constructor called" << endl;
}
Adult::Adult(string name, string surname, int age) : IHuman(name, surname, age, 0, 0), _job(correctAlpha("undefined"))
{
    cout << "Adult constructor called" << endl;
}
Adult::Adult(string name, string surname) : IHuman(name, surname, 0, 0, 0), _job(correctAlpha("undefined"))
{
    cout << "Adult constructor called" << endl;
}
Adult::Adult(string name) : IHuman(name, "undefined", 0, 0, 0), _job(correctAlpha("undefined"))
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
    IHuman::display();
    cout << "Текущая работа: " << getJob() << endl
         << endl;
}