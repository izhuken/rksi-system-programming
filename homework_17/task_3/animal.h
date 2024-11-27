#pragma once
#include "validator_animal.h"

using namespace validatorAnimal;
using namespace std;

class Animal
{
public:
    Animal();
    Animal(string name, string animal_type, string color, int age, double weight);
    Animal(string name, string animal_type, string color, int age);
    Animal(string name, string animal_type, string color);
    Animal(string name, string animal_type);
    Animal(string name);

    virtual ~Animal();

    bool operator<(Animal other);
    bool operator>(Animal other);

    Animal operator++(int);
    Animal operator--(int);
    Animal operator++();
    Animal operator--();

    friend ostream &operator<<(ostream &out, Animal animal);

    void setName(string name);
    string getName();

    void setAnimalType(string animal_type);
    string getAnimalType();

    void setColor(string color);
    string getColor();

    void setAge(int age);
    int getAge();

    void setWeight(double weight);
    double getWeight();

    virtual void printInfo();

private:
    string _name;
    string _animal_type;
    string _color;
    int _age;
    double _weight;
};