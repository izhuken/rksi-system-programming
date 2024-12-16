#pragma once

#include "product.h"
#include "menu_item.h"
#include "employee.h"

using namespace std;

class DB
{
public:
    DB();
    ~DB();

    void append_employee(Employee *employee);
    void append_product(Product *product);
    void append_menu_item(MenuItem *menu_item);

    Employee **get_employees();
    int get_employee_count();

    Product **get_products();
    int get_product_count();

    MenuItem **get_menu_items();
    int get_menu_item_count();

private:
    int product_count;
    int employee_count;
    int menu_item_count;

    Product **products;
    Employee **employees;
    MenuItem **menu_items;
};