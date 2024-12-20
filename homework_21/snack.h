#pragma once
#include <string>

using namespace std;

class Snack
{
public:
    Snack(string name, double cost);

    string getName() const;
    void setName(string name);

    bool operator==(Snack other);

    double getCost() const;
    void setCost(double cost);

private:
    string _name;
    double _cost;
};