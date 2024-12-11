#pragma once

#include "play.h"
#include "client.h"
#include "employee.h"

using namespace std;

class DB
{
public:
    DB();
    ~DB();

    void append_play(Play *play);
    void append_client(Client *client);
    void append_employee(Employee *employee);

    Play **get_plays();
    Client **get_clients();
    Employee **get_employees();

    int get_play_count();
    int get_client_count();
    int get_employee_count();

private:
    int play_count;
    int client_count;
    int employee_count;

    Client **clients;
    Employee **employees;
    Play **plays;
};