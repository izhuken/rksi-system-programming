#pragma once

#include "crow_all.h"
#include "dto.h"
#include "employee.h"
#include "db_accessor.h"
#include "getter_controller.h"
#include "create_controller.h"

#include <string>
#include <iostream>

using namespace std;

class EmployeeController : public CreateController, public GetterController
{
public:
    EmployeeController(DBAccessor *db_accessor);

    crow::json::wvalue get_all();
    crow::json::wvalue get_by_id(int id);
    crow::json::wvalue create(CreateEmployeeDTO payload);

private:
    DBAccessor *db_accessor;
};