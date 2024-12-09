#pragma once

#include "db.h"
#include "book.h"
#include "client.h"
#include "employee.h"

#include <string>
#include <iostream>

using namespace std;

class DBAccessor
{
public:
    DBAccessor();
    ~DBAccessor();

    void create_client(string name, string phone);
    void create_book(string name, string description, float cost, int quantity, string author);
    void create_employee(string name, string phone);

    Client *get_client(string name);
    Book *get_book(string name);
    Employee *get_employee(string name);

    Client **get_clients();
    Book **get_books();
    Employee **get_employees();

    int get_client_count();
    int get_book_count();
    int get_employee_count();

    bool book_transaction(string client_name, string book_name);

private:
    DB *db;
};