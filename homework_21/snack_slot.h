#pragma once
#include <vector>
#include "snack.h"

using namespace std;

class SnackSlot
{
public:
    SnackSlot();
    SnackSlot(int snackCount, int snackSlotNumber);

    int getSnackCount() const;
    void setSnackCount(int snackCount);

    int getSnackSlotNumber() const;
    void setSnackSlotNumber(int snackSlotNumber);

    vector<Snack> &getSnacks();

    bool updateSnackCost(string name, double newCost);

    bool addSnack(Snack *snack);

private:
    int _snackSlotNumber;
    int _snackCount;
    static vector<Snack> _snacks;
};