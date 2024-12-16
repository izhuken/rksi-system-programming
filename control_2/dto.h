#pragma once

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