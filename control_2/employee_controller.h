#pragma once

#include "crow_all.h"
#include "dto.h"
#include "employee.h"
#include "db_accessor.h"

#include <string>
#include <iostream>

class EmployeeController
{
public:
    EmployeeController(DBAccessor *db_accessor);

    crow::json::wvalue get_all();
    crow::json::wvalue create(CreateEmployeeDTO payload);

private:
    DBAccessor *db_accessor;
};