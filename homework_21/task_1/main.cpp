#include <iostream>
#include <string>
#include "snack.h"
#include "snack_slot.h"
#include "vending_machine.h"

using namespace std;

int main()
{
    Snack *bounty = new Snack("Bounty", 10);
    Snack *snickers = new Snack("Snickers", 20);
    Snack *skittles = new Snack("Skittles", 30);
    SnackSlot *slot = new SnackSlot(10, 1);
    Snack **snacks = new Snack *[3]{bounty, snickers, skittles};

    for (int i = 0; i < 3; i++)
    {
        bool result = slot->addSnack(snacks[i]);

        if (!result)
        {
            cout << "Слот заполнен" << endl;
            break;
        }
        cout << "Снек " << snacks[i]->getName() << " добавлен" << endl;
    }

    bool updateResult = slot->updateSnackCost(bounty->getName(), 15);

    if (!updateResult)
    {
        cout << "Товар не найден" << endl;
    }

    VendingMachine *machine = new VendingMachine(10);

    bool appendResult = machine->addSlot(slot);

    if (!appendResult)
    {
        cout << "Автомат заполнен" << endl;
    }

    int emptySlotsCount = machine->getEmptySlotsCount();
    cout << "Количество пустых слотов: " << emptySlotsCount << endl;

    double money = 100;

    string boughtResult = machine->buySnack(1, "Bounty", money);

    if (boughtResult == "not_enough_money")
    {
        cout << "Недостаточно средств" << endl;
    }
    else if (boughtResult == "snack_not_found")
    {
        cout << "Товара не осталось" << endl;
    }
    else if (boughtResult == "slot_not_found")
    {
        cout << "Такого слота не существует" << endl;
    }
    else
    {
        cout << "Спасибо за покупку" << endl;
    }

    cout << "Остаток: " << money << endl;

    delete machine;
    delete slot;
    delete bounty;
    delete snickers;
    delete skittles;
    delete[] snacks;

    return 0;
};