#include "play.h"
#include <string>
#include <iostream>

using namespace std;

Play::Play(string name, string date, string hall, float cost)
{
    this->name = name;
    this->date = date;
    this->hall = hall;
    this->cost = cost;
}

string Play::get_name()
{
    return this->name;
}

string Play::get_date()
{
    return this->date;
}

string Play::get_hall()
{
    return this->hall;
}

float Play::get_cost()
{
    return this->cost;
}

void Play::display()
{
    cout << this->name << " " << this->date << " " << this->hall << endl;
}