#include "ticket.h"
#include "client.h"

#include <string>
#include <iostream>

using namespace std;

Client::Client(string name, string phone, float total_spent)
{
    this->name = name;
    this->phone = phone;
    this->total_spent = total_spent;
    this->tickets = new Ticket *[100];
    this->ticket_count = 0;
}

Client::~Client()
{
    delete[] this->tickets;
}

string Client::get_name()
{
    return this->name;
}

void Client::increase_total_spent(float total_spent)
{
    this->total_spent += total_spent;
}

int Client::get_ticket_count()
{
    return this->ticket_count;
}

Ticket **Client::get_tickets()
{
    return this->tickets;
}

void Client::add_ticket(Ticket *ticket)
{
    this->tickets[this->ticket_count] = ticket;
    this->ticket_count++;
}

void Client::display()
{
    cout << this->name << " " << this->phone << " " << this->total_spent << endl;

    cout << "Билеты пользователя: " << endl;
    for (int i = 0; i < this->ticket_count; i++)
    {
        this->tickets[i]->display();
    }
}