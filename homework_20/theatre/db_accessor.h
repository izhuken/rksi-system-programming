#pragma once

#include "db.h"
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
    void create_employee(string name, string phone);
    void create_play(string name, string date, string hall, float cost);

    Client **get_clients();
    Employee **get_employees();
    Play **get_plays();

    int get_client_count();
    int get_employee_count();
    int get_play_count();

    bool ticket_transaction(string play_name, string client_name);

private:
    DB *db;
};