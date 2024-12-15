#include "dto.h"
#include "crow_all.h"
#include "employee_controller.h"
#include "db_accessor.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
    DBAccessor *db_accessor = new DBAccessor();
    EmployeeController *employee_controller = new EmployeeController(db_accessor);

    crow::SimpleApp app;

    CROW_ROUTE(app, "/")
    ([]()
     { return "Hello world"; });

    CROW_ROUTE(app, "/employee")
    ([&]()
     { return employee_controller->get_all(); });

    CROW_ROUTE(app, "/employee/create")
        .methods(crow::HTTPMethod::POST)([&](crow::request req)
                                         {
        auto json_body = crow::json::load(req.body);

        CreateEmployeeDTO create_employee_dto;
        
        create_employee_dto.name = json_body["name"].s();
        create_employee_dto.phone = json_body["phone"].s();

        return employee_controller->create(create_employee_dto); });

    app.port(8080).run();

    delete employee_controller;
    delete db_accessor;

    return 0;
}