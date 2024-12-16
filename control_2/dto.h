#pragma once

#include <vector>
#include <string>

using namespace std;

struct BaseDTO
{
};

struct CreateEmployeeDTO : BaseDTO
{
    string name;
    string phone;
};

struct CreateProductDTO : BaseDTO
{
    string name;
    int quantity;
};

struct CreateMenuItemDTO : BaseDTO
{
    string name;
    int cost;
    vector<int> product;
};

struct CreateTransactionDTO : BaseDTO
{
    int menu_item_id;
    int quantity;
};