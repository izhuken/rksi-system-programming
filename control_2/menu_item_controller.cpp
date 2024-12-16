#include "crow_all.h"
#include "dto.h"
#include "product.h"
#include "menu_item.h"
#include "menu_item_controller.h"
#include "db_accessor.h"
#include "getter_controller.h"
#include "create_controller.h"

#include <vector>
#include <string>
#include <iostream>

using namespace std;

MenuItemController::MenuItemController(DBAccessor *db_accessor)
{
    this->db_accessor = db_accessor;
};

crow::json::wvalue MenuItemController::get_all()
{
    vector<crow::json::wvalue> array;

    int menu_item_count = this->db_accessor->get_menu_item_count();
    MenuItem **menu_items = this->db_accessor->get_menu_items();

    for (int i = 0; i < menu_item_count; i++)
    {
        array.push_back(move(this->get_by_id(menu_items[i]->get_id())));
    }

    return array;
}

crow::json::wvalue MenuItemController::get_by_id(int id)
{
    crow::json::wvalue result;

    MenuItem *menu_item = this->db_accessor->get_menu_item_by_id(id);

    if (menu_item == NULL)
    {
        return NULL;
    }

    vector<crow::json::wvalue> products;
    result["id"] = menu_item->get_id();
    result["name"] = menu_item->get_name();
    result["cost"] = menu_item->get_cost();

    result["product"] = vector<crow::json::wvalue>{};

    for (int &id : menu_item->get_product())
    {
        Product *product = this->db_accessor->get_product_by_id(id);
        crow::json::wvalue _x;

        _x["id"] = id;
        _x["name"] = product->get_name();
        _x["quantity"] = product->get_quantity();
        products.push_back(_x);
    }

    result["product"] = move(products);

    return result;
}

crow::json::wvalue MenuItemController::create(CreateMenuItemDTO payload)
{
    MenuItem *menu_item = this->db_accessor->create_menu_item(payload.name, payload.cost, payload.product);
    return this->get_by_id(menu_item->get_id());
}