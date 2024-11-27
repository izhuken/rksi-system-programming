#include <iostream>
#include <string>

#include "wild.h"

using namespace std;
using namespace validatorAnimal;

Wild::Wild()
{
    setName("undefined");
    setAnimalType("undefined");
    setColor("undefined");
    setAge(0);
    setWeight(0);
    this->_area = "undefined";
}

Wild::~Wild()
{
    cout << "Wild destructor called" << endl;
};

Wild::Wild(string name, string animal_type, string color, int age, double weight, string area) : Animal(name, animal_type, color, age, weight), _area(correctAlpha(area))
{
    cout << "Wild constructor called" << endl;
};
Wild::Wild(string name, string animal_type, string color, int age, double weight) : Wild(name, animal_type, color, age, weight, "undefined")
{
    cout << "Wild constructor called" << endl;
};
Wild::Wild(string name, string animal_type, string color, int age) : Wild(name, animal_type, color, age, 0, "undefined")
{
    cout << "Wild constructor called" << endl;
};
Wild::Wild(string name, string animal_type, string color) : Wild(name, animal_type, color, AgeAnimal::Default, 0, "undefined")
{
    cout << "Wild constructor called" << endl;
};
Wild::Wild(string name, string animal_type) : Wild(name, animal_type, "undefined", AgeAnimal::Default, 0, "undefined")
{
    cout << "Wild constructor called" << endl;
};
Wild::Wild(string name) : Wild(name, "undefined", "undefined", AgeAnimal::Default, 0, "undefined")
{
    cout << "Wild constructor called" << endl;
};

void Wild::setArea(string area)
{
    this->_area = area;
}

string Wild::getArea()
{
    return _area;
}

void Wild::printInfo()
{
    setlocale(LC_ALL, "");
    Animal::printInfo();
    cout << "Ареал: " << _area << endl;
}