#pragma once
#include "snack_slot.h"
#include <vector>

using namespace std;

class VendingMachine
{

public:
    VendingMachine();
    VendingMachine(int slotCount);

    int getSlotCount();

    bool addSlot(SnackSlot *slot);

    int getEmptySlotsCount();

    string buySnack(int slotNumber, string snackName, double &money);

private:
    int _slotCount;
    static vector<SnackSlot> _slots;
};