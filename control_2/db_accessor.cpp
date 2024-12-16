#include "product.h"
#include "employee.h"
#include "menu_item.h"
#include "db_accessor.h"

#include <iostream>
#include <vector>
#include <ctime>
#include <ctime>

using namespace std;

DBAccessor::DBAccessor()
{
    this->db = new DB();
};

DBAccessor::~DBAccessor()
{
    delete db;
}

Employee *DBAccessor::create_employee(string name, string phone)
{
    time_t rawtime;
    struct tm *timeinfo;
    char buffer[80];

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    strftime(buffer, sizeof(buffer), "%d-%m-%Y", timeinfo);
    string str(buffer);

    Employee *employee = new Employee(this->db->get_employee_count(), name, phone, str);
    this->db->append_employee(employee);

    return employee;
}

Employee *DBAccessor::get_employee_by_id(int id)
{
    int employee_count = this->db->get_employee_count();
    Employee **employees = this->db->get_employees();

    for (int i = 0; i < employee_count; i++)
    {
        Employee *current = employees[i];
        if (current->get_id() == id)
        {
            return current;
        }
    }

    return NULL;
}

Employee **DBAccessor::get_employees()
{
    return this->db->get_employees();
}

int DBAccessor::get_employee_count()
{
    return this->db->get_employee_count();
}

Product *DBAccessor::create_product(string name, int quantity)
{
    Product *product = new Product(this->db->get_product_count(), name, quantity);
    this->db->append_product(product);

    return product;
}

Product *DBAccessor::get_product_by_id(int id)
{

    int product_count = this->db->get_product_count();
    Product **products = this->db->get_products();

    for (int i = 0; i < product_count; i++)
    {
        Product *current = products[i];
        if (current->get_id() == id)
        {
            return current;
        }
    }

    return NULL;
}

Product **DBAccessor::get_products()
{
    return this->db->get_products();
}

int DBAccessor::get_product_count()
{
    return this->db->get_product_count();
}

MenuItem *DBAccessor::create_menu_item(string name, int cost, vector<int> product)
{
    for (int &id : product)
    {
        Product *current = this->get_product_by_id(id);

        if (current == NULL)
        {
            return NULL;
        }
    }

    MenuItem *menu_item = new MenuItem(this->db->get_menu_item_count(), name, cost, product);
    this->db->append_menu_item(menu_item);

    return menu_item;
}

MenuItem *DBAccessor::get_menu_item_by_id(int id)
{

    int menu_item_count = this->db->get_menu_item_count();
    MenuItem **menu_items = this->db->get_menu_items();

    for (int i = 0; i < menu_item_count; i++)
    {
        MenuItem *current = menu_items[i];
        if (current->get_id() == id)
        {
            return current;
        }
    }

    return NULL;
}

MenuItem **DBAccessor::get_menu_items()
{
    return this->db->get_menu_items();
}

int DBAccessor::get_menu_item_count()
{
    return this->db->get_menu_item_count();
}