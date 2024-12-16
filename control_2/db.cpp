#include "product.h"
#include "employee.h"
#include "menu_item.h"
#include "db.h"

#include <string>
#include <iostream>

using namespace std;

DB::DB()
{
    this->employee_count = 0;
    this->product_count = 0;
    this->menu_item_count = 0;

    this->products = new Product *[100];
    this->employees = new Employee *[100];
    this->menu_items = new MenuItem *[100];
};

DB::~DB()
{
    delete[] this->employees;
    delete[] this->products;
    delete[] this->menu_items;
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

void DB::append_product(Product *product)
{
    this->products[this->product_count] = product;
    this->product_count++;
};

Product **DB::get_products()
{
    return this->products;
}

int DB::get_product_count()
{
    return this->product_count;
}

void DB::append_menu_item(MenuItem *menu_item)
{
    this->menu_items[this->menu_item_count] = menu_item;
    this->menu_item_count++;
};

MenuItem **DB::get_menu_items()
{
    return this->menu_items;
}

int DB::get_menu_item_count()
{
    return this->menu_item_count;
}