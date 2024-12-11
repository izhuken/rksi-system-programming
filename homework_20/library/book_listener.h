#pragma once

#include "book.h"
#include "db_accessor.h"

#include <string>
#include <iostream>

using namespace std;

class BookListener
{
public:
    BookListener(DBAccessor *db_accessor);

    void command();

private:
    DBAccessor *db_accessor;
    void display_all();
    void create();
};