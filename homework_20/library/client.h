#pragma once

#include "entity.h"
#include <string>
#include <iostream>

using namespace std;

class Client : public Entity
{
public:
    Client(string name, string phone, float total_spent);

    string get_name();
    void increase_total_spent(float total_spent);
    void display();

private:
    string name;
    string phone;
    float total_spent;
};