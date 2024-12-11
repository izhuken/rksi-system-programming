#pragma once

#include "entity.h"
#include <string>
#include <iostream>

using namespace std;

class Ticket : public Entity
{
public:
    Ticket(string play_name, float cost);

    void display();

private:
    float cost;
    string play_name;
};