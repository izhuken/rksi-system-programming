#include "book.h"
#include "client.h"
#include "employee.h"
#include "db.h"

#include <string>
#include <iostream>

using namespace std;

DB::DB()
{
    this->bookCount = 0;
    this->clientCount = 0;
    this->employeeCount = 0;

    this->books = new Book *[100];
    this->clients = new Client *[100];
    this->employees = new Employee *[100];
};

DB::~DB()
{
    delete this->books;
    delete this->clients;
    delete this->employees;
};

void DB::append_book(Book *book)
{
    this->books[this->bookCount] = book;
    this->bookCount++;
};

void DB::append_client(Client *client)
{
    this->clients[this->clientCount] = client;
    this->clientCount++;
};

void DB::append_employee(Employee *employee)
{
    this->employees[this->employeeCount] = employee;
    this->employeeCount++;
};

Client **DB::get_clients()
{
    return this->clients;
}

Book **DB::get_books()
{
    return this->books;
}

Employee **DB::get_employees()
{
    return this->employees;
}

int DB::get_client_count()
{
    return this->clientCount;
}

int DB::get_book_count()
{
    return this->bookCount;
}

int DB::get_employee_count()
{
    return this->employeeCount;
}