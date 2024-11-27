#pragma once
#include <string>
#include "validator_human.h"

using namespace std;
using namespace validatorHuman;

class Human
{
public:
    Human();
    Human(string name, string surname, int age, int weight, int height);
    Human(string name, string surname, int age, int weight);
    Human(string name, string surname, int age);
    Human(string name, string surname);
    Human(string name);

    virtual ~Human();

    bool operator<(Human other);
    bool operator>(Human other);

    Human operator++();
    Human operator--();

    friend std::ostream &operator<<(std::ostream &out, Human human);

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

    virtual void display();

private:
    string _name;
    string _surname;
    int _age;
    int _weight;
    int _height;
};