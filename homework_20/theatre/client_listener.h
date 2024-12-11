#pragma once

#include "client.h"
#include "db_accessor.h"

#include <string>
#include <iostream>

using namespace std;

class ClientListener
{
public:
    ClientListener(DBAccessor *db_accessor);

    void command();

private:
    DBAccessor *db_accessor;
    void display_all();
    void create();
    void transaction();
};