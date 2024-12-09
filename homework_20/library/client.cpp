#include "client.h"

#include <string>
#include <iostream>

using namespace std;

Client::Client(string name, string phone, float total_spent)
{
    this->name = name;
    this->phone = phone;
    this->total_spent = total_spent;
}

string Client::get_name()
{
    return this->name;
}

void Client::increase_total_spent(float total_spent)
{
    this->total_spent += total_spent;
}

void Client::display()
{
    cout << this->name << " " << this->phone << " " << this->total_spent << endl;
}