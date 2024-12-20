#pragma once
#include "Ihuman.h"
using namespace std;
class Child : virtual public IHuman
{
public:
    Child();
    Child(int course);
    Child(string name, string surname, int age, int weight, int height, int course);

    void setCourse(int course);
    int getCourse();

    void readFromConsole();
    void display();
    void writeToFile();

private:
    int _course;
};