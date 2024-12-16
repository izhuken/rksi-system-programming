#include "crow_all.h"
#include "dto.h"
#include "employee_controller.h"
#include "employee.h"
#include "db_accessor.h"

#include <vector>
#include <string>
#include <iostream>

using namespace std;

EmployeeController::EmployeeController(DBAccessor *db_accessor)
{
    this->db_accessor = db_accessor;
};

crow::json::wvalue EmployeeController::get_all()
{

    vector<crow::json::wvalue> array;

    int employee_count = this->db_accessor->get_employee_count();
    Employee **employees = this->db_accessor->get_employees();
    for (int i = 0; i < employee_count; i++)
    {
        crow::json::wvalue _x;
        _x["id"] = employees[i]->get_id();
        _x["name"] = employees[i]->get_name();
        _x["phone"] = employees[i]->get_phone();
        _x["employment_day"] = employees[i]->get_employment_day();
        array.push_back(move(_x));
    }

    return array;
}

crow::json::wvalue EmployeeController::get_by_id(int id)
{
    crow::json::wvalue result;

    Employee *employee = this->db_accessor->get_employee_by_id(id);

    if (employee == NULL)
    {
        return NULL;
    }

    result["id"] = employee->get_id();
    result["name"] = employee->get_name();
    result["phone"] = employee->get_phone();
    result["employment_day"] = employee->get_employment_day();
    return result;
}

crow::json::wvalue EmployeeController::create(CreateEmployeeDTO payload)
{
    Employee *employee = this->db_accessor->create_employee(payload.name, payload.phone);

    crow::json::wvalue result;
    result["id"] = employee->get_id();
    result["name"] = employee->get_name();
    result["phone"] = employee->get_phone();
    result["employment_day"] = employee->get_employment_day();

    return result;
}