#include <iostream>

using namespace std;

/*
Используя оператор switch напишите программу, которая принимает
от пользователя день недели и выводит этот день на консоль, и не
забудьте учесть случай, если число не от 1 до 7
*/

int main() {
    int day_index;

    cin >> day_index;

    switch (day_index)
    {
    case 1:
        cout << "Понедельник" << endl;
        break;
    case 2:
        cout << "Вторник" << endl;
        break;
    case 3:
        cout << "Среда" << endl;
        break;
    case 4:
        cout << "Четверг" << endl;
        break;
    case 5:
        cout << "Пятница" << endl;
        break;
    case 6:
        cout << "Суббота" << endl;
        break;
    case 7:
        cout << "Воскресенье" << endl;
        break;
    default:
        cout << "Ошибка: введите число от 1 до 7" << endl;
        break;
    }

    return 0;
}