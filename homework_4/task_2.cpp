#include <iostream>

#define len(x) sizeof(x)/sizeof(x[0]);

using namespace std;

/*
Напишите код, который найдёт сумму всех элементов массива
int arr[ ] = {500, 4, 24, 15, 100, 105} с помощью цикла for и с помощью цикла while.
*/

int main() {
    int whileIterator = 0;
    int array[6] = {500, 4, 24, 15, 100, 105};
    int array_length = len(array);

    int forCycleResult = 0;
    int whileCycleResult = 0;

    for (int i = 0; i < array_length; i++) {
        forCycleResult += array[i];
    }

    while (whileIterator < array_length) {
        whileCycleResult += array[whileIterator];
        whileIterator++;
    }

    cout << "Результат цикла for: " << forCycleResult << endl;
    cout << "Результат цикла while: " << whileCycleResult << endl;

    return 0;
}