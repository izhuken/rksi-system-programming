#include <iostream>

using namespace std;

/*
Напишите программу, которая считает сумму чисел от 1 до 100,
но останавливается, когда сумма станет больше 1000 и выводит полученную сумму.
*/

int main() {
    int i = 1;
    int number = 0;

    while (number < 1000 && i <= 100) {
        number += i;
        i++;
    }
    
    cout << "Число: " << number << endl;

    return 0;
}