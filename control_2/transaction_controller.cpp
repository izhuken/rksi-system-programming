#include "crow_all.h"
#include "dto.h"
#include "menu_item.h"
#include "transaction_controller.h"
#include "db_accessor.h"

#include <vector>
#include <string>
#include <iostream>

using namespace std;

TransactionController::TransactionController(DBAccessor *db_accessor)
{
    this->db_accessor = db_accessor;
};

crow::json::wvalue TransactionController::create(CreateTransactionDTO payload)
{
    crow::json::wvalue result;
    MenuItem *menu_item = this->db_accessor->get_menu_item_by_id(payload.menu_item_id);

    if (menu_item == NULL)
    {

        return NULL;
    }

    if (payload.quantity <= 0)
    {
        return NULL;
    }

    // два цикла с целью реализации принципа "все или ничего"
    for (int &id : menu_item->get_product())
    {
        bool check_result = this->db_accessor->prepare_product_quantity(id, payload.quantity);

        if (!check_result)
        {
            result["details"] = "Menu item with this id not found";
            return NULL;
        }
    }

    for (int &id : menu_item->get_product())
    {
        this->db_accessor->decrease_product_quantity(id, payload.quantity);
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
