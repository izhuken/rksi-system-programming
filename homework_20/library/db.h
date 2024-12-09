#pragma once

#include "book.h"
#include "client.h"
#include "employee.h"

using namespace std;

class DB
{
public:
    DB();
    ~DB();

    void append_client(Client *client);
    void append_book(Book *book);
    void append_employee(Employee *employee);

    Client **get_clients();
    Book **get_books();
    Employee **get_employees();

    int get_client_count();
    int get_book_count();
    int get_employee_count();

private:
    int clientCount;
    int bookCount;
    int employeeCount;
    Client **clients;
    Book **books;
    Employee **employees;
};