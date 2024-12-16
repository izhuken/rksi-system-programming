#pragma once

#include "crow_all.h"
#include "dto.h"
#include "menu_item.h"
#include "db_accessor.h"
#include "getter_controller.h"
#include "create_controller.h"

#include <string>
#include <iostream>

using namespace std;

class MenuItemController : public CreateController, public GetterController
{
public:
    MenuItemController(DBAccessor *db_accessor);

    crow::json::wvalue get_all();
    crow::json::wvalue get_by_id(int id);
    crow::json::wvalue create(CreateMenuItemDTO payload);

private:
    DBAccessor *db_accessor;
};