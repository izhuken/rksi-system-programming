#pragma once
#include "age.h"
using namespace age;
using namespace std;

class Animal
{
public:
    Animal() = default;
    Animal(const char *name, const char *animal_type, const char *color, AnimalAge age, double weight);
    Animal(const char *name, const char *animal_type, const char *color, AnimalAge age);
    Animal(const char *name, const char *animal_type, const char *color);
    Animal(const char *name, const char *animal_type);
    Animal(const char *name);

    ~Animal();

    bool operator<(Animal other);
    bool operator>(Animal other);

    Animal operator++(int);
    Animal operator--(int);
    Animal operator++();
    Animal operator--();

    friend ostream &operator<<(ostream &out, Animal animal);

    void setName(const char *name);
    const char *getName();

    void setAnimalType(const char *animal_type);
    const char *getAnimalType();

    void setColor(const char *color);
    const char *getColor();

    void setAge(AnimalAge age);
    AnimalAge getAge();

    void setWeight(double weight);
    double getWeight();

    void printInfo();

private:
    const char *name;
    const char *animal_type;
    const char *color;
    AnimalAge age;
    double weight;
};