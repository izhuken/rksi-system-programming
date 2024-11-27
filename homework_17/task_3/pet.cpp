#include <iostream>
#include <string>

#include "pet.h"

using namespace std;
using namespace validatorAnimal;

Pet::Pet()
{
    setName("undefined");
    setAnimalType("undefined");
    setColor("undefined");
    setAge(0);
    setWeight(0);
    this->_hasCollar = false;
}

Pet::~Pet()
{
    cout << "Pet destructor called" << endl;
};

Pet::Pet(string name, string animal_type, string color, int age, double weight, bool hadCollar) : Animal(name, animal_type, color, age, weight), _hasCollar(hadCollar)
{
    cout << "Pet constructor called" << endl;
};
Pet::Pet(string name, string animal_type, string color, int age, double weight) : Pet(name, animal_type, color, age, weight, false)
{
    cout << "Pet constructor called" << endl;
};
Pet::Pet(string name, string animal_type, string color, int age) : Pet(name, animal_type, color, age, 0, false)
{
    cout << "Pet constructor called" << endl;
};
Pet::Pet(string name, string animal_type, string color) : Pet(name, animal_type, color, AgeAnimal::Default, 0, false)
{
    cout << "Pet constructor called" << endl;
};
Pet::Pet(string name, string animal_type) : Pet(name, animal_type, "undefined", AgeAnimal::Default, 0, false)
{
    cout << "Pet constructor called" << endl;
};
Pet::Pet(string name) : Pet(name, "undefined", "undefined", AgeAnimal::Default, 0, false)
{
    cout << "Pet constructor called" << endl;
};

void Pet::setHasCollar(bool hasCollar)
{
    this->_hasCollar = hasCollar;
}

bool Pet::getHasCollar()
{
    return _hasCollar;
}

void Pet::printInfo()
{
    setlocale(LC_ALL, "");
    Animal::printInfo();
    cout << "Наличие ошейника: " << (_hasCollar ? "да" : "нет") << endl;
}