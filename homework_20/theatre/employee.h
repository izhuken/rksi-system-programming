#pragma once

#include "entity.h"

#include <string>
#include <iostream>

using namespace std;

class Employee : public Entity
{
public:
    Employee(string name, string phone, string employment_day);

    string get_name();
    void display();

private:
    string name;
    string phone;
    string employment_day;
};