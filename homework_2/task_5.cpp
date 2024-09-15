#include <iostream>

using namespace std;

/*
Написать программу, которая проверяет, является ли введенное пользователем
число четным и положительным. И выводит 1, если это так, иначе 0.
*/

int main() {
    int number;
    cout << "Введите число: ";
    cin >> number;
    
    if (number % 2 == 0 && number >= 0) {
        cout << 1 << endl;
        return 0;
    }

    cout << 0 << endl;
    return 0;
}