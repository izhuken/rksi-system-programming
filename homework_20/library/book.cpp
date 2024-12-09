#include "book.h"

#include <string>
#include <iostream>

using namespace std;

Book::Book(string name, string description, float cost, int quantity, string author)
{
    this->name = name;
    this->description = description;
    this->cost = cost;
    this->quantity = quantity;
    this->author = author;
}

string Book::get_name()
{
    return this->name;
}

void Book::decrease_quantity()
{
    this->quantity--;
}

float Book::get_cost()
{
    return this->cost;
}

void Book::display()
{
    cout << this->name << " " << this->description << " " << this->cost << " " << this->quantity << " " << this->author << endl;
}