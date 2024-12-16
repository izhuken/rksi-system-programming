#pragma once

#include "crow_all.h"
#include "dto.h"

#include <string>
#include <iostream>

using namespace std;

class GetterController
{
public:
    virtual crow::json::wvalue create(BaseDTO payload);
};