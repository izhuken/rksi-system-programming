#pragma once

#include "entity.h"
#include <string>
#include <iostream>

using namespace std;

class Play : public Entity
{
public:
    Play(string name, string date, string hall, float cost);

    string get_name();
    string get_date();
    string get_hall();
    float get_cost();

    void display();

private:
    string name;
    string date;
    string hall;
    float cost;
};