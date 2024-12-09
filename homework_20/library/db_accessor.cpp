#include "db.h"
#include "book.h"
#include "client.h"
#include "employee.h"
#include "db_accessor.h"

#include <iostream>
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

void DBAccessor::create_book(string name, string description, float cost, int quantity, string author)
{
    Book *book = new Book(name, description, cost, quantity, author);
    this->db->append_book(book);
};

void DBAccessor::create_client(string name, string phone)
{
    Client *client = new Client(name, phone, 0.0);
    this->db->append_client(client);
};

void DBAccessor::create_employee(string name, string phone)
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
};

Book *DBAccessor::get_book(string name)
{
    int book_size = this->db->get_book_count();
    Book **books = this->db->get_books();

    for (int i = 0; i < book_size; i++)
    {
        if (books[i]->get_name() == name)
        {
            return books[i];
        }
    }

    return NULL;
}

Client *DBAccessor::get_client(string name)
{
    int client_size = this->db->get_client_count();
    Client **clients = this->db->get_clients();

    for (int i = 0; i < client_size; i++)
    {
        if (clients[i]->get_name() == name)
        {
            return clients[i];
        }
    }

    return NULL;
}

Employee *DBAccessor::get_employee(string name)
{
    int employee_size = this->db->get_employee_count();
    Employee **employees = this->db->get_employees();

    for (int i = 0; i < employee_size; i++)
    {
        if (employees[i]->get_name() == name)
        {
            return employees[i];
        }
    }

    return NULL;
}

bool DBAccessor::book_transaction(string client_name, string book_name)
{
    Book *book = this->get_book(book_name);
    Client *client = this->get_client(client_name);

    if (!book || !client)
        return false;

    book->decrease_quantity();
    client->increase_total_spent(book->get_cost());

    return true;
};

Client **DBAccessor::get_clients()
{
    return this->db->get_clients();
}

Book **DBAccessor::get_books()
{
    return this->db->get_books();
}

Employee **DBAccessor::get_employees()
{
    return this->db->get_employees();
}

int DBAccessor::get_client_count()
{
    return this->db->get_client_count();
}

int DBAccessor::get_book_count()
{
    return this->db->get_book_count();
}

int DBAccessor::get_employee_count()
{
    return this->db->get_employee_count();
}