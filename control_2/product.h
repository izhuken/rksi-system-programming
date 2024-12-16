#pragma once

#include "entity.h"

#include <string>
#include <iostream>

using namespace std;

class Product : public Entity
{
public:
    Product(int id, string name, int quantity);

    int get_id();
    string get_name();
    int get_quantity();

    void set_quantity(int quantity);

private:
    int id;
    string name;
    int quantity;
};