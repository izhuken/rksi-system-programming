#include "employee_listener.h"
#include "employee.h"
#include "db_accessor.h"

#include <string>
#include <iostream>

using namespace std;

EmployeeListener::EmployeeListener(DBAccessor *db_accessor)
{
    this->db_accessor = db_accessor;
};

void EmployeeListener::command()
{
    cout << "Раздел \"сотрудники\"" << endl;

    cout << "Введите номер комманды:" << endl
         << "1. Вывод всех сотрудников" << endl
         << "2. Создать сотрудника" << endl
         << "q. Выход" << endl;

    char command;
    cin >> command;

    switch (command)
    {
    case '1':
        this->display_all();
        break;

    case '2':
        this->create();
        break;
    default:
        break;
    }
};

void EmployeeListener::display_all()
{
    cout << "Сотрудники:" << endl;
    Employee **employees = this->db_accessor->get_employees();
    for (int i = 0; i < this->db_accessor->get_employee_count(); i++)
    {
        cout << i + 1 << ". ";
        employees[i]->display();
    }
}

void EmployeeListener::create()
{
    cout << "Введите имя сотрудника: ";
    string name;
    cin >> name;

    cout << "Введите номер телефона сотрудника: ";
    string phone;
    cin >> phone;

    this->db_accessor->create_employee(name, phone);
}