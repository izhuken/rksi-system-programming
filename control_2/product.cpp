#include "product.h"

#include <string>
#include <iostream>

using namespace std;

Product::Product(int id, string name, int quantity)
{
    this->id = id;
    this->name = name;
    this->quantity = quantity;
}

int Product::get_id()
{
    return this->id;
}

string Product::get_name()
{
    return name;
}

int Product::get_quantity()
{
    return quantity;
}

void Product::set_quantity(int quantity)
{
    this->quantity = quantity;
}