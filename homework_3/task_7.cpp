#include <iostream>

using namespace std;

/*
Напишите программу, которая запрашивает у пользователя целое число n и проверяет,
является ли оно простым. Простое число — это число, которое делится только на себя
и на единицу. Используйте цикл for и оператор break для прерывания цикла,
если найден делитель числа.
*/

int main() {
    int number;

    cout << "Введите число: ";
    cin >> number;

    if (number < 2) {
        cout << "Число " << number << " простое" << endl;
        return 0;
    }

    for (int i = 2; i < number; i++) {
        if (number % i != 0) {
            continue;
        }
        
        cout << "Число " << number << " не простое" << endl;
        return 0;
    }

    cout << "Число " << number << " простое";

    return 0;
}