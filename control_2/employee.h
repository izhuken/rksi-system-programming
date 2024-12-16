#pragma once

#include "entity.h"

#include <string>
#include <iostream>

using namespace std;

class Employee : public Entity
{
public:
    Employee(int id, string name, string phone, string employment_day);

    int get_id();
    string get_name();
    string get_phone();
    string get_employment_day();

private:
    int id;
    string name;
    string phone;
    string employment_day;
};