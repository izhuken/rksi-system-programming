#include <iostream>
#include <string>
#include <vector>
#include "snack_slot.h"

using namespace std;

vector<Snack> SnackSlot::_snacks;

SnackSlot::SnackSlot(int snackCount, int snackSlotNumber) : _snackCount(snackCount), _snackSlotNumber(snackSlotNumber) {}
SnackSlot::SnackSlot() : SnackSlot(0, 0) {}

int SnackSlot::getSnackCount() const
{
    return this->_snackCount;
}

void SnackSlot::setSnackCount(int snackCount)
{
    this->_snackCount = snackCount;
}

vector<Snack> &SnackSlot::getSnacks()
{
    return this->_snacks;
}

int SnackSlot::getSnackSlotNumber() const
{
    return _snackSlotNumber;
}

void SnackSlot::setSnackSlotNumber(int snackSlotNumber)
{
    this->_snackSlotNumber = snackSlotNumber;
}

bool SnackSlot::addSnack(Snack *snack)
{
    if (this->_snacks.size() == this->getSnackCount())
    {
        return false;
    }

    this->_snacks.push_back(*snack);

    return true;
}

bool SnackSlot::updateSnackCost(string name, double newCost)
{
    for (int i = 0; i < this->getSnacks().size(); ++i)
    {
        Snack current_snack = this->_snacks[i];

        if (current_snack.getName() == name)
        {
            current_snack.setCost(newCost);
            return true;
        }
    }

    return false;
}