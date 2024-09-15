#include <iostream>

#define len(x) sizeof(x)/sizeof(x[0]);

using namespace std;

/*
Напишите программу, которая считает количество элементов в массиве,
кратных числу, которое вводится с консоли.
*/

int main() {
    int array[6] = {500, 4, 24, 15, 100, 105};
    int array_length = len(array);
    int dividerCounter = 0;

    int divider;

    cout << "Введите делитель: ";
    cin >> divider;

    for (int i = 0; i < array_length; i++) {
        if (array[i] % divider == 0) {
            dividerCounter++;
        }
    }

    cout << "Делитель встречается " << dividerCounter << " раз." << endl;

    return 0;
}