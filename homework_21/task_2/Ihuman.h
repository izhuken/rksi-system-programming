#pragma once
#include <iostream>
#include <cmath>
#include <ctime>
#include <cstring>
#include <string>
#include <fstream>
#include "validator_human.h"
using namespace std;
using namespace validatorHuman;
class IHuman
{
public:
    IHuman(string name, string surname, int age, int weight, int height);
    IHuman();

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

    float calculateBMI();
    int calculateDateOfBirth();

    virtual void readFromConsole();
    virtual void display();
    virtual void writeToFile();

private:
    string _name;
    string _surname;
    int _age;
    int _weight;
    int _height;
};