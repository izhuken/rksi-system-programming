#pragma once

#include "entity.h"

#include <string>
#include <iostream>

using namespace std;

class Book : public Entity
{
public:
    Book(string name, string description, float cost, int quantity, string author);

    string get_name();
    void decrease_quantity();
    float get_cost();
    void display();

private:
    string name;
    string description;
    float cost;
    int quantity;
    string author;
};