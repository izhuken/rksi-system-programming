#include "crow_all.h"
#include "dto.h"
#include "product_controller.h"
#include "getter_controller.h"
#include "create_controller.h"
#include "db_accessor.h"

#include <string>
#include <iostream>

using namespace std;

ProductController::ProductController(DBAccessor *db_accessor)
{
    this->db_accessor = db_accessor;
};

crow::json::wvalue ProductController::get_all()
{

    vector<crow::json::wvalue> array;

    int product_count = this->db_accessor->get_product_count();
    Product **products = this->db_accessor->get_products();
    for (int i = 0; i < product_count; i++)
    {
        crow::json::wvalue _x;
        _x["id"] = products[i]->get_id();
        _x["name"] = products[i]->get_name();
        _x["quantity"] = products[i]->get_quantity();
        array.push_back(move(_x));
    }

    return array;
}

crow::json::wvalue ProductController::get_by_id(int id)
{
    crow::json::wvalue result;

    Product *product = this->db_accessor->get_product_by_id(id);

    if (product == NULL)
    {
        return NULL;
    }

    result["id"] = product->get_id();
    result["name"] = product->get_name();
    result["quantity"] = product->get_quantity();

    return result;
}

crow::json::wvalue ProductController::create(CreateProductDTO payload)
{
    Product *product = this->db_accessor->create_product(payload.name, payload.quantity);

    crow::json::wvalue result;
    result["id"] = product->get_id();
    result["name"] = product->get_name();
    result["quantity"] = product->get_quantity();

    return result;
}