#include "play.h"
#include "client.h"
#include "employee.h"
#include "db.h"

#include <string>
#include <iostream>

using namespace std;

DB::DB()
{
    this->play_count = 0;
    this->client_count = 0;
    this->employee_count = 0;

    this->plays = new Play *[100];
    this->clients = new Client *[100];
    this->employees = new Employee *[100];
};

DB::~DB()
{
    delete[] this->plays;
    delete[] this->clients;
    delete[] this->employees;
};

void DB::append_play(Play *play)
{
    this->plays[this->play_count] = play;
    this->play_count++;
};

void DB::append_client(Client *client)
{
    this->clients[this->client_count] = client;
    this->client_count++;
};

void DB::append_employee(Employee *employee)
{
    this->employees[this->employee_count] = employee;
    this->employee_count++;
};

Play **DB::get_plays()
{
    return this->plays;
}

Client **DB::get_clients()
{
    return this->clients;
}

Employee **DB::get_employees()
{
    return this->employees;
}

int DB::get_play_count()
{
    return this->play_count;
}

int DB::get_client_count()
{
    return this->client_count;
}

int DB::get_employee_count()
{
    return this->employee_count;
}