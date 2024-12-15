#pragma once

#include "employee.h"

using namespace std;

class DB
{
public:
    DB();
    ~DB();

    void append_employee(Employee *employee);

    Employee **get_employees();
    int get_employee_count();

private:
    int employee_count;

    Employee **employees;
};