#pragma once

#include "crow_all.h"
#include "dto.h"
#include "db_accessor.h"

#include <string>
#include <iostream>

using namespace std;

class TransactionController
{
public:
    TransactionController(DBAccessor *db_accessor);

    crow::json::wvalue create(CreateTransactionDTO payload);

private:
    DBAccessor *db_accessor;
};