#include <iostream>
#include <vector>
#include "snack.h"
#include "snack_slot.h"
#include "vending_machine.h"

using namespace std;

vector<SnackSlot> VendingMachine::_slots;

VendingMachine::VendingMachine(int slotCount) : _slotCount(slotCount) {}
VendingMachine::VendingMachine() : VendingMachine(0) {}

int VendingMachine::getSlotCount()
{
    return _slotCount;
}

bool VendingMachine::addSlot(SnackSlot *slot)
{
    if (_slots.size() == this->getSlotCount())
    {
        return false;
    }

    _slots.push_back(*slot);

    return true;
}

int VendingMachine::getEmptySlotsCount()
{
    return this->_slotCount - _slots.size();
}

string VendingMachine::buySnack(int slotNumber, string snackName, double &money)
{
    SnackSlot *currentSlot;
    Snack *currentSnack;
    int snackIndex;

    for (int i = 0; i < this->_slotCount; i++)
    {
        if (this->_slots[i].getSnackSlotNumber() == slotNumber)
        {
            currentSlot = &this->_slots[i];
            break;
        }
    }

    if (!currentSlot)
    {
        return "slot_not_found";
    }

    for (int i = 0; i < currentSlot->getSnackCount(); i++)
    {
        if (currentSlot->getSnacks()[i].getName() == snackName)
        {
            currentSnack = &currentSlot->getSnacks()[i];
            snackIndex = i;
            break;
        }
    }

    if (!currentSnack)
    {
        return "snack_not_found";
    }

    if (money < currentSnack->getCost())
    {
        return "not_enough_money";
    }

    money -= currentSnack->getCost();
    currentSlot->setSnackCount(currentSlot->getSnackCount() - 1);
    currentSlot->getSnacks().erase(currentSlot->getSnacks().begin() + snackIndex);

    return "success";
}