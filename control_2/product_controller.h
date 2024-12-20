#pragma once

#include "crow_all.h"
#include "dto.h"
#include "getter_controller.h"
#include "create_controller.h"
#include "db_accessor.h"

#include <string>
#include <iostream>

using namespace std;

class ProductController : public CreateController, public GetterController
{
public:
    ProductController(DBAccessor *db_accessor);

    crow::json::wvalue get_all();
    crow::json::wvalue get_by_id(int id);
    crow::json::wvalue create(CreateProductDTO payload);

private:
    DBAccessor *db_accessor;
};