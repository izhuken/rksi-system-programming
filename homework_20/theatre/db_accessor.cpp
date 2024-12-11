#include "db.h"
#include "client.h"
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

void DBAccessor::create_client(string name, string phone)
{
    Client *client = new Client(name, phone, 0.0);
    this->db->append_client(client);
}

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
}

void DBAccessor::create_play(string name, string date, string hall, float cost)
{
    Play *play = new Play(name, date, hall, cost);
    this->db->append_play(play);
}

Play **DBAccessor::get_plays()
{
    return this->db->get_plays();
}

int DBAccessor::get_play_count()
{
    return this->db->get_play_count();
}

Client **DBAccessor::get_clients()
{
    return this->db->get_clients();
}

Employee **DBAccessor::get_employees()
{
    return this->db->get_employees();
}

int DBAccessor::get_client_count()
{
    return this->db->get_client_count();
}

int DBAccessor::get_employee_count()
{
    return this->db->get_employee_count();
}

bool DBAccessor::ticket_transaction(string play_name, string client_name)
{
    Client **clients = this->db->get_clients();
    int client_count = this->db->get_client_count();

    Play **plays = this->db->get_plays();
    int play_count = this->db->get_play_count();

    Play *play;
    Client *client;

    for (int i = 0; i < play_count; i++)
    {
        if (plays[i]->get_name() == play_name)
        {
            play = plays[i];
            break;
        }
    }

    for (int i = 0; i < client_count; i++)
    {
        if (clients[i]->get_name() == client_name)
        {
            client = clients[i];
            break;
        }
    }

    if (!&play || !&client)
    {
        return false;
    }

    Ticket *ticket = new Ticket(play->get_name(), play->get_cost());
    client->add_ticket(ticket);

    return true;
}