#include "employee.h"

#include <string>
#include <iostream>

using namespace std;

Employee::Employee(int id, string name, string phone, string employment_day)
{
    this->id = id;
    this->name = name;
    this->phone = phone;
    this->employment_day = employment_day;
}

int Employee::get_id()
{
    return this->id;
}

string Employee::get_name()
{
    return name;
}

string Employee::get_phone()
{
    return phone;
}

string Employee::get_employment_day()
{
    return employment_day;
}
