#pragma once
#include "child.h"
#include "adult.h"
#include "Ihuman.h"

using namespace std;
class Teenager : public Child, Adult
{
public:
    Teenager();
    Teenager(string name, string surname, int age, int weight, int height, int course, string job, string pet);

    void setPet(string pet);
    string getPet();

    void display();
    void readFromConsole();
    void writeToFile();

private:
    string _pet;
};