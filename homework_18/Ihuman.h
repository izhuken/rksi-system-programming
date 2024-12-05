#pragma once
#include <string>
#include "validator_human.h"
using namespace std;
using namespace validatorHuman;

class IHuman
{
public:
    IHuman();
    IHuman(string name, string surname, int age, int weight, int height);
    IHuman(string name, string surname, int age, int weight);
    IHuman(string name, string surname, int age);
    IHuman(string name, string surname);
    IHuman(string name);

    virtual ~IHuman();

    void setName(string name);
    string getName();

    void setSurname(string surname);
    string getSurname();

    void setAge(int age);
    int getAge();

    void setWeight(int weight);
    int getWeight();

    void setHeight(int height);
    int getHeight();

    virtual void display() = 0;

private:
    string _name;
    string _surname;
    int _age;
    int _weight;
    int _height;
};