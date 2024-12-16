#include "entity.h"
#include "menu_item.h"

#include <vector>
#include <string>
#include <iostream>

using namespace std;

MenuItem::MenuItem(int id, string name, int cost, vector<int> product)
{
    this->id = id;
    this->name = name;
    this->cost = cost;
    this->product = product;
}

int MenuItem::get_id()
{
    return this->id;
}

string MenuItem::get_name()
{
    return name;
}

int MenuItem::get_cost()
{
    return cost;
}

vector<int> MenuItem::get_product()
{
    return product;
}