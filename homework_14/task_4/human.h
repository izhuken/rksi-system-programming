#pragma once
#include "age.h"
using namespace age;
class Human
{
public:
    Human() = default;
    Human(const char *name, const char *surname, HumanAge age, double weight, int height);
    Human(const char *name, const char *surname, HumanAge age, double weight);
    Human(const char *name, const char *surname, HumanAge age);
    Human(const char *name, const char *surname);
    Human(const char *name);

    ~Human();

    bool operator<(Human other);
    bool operator>(Human other);

    Human operator++(int);
    Human operator--(int);
    Human operator++();
    Human operator--();

    friend std::ostream &operator<<(std::ostream &out, Human human);

    void setName(const char *name);
    const char *getName();

    void setSurname(const char *surname);
    const char *getSurname();

    void setAge(HumanAge age);
    HumanAge getAge();

    void setWeight(double weight);
    double getWeight();

    void setHeight(int height);
    int getHeight();

    void printInfo();

private:
    const char *name;
    const char *surname;
    HumanAge age;
    double weight;
    int height;
};