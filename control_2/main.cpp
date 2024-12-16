#include "dto.h"
#include "crow_all.h"
#include "transaction_controller.h"
#include "menu_item_controller.h"
#include "product_controller.h"
#include "employee_controller.h"
#include "db_accessor.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;
using namespace crow;

int main()
{
    DBAccessor *db_accessor = new DBAccessor();
    EmployeeController *employee_controller = new EmployeeController(db_accessor);
    ProductController *product_controller = new ProductController(db_accessor);
    MenuItemController *menu_item_controller = new MenuItemController(db_accessor);
    TransactionController *transaction_controller = new TransactionController(db_accessor);

    crow::SimpleApp app;

    CROW_ROUTE(app, "/")
    ([]()
     { return "Hello world"; });

    CROW_ROUTE(app, "/employee")
    ([&]()
     { return employee_controller->get_all(); });

    CROW_ROUTE(app, "/employee/<int>")
    ([&](int id)
     { return employee_controller->get_by_id(id); });

    CROW_ROUTE(app, "/employee/create")
        .methods(crow::HTTPMethod::POST)([&](crow::request req)
                                         {
        auto json_body = crow::json::load(req.body);

        CreateEmployeeDTO create_employee_dto;
        
        create_employee_dto.name = json_body["name"].s();
        create_employee_dto.phone = json_body["phone"].s();

        return employee_controller->create(create_employee_dto); });

    CROW_ROUTE(app, "/product")
    ([&]()
     { return product_controller->get_all(); });

    CROW_ROUTE(app, "/product/<int>")
    ([&](int id)
     { return product_controller->get_by_id(id); });

    CROW_ROUTE(app, "/product/create")
        .methods(crow::HTTPMethod::POST)([&](crow::request req)
                                         {
        auto json_body = crow::json::load(req.body);

        CreateProductDTO create_product_dto;
        
        create_product_dto.name = json_body["name"].s();
        create_product_dto.quantity = json_body["quantity"].i();

        return product_controller->create(create_product_dto); });

    CROW_ROUTE(app, "/menu")
    ([&]()
     { return menu_item_controller->get_all(); });

    CROW_ROUTE(app, "/menu_item/<int>")
    ([&](int id)
     { return menu_item_controller->get_by_id(id); });

    CROW_ROUTE(app, "/menu_item/create")
        .methods(crow::HTTPMethod::POST)([&](crow::request req)
                                         {
        auto json_body = crow::json::load(req.body);

        CreateMenuItemDTO create_menu_item_dto;

        create_menu_item_dto.name = json_body["name"].s();
        create_menu_item_dto.cost = json_body["cost"].i();
        create_menu_item_dto.product = vector<int>{};

        for (const auto &num : json_body["product"])
        {
            create_menu_item_dto.product.push_back(num.i());
        }

        std::cout << std::endl;
        return menu_item_controller->create(create_menu_item_dto); });

    CROW_ROUTE(app, "/transaction")
        .methods(crow::HTTPMethod::POST)([&](crow::request req)
                                         {
            auto json_body = crow::json::load(req.body);

            CreateTransactionDTO create_transaction_dto;

            create_transaction_dto.menu_item_id = json_body["menu_item_id"].i();
            create_transaction_dto.quantity = json_body["quantity"].i();

            return transaction_controller->create(create_transaction_dto); });

    app.port(8080).run();

    delete employee_controller;
    delete db_accessor;

    return 0;
}