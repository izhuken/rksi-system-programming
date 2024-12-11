#pragma once

#include "ticket.h"
#include "entity.h"
#include <string>
#include <iostream>

using namespace std;

class Client : public Entity
{
public:
    Client(string name, string phone, float total_spent);
    ~Client();

    string get_name();
    int get_ticket_count();
    Ticket **get_tickets();
    void increase_total_spent(float total_spent);
    void add_ticket(Ticket *ticket);
    void display();

private:
    string name;
    string phone;
    float total_spent;

    Ticket **tickets;
    int ticket_count;
};