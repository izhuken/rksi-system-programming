#include <iostream>

using namespace std;

/*
Напишите программу, которая запрашивает у пользователя целое
число n и выводит на экран все четные числа от 0 до n включительно.
*/

int main() {
    int limit;

    cout << "Введите число: ";
    cin >> limit;

    cout << "Четные числа от 0 до " << limit << ": " << endl;

    for (int i = 0; i <= limit; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }
    
    return 0;
}