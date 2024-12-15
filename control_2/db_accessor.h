#pragma once

#include "db.h"
#include "employee.h"

#include <string>
#include <iostream>

using namespace std;

class DBAccessor
{
public:
    DBAccessor();
    ~DBAccessor();

    int get_employee_count();
    Employee **get_employees();
    Employee *create_employee(string name, string phone);

private:
    DB *db;
};