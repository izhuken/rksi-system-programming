#include <cmath>
#include <iostream>

using namespace std;

/*
Напишите определение функции multiplyOrAdd, которая принимает на вход три аргумента:
булевский и два вещественных и возвращает вещественный тип. Внутри тела функции
должно быть произведено умножение или сложение переданных вещественных чисел в
зависимости от значения булевской переменной. Выведите значение в консоль.

Перепишете функцию multiplyOrAdd так, чтобы она принимала аргумент по
умолчанию add = true. Вызовите новую функцию в main.
*/

float mutliplyOrAdd(float a, float b, bool add = true);

int main()
{
    float a;
    float b;
    bool isAdd;
    float result;

    cout << "Введите число a: ";
    cin >> a;

    cout << "Введите число b: ";
    cin >> b;

    cout << "Сложение или нет? ";
    cin >> isAdd;

    result = mutliplyOrAdd(a, b, isAdd);

    cout << "Результат: " << result << endl;

    return 0;
}

float mutliplyOrAdd(float a, float b, bool add = true)
{
    if (add)
    {
        return a + b;
    }

    return a * b;
}