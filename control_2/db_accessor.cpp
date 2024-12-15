#include "employee.h"
#include "db_accessor.h"

#include <iostream>
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

    Employee *employee = new Employee(name, phone, str);
    this->db->append_employee(employee);

    return employee;
}

Employee **DBAccessor::get_employees()
{
    return this->db->get_employees();
}

int DBAccessor::get_employee_count()
{
    return this->db->get_employee_count();
}
