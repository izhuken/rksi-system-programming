#pragma once

#include <string>
#include <iostream>

using namespace std;

struct ClientCreatePayload
{
    string name;
    string phone;
};

struct TransactionPayload
{
    string client_name;
    string book_name;
};

struct BookCreatePayload
{
    string name;
    string description;
    float cost;
    int quantity;
    string author;
};

struct EmployeeCreatePayload
{
    string name;
    string phone;
};
