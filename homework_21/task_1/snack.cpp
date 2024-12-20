#include <iostream>
#include <string>
#include "snack.h"

using namespace std;

Snack::Snack(string name, double cost) : _name(name), _cost(cost) {}

string Snack::getName() const
{
    return _name;
}

void Snack::setName(string name)
{
    this->_name = name;
}

double Snack::getCost() const
{
    return _cost;
}

void Snack::setCost(double cost)
{
    if (cost < 0)
    {
        return;
    }
    this->_cost = cost;
}

bool Snack::operator==(Snack other)
{
    return this->getName() == other.getName() && this->getCost() == other.getCost();
}