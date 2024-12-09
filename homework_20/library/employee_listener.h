#pragma once

#include "employee.h"
#include "db_accessor.h"
#include "dto.h"

#include <string>
#include <iostream>

class EmployeeListener
{
public:
    EmployeeListener(DBAccessor *db_accessor);

    void command();

private:
    DBAccessor *db_accessor;
    void display_all();
    void create();
};