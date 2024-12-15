#include "employee.h"

#include <string>
#include <iostream>

using namespace std;

Employee::Employee(string name, string phone, string employment_day)
{
    this->name = name;
    this->phone = phone;
    this->employment_day = employment_day;
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

void Employee::display()
{
    cout << this->name << " " << this->phone << " " << this->employment_day << endl;
}