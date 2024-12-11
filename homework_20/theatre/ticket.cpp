#include "ticket.h"
#include <string>
#include <iostream>

using namespace std;

Ticket::Ticket(string play_name, float cost)
{
    this->play_name = play_name;
    this->cost = cost;
}

void Ticket::display()
{
    cout << this->play_name << " " << this->cost << endl;
}