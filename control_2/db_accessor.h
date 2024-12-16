#pragma once

#include "db.h"
#include "product.h"
#include "employee.h"
#include "menu_item.h"

#include <vector>
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
    Employee *get_employee_by_id(int id);
    Employee *create_employee(string name, string phone);

    int get_product_count();
    Product **get_products();
    Product *get_product_by_id(int id);
    Product *create_product(string name, int quantity);

    int get_menu_item_count();
    MenuItem **get_menu_items();
    MenuItem *get_menu_item_by_id(int id);
    MenuItem *create_menu_item(string name, int cost, vector<int> product);

private:
    DB *db;
};