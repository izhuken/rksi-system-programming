#include <cmath>
#include <iostream>

using namespace std;

/*
Напишите программу (простейший консольный калькулятор), которая принимает
от пользователя два целых числа и поочередно выводит результаты простейших
математических (сложение, вычитание, умножение, деление) для этих чисел.
*/

int main() {
    float first_num;
    float second_num;

    cout << "Введите первое число: ";
    cin >> first_num;

    cout << "Введите второе число: ";
    cin >> second_num;
    
    cout << "Сложение: " << first_num + second_num << endl;
    cout  << "Вычитание: " << first_num - second_num << endl;
    cout << "Умножение: " << first_num * second_num << endl;

    if (second_num=0) {
        cout << "Делить на О нельзя";
        return 0;
    }

    cout << "Деление: " << first_num / second_num << endl;
    return 0;
}
