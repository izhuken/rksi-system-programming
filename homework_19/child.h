#pragma once
#include "Ihuman.h"
using namespace std;
class Child : virtual public IHuman
{
public:
    Child(string name, string surname, int age, int weight, int height, int course);
    Child(int course);
    Child();

    ~Child();

    bool operator<(Child other);
    bool operator>(Child other);

    Child operator++();
    Child operator--();

    Child operator++(int);
    Child operator--(int);

    friend std::ostream &operator<<(std::ostream &out, Child child);

    void setCourse(int course);
    int getCourse();

    void readFromConsole();
    void display();
    void writeToFile();

private:
    int _course;
};