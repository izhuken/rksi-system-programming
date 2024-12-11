#pragma once

#include "play.h"
#include "db_accessor.h"

#include <string>
#include <iostream>

class PlayListener
{
public:
    PlayListener(DBAccessor *db_accessor);

    void command();

private:
    DBAccessor *db_accessor;
    void display_all();
    void create();
};