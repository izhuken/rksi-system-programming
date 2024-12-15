#include "employee.h"
#include "db.h"

#include <string>
#include <iostream>

using namespace std;

DB::DB()
{
    this->employee_count = 0;

    this->employees = new Employee *[100];
};

DB::~DB()
{
    delete[] this->employees;
};

void DB::append_employee(Employee *employee)
{
    this->employees[this->employee_count] = employee;
    this->employee_count++;
};

Employee **DB::get_employees()
{
    return this->employees;
}

int DB::get_employee_count()
{
    return this->employee_count;
}