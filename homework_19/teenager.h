#pragma once
#include "child.h"
#include "adult.h"
#include "Ihuman.h"

using namespace std;
class Teenager : public Child, Adult
{
public:
    Teenager(string name, string surname, int age, int weight, int height, int course, string job, string pet);
    Teenager();

    ~Teenager();

    bool operator<(Teenager other);
    bool operator>(Teenager other);

    Teenager operator++();
    Teenager operator--();

    Teenager operator++(int);
    Teenager operator--(int);

    friend std::ostream &operator<<(std::ostream &out, Teenager teenager);

    void setPet(string pet);
    string getPet();

    void display();
    void readFromConsole();
    void writeToFile();

private:
    string _pet;
};