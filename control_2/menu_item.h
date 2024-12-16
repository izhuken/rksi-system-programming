#pragma once

#include "entity.h"

#include <vector>
#include <string>
#include <iostream>

using namespace std;

class MenuItem : public Entity
{
public:
    MenuItem(int id, string name, int cost, vector<int> product);

    int get_id();
    string get_name();
    int get_cost();
    vector<int> get_product();

private:
    int id;
    string name;
    int cost;
    vector<int> product;
};